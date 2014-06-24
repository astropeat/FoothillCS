//
//  FruitStation.cpp
//  Lab 5
//
//  Created by Katrina Bugyi on 6/8/14.
//  Copyright (c) 2014 Katrina Bugyi. All rights reserved.
//

#include "FruitStation.h"


void FruitStation::sort_fruit(){
   Fruit *tmp;
   bool swapped = true;

   while (swapped)
   {
      swapped = false;
      for (int i = 1; i < size_of_array_; ++i)
      {
         if (strcmp(fruit_[i - 1]->fruit_name_, fruit_[i]->fruit_name_) > 0)
         {
            // Then swap
            tmp = fruit_[i - 1];
            fruit_[i - 1] = fruit_[i];
            fruit_[i] = tmp;
            swapped = true;
         }
      }
   }
};


// Public functions:
//FindFruit: take a Fruit name as the only parameter and use binary search to search the array of pointers to Fruit objects.
//If found, return a pointer to the found Fruit. Otherwise return NULL

Fruit* FruitStation::FindFruit(const char* fruit_name){
   int i;
   int min = 0;
   int max = size_of_array_ -1;

   while (max >= min){
      i = (min + max)/2;
      int cmp = strcmp(fruit_name, fruit_[i]->get_name());
      if (cmp == 0){
         return fruit_[i];
      }
      else if(cmp < 0){
         max = i - 1;
      }
      else{
         min = i + 1;
      }
   }

   return NULL;
}


/*
 FruitOrder: take Fruit name and weight as its only parameters. 
 Invoke FindFruit function passing Fruit name to it
 If FindFruit returns NULL output a message “Fruit …. not found in the market”
 Otherwise query the found Fruit object (returned as a pointer) to see if 
 the Fruit has sufficient weight to sell.
 If not, output an error message.
 Otherwise calculate total cost and display it. You also need to update the Fruit’s object after sale.
 */

void FruitStation::FruitOrder(const char* fruit_name, double weight){
   Fruit* fruit;
   fruit = FindFruit(fruit_name);

   if (fruit == NULL){
      cout << "Fruit " << fruit_name << " not found in the market." << endl;
   } else {
      if ( fruit->get_weight() < weight){
         cout << "Not enough " << fruit_name << " in stock." << endl;
      } else {
         //calculate total cost, display it.
         cout << "Total cost : $" << setprecision(2) << fruit->get_unit_price()*weight << endl;
         //update fruit's object after sale.
         fruit->set_weight(fruit->get_weight() - weight);
      }
   }
}

//Friend function: provide a friend function of this class named ListAllFruits.
//This friend function should take a FruitStation object
//(use the most efficient pass by value method given the FruitStation object containing an array of Fruit object pointers).
//Its job is to display all fruits, their weights, and unit price in proper format

void ListAllFruits(FruitStation &fruitstation){
   cout <<"\nFruit:\t\t\tWeight:\t\t\tUnit Price:\n" << endl;

   for (int i=1; i < fruitstation.size_of_array_; i++)
   {
      cout<< setw(2) << fruitstation.fruit_[i]->get_name() << "\t\t\t";
      cout<< fixed <<setw(5)<< setprecision(2) << fruitstation.fruit_[i]->get_weight()<<" lbs\t\t\t";
      cout <<"$" << setprecision(2) << fruitstation.fruit_[i]->get_unit_price() <<"/lb"<< endl;

   }
};

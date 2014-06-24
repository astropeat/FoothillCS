//
//  FruitStation.h
//  Lab 5
//
//  Created by Katrina Bugyi on 6/8/14.
//  Copyright (c) 2014 Katrina Bugyi. All rights reserved.
//

#ifndef __Lab_5__FruitStation__
#define __Lab_5__FruitStation__

#include <iostream>
#include "Fruit.h"

class  FruitStation{

private:

   //Private data members: an array of pointers to Fruit objects (max of 64 pointers)
   //an integer named size to keep track of the number of Fruit objects actually stored in the array

   Fruit *fruit_[64];
   int size_of_array_;

   //Private functions:  // only need to be used internally
   //Sort: to sort the array of pointers to Fruit objects by Fruit name using only either bubble sort or selection sort

   void sort_fruit();
   
public:
   
   // Constructors:
   //Default constructor: initialize all pointers to NULL
   FruitStation(): size_of_array_(0) {
      for(int i = 0; i<64; i++){
         fruit_[i] = NULL;
      }
   }


   /*
    Non-default constructor: take an array of Fruit objects and array length.
    The constructor will dynamically allocate Fruit objects for the array of pointers
    based on the input Fruit array. It also needs to update data member size.
    Finally it will invoke the Sort function to sort all Fruits by their names
    */
   FruitStation(Fruit fruit[], int array_length) {
      for (int i = 0; i < array_length; i++){
         fruit_[i] = new Fruit(fruit[i]);
      }
      size_of_array_ = array_length;
      
      sort_fruit();
   }

   //Destructor: deallocate the Fruit array of pointers
   //(need to use a loop to de-allocate one pointer at a time)

   ~FruitStation() {
      for (int i = 0; i<64;i++) {
         delete fruit_[i];
      }
      cout << "Destroyed Fruit Station." << endl;
   }

   Fruit* FindFruit(const char* fruit_name);

   friend void ListAllFruits(FruitStation &fruitstation);
   void FruitOrder(const char* fruit_name, double weight);
};

void ListAllFruits(FruitStation &fruitstation);

#endif /* defined(__Lab_5__FruitStation__) */

//
//  OnlineSuperMarket.cpp
//  Lab 5
//
//  Created by Katrina Bugyi on 6/8/14.
//  Copyright (c) 2014 Katrina Bugyi. All rights reserved.
//

#include "OnlineSuperMarket.h"
#include "FruitStation.h"

//Public functions:

//Run:  showing some advertising banner about online super market and web address,
//call the friend function ListAllFruits, then using a loop to start asking user to
//either order fruits or to quit. If user selects Fruit ordering invoke FruitStationHandler function.
//Otherwise invoke Quit function.
void OnlineSuperMarket::Run(){

   cout << "Welcome to " << market_name_ << "! Best deals in bits and bytes!" << endl;
   cout << "\t\t\t" << web_address_ << endl;
   ListAllFruits(*fruitstation);

   int option;

   while (option != 2){
      cout << "\nPress 1 to Order Fruit" << endl;
      cout << "Press 2 to Quit" << endl;
      cout << "\nPick now: "; cin >> option;

      switch (option)
      {
         case 1:
            FruitStationHandler();
            ListAllFruits(*fruitstation);
            break;
         case 2:
            Quit();
            break;
      }

   }

}


 //FruitStationHandler: asking for fruit name, weight, then invoke FruitOrder function from
 //FruitStation pointer passing Fruit name and weight to it
void OnlineSuperMarket::FruitStationHandler(){
   string fruit_name;
   int weight;

   cout << "Fruit name? "; cin >> fruit_name;
   cout << "\nWeight? "; cin >> weight;
   fruitstation->FruitOrder(fruit_name.c_str(), weight);

}


 //Quit: Output a “thanks and come again” message
void OnlineSuperMarket::Quit(){
   cout << "Thanks and come again." << endl;
}


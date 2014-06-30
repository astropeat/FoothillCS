//============================================================================
// File Name   : Lab5.cpp
// Author      : Katrina Bugyi
// Copyright   : Your copyright notice
// Description : Lab 5 Foothill C++
// Revision History:
// Date              Version     Change ID    Author          Comment
// 06-24-14          1.0         123          Katrina Bugyi   Turn in
//============================================================================
#ifndef __Lab_5__OnlineSuperMarket__
#define __Lab_5__OnlineSuperMarket__

#include <iostream>
#include "FruitStation.h"

using namespace std;

class  OnlineSuperMarket{

private:
// Private data member: a pointer to FruitStation object, Martket name (XXX for example),
// web address (http://www.xyz.com for example)

   FruitStation * fruitstation;
   string market_name_;
   string web_address_;


public:
//Constructors (default constructor and non-default constructor): initialize Market name, web address
//Default constructor: dynamically allocate a default FruitStation object
   OnlineSuperMarket():market_name_("XXX"), web_address_("http://www.xyz.com"), fruitstation(new FruitStation){}


// Non-default constructor: dynamically allocate a non-default FruitStation object.
//In this case you must pass an array of Fruit objects to this constructor
   OnlineSuperMarket(Fruit fruit[], int array_length):
   market_name_("XXX"), web_address_("http://www.xyz.com"), fruitstation(new FruitStation(fruit, array_length)){}

// Destructor: Output a message “Online market XXX  http://www.xyz.com is closed …”
//and then deallocate the FruitStation object
   ~OnlineSuperMarket(){
      cout << "Online market "<< market_name_ << " " << web_address_ << " is closed ..." << endl;
      delete fruitstation;
   }

   void Run();
   void FruitStationHandler();
   void Quit();

};
#endif /* defined(__Lab_5__OnlineSuperMarket__) */

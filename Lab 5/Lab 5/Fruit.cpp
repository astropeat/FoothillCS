//
//  Fruit.cpp
//  Lab 5
//
//  Created by Katrina Bugyi on 6/8/14.
//  Copyright (c) 2014 Katrina Bugyi. All rights reserved.
//

#include "Fruit.h"


//Non-default constructor: take a character array (char [ ] )
//and two doubles to initialize the Fruit’s data.
//You must dynamically allocate memory for the fruit name data
Fruit::Fruit(char* name, double weight, double unit_price)
   : weight_(weight), unit_price_(unit_price)
{
   name_ = new char[strlen(name)+1];

   for(int i =0; name[i]; i++){
      name_[i] = name[i];
   }
}

// Copy constructor: provide a copy constructor as this class has pointers as data members
//(In fact all classes defined here have pointers as data members and need to have copy constructors.
//I just didn’t ask you to do it for OnlineSuperMaqrket and FruitStation classes)
Fruit::Fruit(const Fruit &other)
   : weight_(other.weight_), unit_price_(other.unit_price_)
{
   name_ = new char[strlen(other.name_)+1];

   for(int i =0; other.name_[i]; i++){
      name_[i] = other.name_[i];
   }
}
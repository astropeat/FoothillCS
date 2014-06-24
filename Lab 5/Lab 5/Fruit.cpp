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
Fruit::Fruit(const char* fruit_name, double weight, double unit_price)
   : fruit_name_(NULL), weight_(weight), unit_price_(unit_price)
{
   set_name(fruit_name);
}

// Copy constructor: provide a copy constructor as this class has pointers as data members
//(In fact all classes defined here have pointers as data members and need to have copy constructors.
//I just didn’t ask you to do it for OnlineSuperMaqrket and FruitStation classes)
Fruit::Fruit(const Fruit &other)
   : weight_(other.weight_), unit_price_(other.unit_price_)
{
   fruit_name_ = new char[strlen(other.fruit_name_)+1];

   for(int i =0; other.fruit_name_[i]; i++){
      fruit_name_[i] = other.fruit_name_[i];
   }
}

void Fruit::set_name(const char* new_name){
   if (fruit_name_ != NULL){
      delete[]fruit_name_;
   }
   fruit_name_ = new char[strlen(new_name)+1];
   for(int i=0; new_name[i]; i++){
      fruit_name_[i] = new_name[i];
   }
}

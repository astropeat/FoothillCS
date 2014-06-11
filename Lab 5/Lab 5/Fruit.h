//
//  Fruit.h
//  Lab 5
//
//  Created by Katrina Bugyi on 6/8/14.
//  Copyright (c) 2014 Katrina Bugyi. All rights reserved.
//

#ifndef __Lab_5__Fruit__
#define __Lab_5__Fruit__

#include <iostream>
#include <iomanip>

using namespace std;

class Fruit{
private:
   //Private data members: fruit name (a pointer to character), weight (in lbs), unit price
   char *name_;
   double weight_;
   double unit_price_;

   //Private static field: tax (8.50%)
   constexpr static double tax = 0.085;
public:
   //Constructors:
   //Default constructor: set everything to 0 or NULL (for pointer)
   Fruit() : name_ (NULL), weight_ (0), unit_price_ (0){};

   //Non-default constructor: declare here
   Fruit(char* name, double weight, double unit_price);


   //Fix destroyer
   //Destructor: output a message “Destroyed Fruit …., quantity = ….”
   //and then free memory for the fruit name data
   ~Fruit(){ cout << "Destroyed Fruit, quantity" << endl;};


   //Copy Constructor: declare here
   Fruit(const Fruit &other);
 
   //Public functions:
   //get/set functions for all data. Note fruit name is a pointer.
   double get_weight(){return weight_;}
   void set_weight(double new_set_weight){weight_ = new_set_weight;}
   double get_unit_price(){return unit_price_;}
   void set_unit_price(double new_unit_price) {unit_price_ = new_unit_price;};

   //You must do dynamic memory allocation for the setFruitName function
 
   //static function getTax that returns the static tax field
 
   //Note: You may declare fruit name as a string thus no need to provide a copy constructor for the class.
   //In this case you will lose 10 points for not implementing pointer for this data.
   //In fact I recommend you implement it this way first to get your program going.
   //If you have time then provide pointer implementation later to get full credit.



};
#endif /* defined(__Lab_5__Fruit__) */

//============================================================================
// File Name   : Lab5.cpp
// Author      : Katrina Bugyi
// Copyright   : Your copyright notice
// Description : Lab 5 Foothill C++
// Revision History:
// Date              Version     Change ID    Author          Comment
// 06-24-14          1.0         123          Katrina Bugyi   Turn in
//============================================================================

#ifndef __Lab_5__Fruit__
#define __Lab_5__Fruit__

#include <iostream>
#include <iomanip>

using namespace std;

class Fruit{
private:
   //Private data members: fruit name (a pointer to character), weight (in lbs), unit price
   char* fruit_name_;
   double weight_;
   double unit_price_;

   //Private static field: tax (8.50%)
   constexpr static double tax = 0.085;
public:
   //Constructors:
   //Default constructor: set everything to 0 or NULL (for pointer)
   Fruit() : fruit_name_ (NULL), weight_ (0), unit_price_ (0){};

   //Non-default constructor: declare here
   Fruit(const char* name, double weight, double unit_price);


   //Fix destroyer
   //Destructor: output a message “Destroyed Fruit …., quantity = ….”
   //and then free memory for the fruit name data
   ~Fruit() {
      cout << "Destroyed Fruit " << fruit_name_ << " quantity = "<< weight_ << endl;
      delete[] fruit_name_;
   }



   //Copy Constructor: declare here
   Fruit(const Fruit &other);
 
   //Public functions:
   //get/set functions for all data. Note fruit name is a pointer.

   //You must do dynamic memory allocation for the setFruitName function
   char* get_name(){return fruit_name_;}
   void set_name(const char* new_name);

   double get_weight(){return weight_;}
   void set_weight(double new_set_weight){weight_ = new_set_weight;}

   double get_unit_price(){return unit_price_;}
   void set_unit_price(double new_unit_price) {unit_price_ = new_unit_price;}

   //static function getTax that returns the static tax field
   static double getTax(){
      return tax;
   }
 
   //Note: You may declare fruit name as a string thus no need to provide a copy constructor for the class.
   //In this case you will lose 10 points for not implementing pointer for this data.
   //In fact I recommend you implement it this way first to get your program going.
   //If you have time then provide pointer implementation later to get full credit.

   friend class FruitStation;

};

#endif /* defined(__Lab_5__Fruit__) */

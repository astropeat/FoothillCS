//
//  ProductDatabase.h
//  CS Group Project
//
//  Created by Katrina Bugyi on 5/31/14.
//  Copyright (c) 2014 Katrina Bugyi. All rights reserved.
//

#ifndef __CS_Group_Project__ProductDatabase__
#define __CS_Group_Project__ProductDatabase__

#include <iostream>
#include <iomanip>
#include "Product.h"

using namespace std;

//Data: an array of pointers (max is 10000) to Product objects, a string for the data file,
//a static data for product count
//Constructor: default constructor will set data file name to “products.txt”.
//A non-default constructor will take a file name parameter
//Destructor: de-allocate heap memory

class ProductDatabase
{
private:
   Product *product[10000];
   string data_file_ = "";
   static int product_count_;


public:
   ProductDatabase():data_file_("products.txt"){}; //default constructor
   ProductDatabase(string file_name):data_file_(file_name){}; //non-default constructor
   ~ProductDatabase() {cout<<"Product Database was destroyed..."<<endl;} //destructor

   // get/set functions
   static int getProductCount() {return product_count_;}
   static void setProductCount(int product_count) {product_count_=product_count;}
   void sortDatabase();
};

#endif /* defined(__CS_Group_Project__ProductDatabase__) */
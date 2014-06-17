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
#include <fstream>
static const int MAXPRODUCT=10000;
using namespace std;

//Data: an array of pointers (max is 10000) to Product objects, a string for the data file,
//an int data for product count
//Constructor: default constructor will set data file name to “products.txt”.
//A non-default constructor will take a file name parameter
//Destructor: de-allocate heap memory

class ProductDatabase
{
   friend class Product;
private:
   Product *product[MAXPRODUCT];
   string data_file_ = "";
   int product_count_;
    
    
public:
   ProductDatabase():data_file_("Products.txt"), product_count_(0){}; //default constructor
   ProductDatabase(string file_name):data_file_(file_name), product_count_(0){}; //non-default constructor
   ~ProductDatabase() {
      cout<<"Product Database was destroyed..."<<endl;
      for (int i = 0; i< product_count_; i++){
         delete product[i];
      }
   }

   // get/set functions
   int getProductCount() {return product_count_;}
   void buildB();

   void addNewProduct();
   void discontinueProduct(int Product_ID_);
   void stockProduct(int Product_ID_, int QTY);
   void productQuery(int Product_ID_);
   void sortProductDB();
   void DisplayProducts();
   void resetDB();

   //getProduct: return a pointer to a Product given a product ID
   Product* getProduct(int ProductID);
};

#endif /* defined(__CS_Group_Project__ProductDatabase__) */

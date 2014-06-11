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
//a static data for product count
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
   string ProductID[MAXPRODUCT];
   double ProductPrice[MAXPRODUCT];
   int ProductQuantity[MAXPRODUCT];
   string ProductDescription[MAXPRODUCT];
   string Products[MAXPRODUCT];
    int ProductIndex[MAXPRODUCT*4];
    
    
public:
   void buildB();
   ProductDatabase():data_file_("products.txt"), product_count_(0){}; //default constructor
   ProductDatabase(string file_name):data_file_(file_name), product_count_(0){}; //non-default constructor
   ~ProductDatabase() {cout<<"Product Database was destroyed..."<<endl;} //destructor
    void getproductindex();
   // get/set functions
    
   int getProductCount() {return product_count_;}
   void setProductCount(int product_count) {product_count_=product_count;}
   void setProductIndex();
   void sortDatabase();
   void addNewProduct(Product *ptr);
   void discontinueProduct(Product *ptr);
   void stockProduct(Product *ptr);
   void productQuery(Product *ptr);
   void sortProductDB();
   void DisplayProduct();
};

#endif /* defined(__CS_Group_Project__ProductDatabase__) */

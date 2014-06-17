//
//  Product.h
//  CS Group Project
//
//  Created by Katrina Bugyi on 5/31/14.
//  Copyright (c) 2014 Katrina Bugyi. All rights reserved.
//

#ifndef __CS_Group_Project__Product__
#define __CS_Group_Project__Product__


#include <iostream>
#include <iomanip>
#include "order.h"

using namespace std;

//Data: product ID, product description, price, quantity

class Product{
private:
   int product_ID;
   double price;
   int quantity_;
   string product_description;
   
public:
   //Constructor: provide default and non-default constructor using member initializer syntax
   Product() : product_ID(0), price(0), quantity_(0), product_description("") {};

   Product(int product_ID, double price, int quantity, string product_description)
   : product_ID(product_ID), price(price), quantity_(quantity), product_description(product_description)
   {};

   //destructor
   ~Product() {cout << "Product is destroyed ..." << endl;}

   //Functions: get/set functions for all data.
   int getproduct_ID() {return product_ID;}
   void setproduct_ID(int new_product_ID) {product_ID = new_product_ID;}

   double getPrice() {return price;}
   void setPrice(double new_price) {price = new_price;}

   int getQuantity() {return quantity_;}
   void setQuantity(int new_quantity) {quantity_ = new_quantity;}
   void addQuantity(int quantity){quantity_ += quantity;}

   string getProduct_description() {return product_description;}
   void setProduct_description(string new_product_description) {
   product_description = new_product_description;
   }

   bool processOrder(Order* order);

   friend class ProductDatabase;


   friend void showProduct(const Product&);

   
};






#endif /* defined(__CS_Group_Project__Product__) */

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

using namespace std;

//Data: product ID, product description, price, quantity

class Product{
   private:
      string product_ID = "";
      double price = 0;
      int quantity = 0;
   public:
      //Constructor: provide default and non-default constructor using member initializer syntax
      Product();
   //need non-default constructor!

      //destructor
      ~Product(){cout << "Product is destroyed ..." << endl;}

   //Functions: get/set functions for all data.
   string getproduct_ID() {return product_ID;}
   double getPrice() {return price;}
   int getQuantity() {return quantity;}

   void setproduct_ID(string new_product_ID){product_ID = new_product_ID;};
   void setPrice(double new_price){price = new_price;};
   void setQuantity(int new_quantity){quantity = new_quantity;};

   // Also provide a friend function (showProduct) for this class that will output all Product information.
   // Make sure to define the correct parameter required for this function.

/*
   friend ostream showProduct(){
      cout << product_ID << endl;
      cout << price << endl;
      cout << quantity << endl;

   };
*/
};

#endif /* defined(__CS_Group_Project__Product__) */

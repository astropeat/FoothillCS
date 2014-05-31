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
      string product_ID;
      double price;
      int quantity;
   public:
      //Constructor: provide default and non-default constructor using member initializer syntax
      Product();
   //need non-default constructor!

      //destructor
      ~Product(){cout << "Product is destroyed ..." << endl;}
};

#endif /* defined(__CS_Group_Project__Product__) */

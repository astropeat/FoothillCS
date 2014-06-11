//
//  Product.cpp
//  CS Group Project
//
//  Created by Katrina Bugyi on 5/31/14.
//  Copyright (c) 2014 Katrina Bugyi. All rights reserved.
//



#include "Product.h"

void showProduct(const Product& p)
{
   cout << "Product:" << endl;
   cout << "  ID: " << p.product_ID << endl;
   cout << "  Price: " << p.price << endl;
   cout << "  Quantity: " << p.quantity << endl;
   cout << "  Description: "<< p.product_description << endl;
   //...
}


/*

 Functions: processOrder that takes an Order object.
 If Product has more quantity than Order’s quantity then Order is processed.
 The function reduces the Product’s quantity before return true.
 Otherwise it returns false (can’t process Order due to limited stocking)

 Sample of text file:
 2357#Sony LED TV 46 in#859.95#145
 3589#Samsung Galaxy 5#259.99#239

 */

/*

//some bullshit code to flesh out the idea below
bool processOrder(Order){
   if (Product.quantity >= order.quantity){
      Order();
      product.quantity - order.quantity;
   }
   cout << "Can't process Order due to limited stocking." << endl;
   return false;
}
*/
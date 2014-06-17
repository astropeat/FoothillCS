//
//  Product.cpp
//  CS Group Project
//
//  Created by Katrina Bugyi on 5/31/14.
//  Copyright (c) 2014 Katrina Bugyi. All rights reserved.
//



#include "Product.h"
#include "Order.h"

void showProduct(const Product& p)
{
   cout << "Product ID: " << p.product_ID;
   cout << " Description: "<< p.product_description;
   cout << " Price: $" << fixed << setprecision(2) << p.price;
   cout << " Quantity: " << p.quantity_ << endl;
}




//Functions: processOrder that takes an Order object.
//If Product has more quantity than Order’s quantity then Order is processed.
//The function reduces the Product’s quantity before return true.
//Otherwise it returns false (can’t process Order due to limited stocking)

bool Product::processOrder(Order* order){
   if (order->getproduct_ID() != this->product_ID){
      cout << "Invalid order." << endl;
      return false;}
   if (this->quantity_ >= order->getorder_quantity()){
      this->quantity_ -= order->getorder_quantity();
      return true;
   }
   cout << "Can't process Order due to limited stocking." << endl;
   return false;
}

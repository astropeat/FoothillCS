//
//  Order.cpp
//  CS Group Project
//
//  Created by Katrina Bugyi on 5/31/14.
//  Copyright (c) 2014 Katrina Bugyi. All rights reserved.
//

#include "Order.h"
#include "OrderDatabase.h"

// Function: view(show) order function

void showOrder(const Order& p)
{
   cout << "Order ID: " << p.order_ID_;
   cout << " Product ID: " << p.product_ID_;
   cout << " Order Quantity: "<< p.order_quantity_;
   cout << " Customer Name: " << p.customer_name_;
   cout << " Zip Code: " << p.zip_code_ ;
   cout << " Invoice Total: $" << fixed << setprecision(2) << p.total_invoice_ << endl;
}

//Function: clear order (set all data to 0 or NULL or empty string)

void Order::clear(){
   order_ID_ = "";
   product_ID_ = 0;
   order_quantity_ = 0;
   customer_name_ = "";
   zip_code_ = 0;
   total_invoice_ = 0;
};





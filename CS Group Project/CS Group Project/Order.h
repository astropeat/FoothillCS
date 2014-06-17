//
//  Order.h
//  CS Group Project
//
//  Created by Katrina Bugyi on 5/31/14.
//  Copyright (c) 2014 Katrina Bugyi. All rights reserved.
//

#ifndef __CS_Group_Project__Order__
#define __CS_Group_Project__Order__

#include <iostream>
#include <iomanip>

using namespace std;

/*
 
 Sample of text file:

 AZEF;2357;35;BestBuy.com;95123;29915.35

 KDWQ;3589;20;Frys;94086;5200


 */

using namespace std;

class Order
{
private:
   // Data: order ID, product ID, quantity, customer name, shipping zip code, total invoice
   int order_ID_;
   int product_ID_;
   int order_quantity_;
   string customer_name_;
   int zip_code_;
   double total_invoice_;


public:
   // Constructor/destructor: provide default and non-default constructor using member initializer syntax

   Order() : order_ID_(0), product_ID_(0), order_quantity_(0), customer_name_(""), zip_code_(0), total_invoice_(0){};

   Order(int order_ID, int product_ID, int order_quantity,
         string customer_name, int zip_code, double total_invoice)
   : order_ID_(order_ID), product_ID_(product_ID),
     order_quantity_(order_quantity), customer_name_(customer_name),
     zip_code_(zip_code), total_invoice_(total_invoice){};

   ~Order(){cout << "Order is destroyed ..." << endl;}

   //get/set functions for all data

   int getorder_ID(){return order_ID_;}
   void setorder_ID(int new_order_ID) {order_ID_ = new_order_ID;}

   int getproduct_ID(){return product_ID_;}
   void setproduct_ID(int new_product_ID){product_ID_ = new_product_ID;}

   int getorder_quantity(){return order_quantity_;}
   void setorder_quanity(int new_order_quantity){order_quantity_= new_order_quantity;}

   string getcustomer_name(){return customer_name_;}
   void setcustomer_name(string new_customer_name){customer_name_ = new_customer_name;}

   int getzip_code(){return zip_code_;}
   void setzip_code(int new_zip_code){zip_code_ = new_zip_code;}

   double gettotal_invoice(){return total_invoice_;}
   void settotal_invoice(double total_invoice){total_invoice_ = total_invoice;}

   void clear();

   friend class OrderDatabase;
   
   friend void showOrder(const Order&);

};
#endif /* defined(__CS_Group_Project__Order__) */

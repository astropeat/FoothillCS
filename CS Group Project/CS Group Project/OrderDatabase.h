//
//  OrderDatabase.h
//  CS Group Project
//
//  Created by Katrina Bugyi on 5/31/14.
//  Copyright (c) 2014 Katrina Bugyi. All rights reserved.
//

#ifndef __CS_Group_Project__OrderDatabase__
#define __CS_Group_Project__OrderDatabase__

#include <iostream>
#include <iomanip>
#include "Order.h"

using namespace std;



class OrderDatabase
{
   friend class Order;

//Data: an array of Order objects (max 521), a string for the data file, a static data for order count

private:
   string data_filename ="";
   static const int MAXORDER=521;
   Order *order[MAXORDER];
   int order_count_;


public:
   //Constructor: default constructor will set data file name to “orders.txt”.
   OrderDatabase():data_filename("Order.txt"){};

   //A non-default constructor will take a file name parameter
   OrderDatabase(string filename):data_filename(filename){};

   //Destructor: de-allocate heap memory
   ~OrderDatabase(){
      cout<<"Order Database was destroyed..."<<endl;
      for (int i = 0; i< order_count_; i++)
      {
         delete order[i];
      }
   }

   //Get order count
   int getorder_count(){return order_count_;}

   //buildDB: reading text file to load order data into database which is an array then call the sort function to sort it by order ID.
   void buildDB();

   //View orders (display all orders). Note that if Order ID is set to empty string then do not display it
   void view_orders();

   //sort: sort the Order database by order ID
   void sort_orders();

   //getProductID: given an order ID search the Order array to find a matched Order then get product ID in the Order and return it
   int getProductID(string order_ID);

   //getOrder: given an order ID return a pointer to the Order object
   Order* getOrder(string order_ID);
};



#endif /* defined(__CS_Group_Project__OrderDatabase__) */

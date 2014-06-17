//
//  OrderDatabase.cpp
//  CS Group Project
//
//  Created by Katrina Bugyi on 5/31/14.
//  Copyright (c) 2014 Katrina Bugyi. All rights reserved.
//

#include "OrderDatabase.h"
#include <sstream>
#include <fstream>

using namespace std;

//buildDB: reading text file to load order data into
//database which is an array then call the sort function
//to sort it by order ID.

void OrderDatabase::buildDB(){
   string line;
   ifstream my_file (data_filename);
   if (my_file.is_open())
   {
      while (getline(my_file, line)){
         //cout << line << endl;
         stringstream ss(line);
         stringstream ss2;
         string part;

         // read order id
         getline(ss, part, ';');
         ss2.str(part);
         int order_id;
         ss2 >> order_id;

         // read product id
         getline(ss, part, ';');
         ss2.str(part);
         int product_id;
         ss2 >> product_id;

         // read order quantity
         getline(ss, part, ';');
         ss2.str(part);
         int order_quantity;
         ss2 >> order_quantity;

         // read customer name
         getline(ss, part, ';');
         string customer_name = part;

         // read zip code
         getline(ss, part, ';');
         ss2.str(part);
         int zip_code;
         ss2 >> zip_code;

         // read total invoice
         getline(ss, part, ';');
         ss2.str(part);
         double total_invoice;
         ss2 >> total_invoice;

         order[order_count_] = new Order(order_id, product_id, order_quantity, customer_name, zip_code, total_invoice);
         order_count_ += 1;
      }
      sort_orders();
   }
   else cout << "Unable to open file " << data_filename << endl;
};

//View orders (display all orders). Note that if Order ID is set to empty string then do not display it
void OrderDatabase::view_orders(){
   for (int i=0;i<order_count_;i++)
      {
         showOrder(*order[i]);
   }
};

//sort: sort the Order database by order ID
void OrderDatabase::sort_orders(){
   Order *tmp;
   bool swapped = true;

   while (swapped)
   {
      swapped = false;
      for (int i = 1; i < order_count_; ++i)
      {
         if (order[i - 1]->order_ID_ > order[i]->order_ID_)
         {
            // Then swap
            tmp = order[i - 1];
            order[i - 1] = order[i];
            order[i] = tmp;
            swapped = true;
         }
      }
   }
};

//getProductID: given an order ID search the Order array to find a matched Order
//then get product ID in the Order and return it
int OrderDatabase::getProductID(int order_ID){
   Order* order = getOrder(order_ID);
   if (order == NULL){
      cout << "Match not found" << endl;
      return 0;
   }
   return order->product_ID_;
}

//getOrder: given an order ID return a pointer to the Order object
Order* OrderDatabase::getOrder(int order_ID){
   for(int i=0; i<order_count_; i++){
      if(order[i]-> getorder_ID()==order_ID){
         return order[i];
      }
   }
   cout << "Order ID " << order_ID <<  " not found." << endl;
   return NULL;
};
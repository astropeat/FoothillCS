//
//  IOMSapp.cpp
//  CS Group Project
//
//  Created by Katrina Bugyi on 5/31/14.
//  Copyright (c) 2014 Katrina Bugyi. All rights reserved.
//

#include "IOMSapp.h"
#include <iomanip>
#include <iostream>

using namespace std;

/*
 Function to display a welcome message for IOMS application
 Function to display a menu for IOMS application
 Function for user authentication (user name and password) before he/she can access the application. This function will use the SecuritySystem pointer.
 Function to initialize the databases. This function will invoke the buildDB from the ProductDatabase and OrderDatabase pointers
 Function to start (run) the application: display the welcome message then display a menu for use choices (8 options). This function will need to use the ProductDatabse pointer and OrderDatabase pointer to call appropriate ProductDatabase and OrderDatabase functions depending on user selection
 For Process Order option: ask user input for an order ID. Invoke getProductID from Order database class based on the order ID. Invoke getProduct from ProductDatabase to get a pointer to a Product object. Now invoke process order from that Product pointer. If the process order return true invoke clear from the Order
*/

IOMSapp::IOMSapp()
{
    PD= new ProductDatabase();
    SS= new SecuritySystem();
    OD= new OrderDatabase();
}

IOMSapp::~IOMSapp()
{
    delete PD;
    delete SS;
    delete OD;
}

void IOMSapp::initialize_database()
{
   PD->buildB();
   OD->buildDB();
}

void IOMSapp::welcomemessage()
{
    cout<<setw(6)<<setfill('*')<<"\nWelcome to Inventory and Ordering Management System (IOMS) "<<endl;
    cout<<"*************************************************\n"<<endl;
}

void IOMSapp::showmenu()
{
    cout<<"1.List All Products"<<endl;
    cout<<"2.Add New Product"<<endl;
    cout<<"3.Discontinue a Product"<<endl;
    cout<<"4.Stocking a Product"<<endl;
    cout<<"5.Query a Product"<<endl;
    cout<<"6.View Existing Orders"<<endl;
    cout<<"7.Process an Order"<<endl;
    cout<<"8.Quit"<<endl;
    cout<<"Please Enter Your Option Here ----->";
    cin>>option;
    
}

bool IOMSapp::authenticate(){
   return SS->authenticate();
}

void IOMSapp::run()
{
   option=0;
   while (option!=8)
   {
      welcomemessage();
      showmenu();
      switch (option)
      {
         case 1:
            PD->DisplayProducts();
            break;
         case 2:
         {
            PD->addNewProduct();
            break;
         }

         case 3:
         {
            cout<<"Enter the Product ID: "<<endl;
            int id;
            cin>>id;
            PD->discontinueProduct(id);
            break;
         }

         case 4:
         {
            cout<<"Enter the Product ID: "<<endl;
            int productid;
            cin>>productid;
            cout<<"How much would you like to add?"<<endl;
            int add;
            cin>>add;
            PD->stockProduct(productid, add);
            break;
         }

         case 5:
         {
            int prdid;
            cout<<"Enter the Product ID: ";
            cin>>prdid;
            PD->productQuery(prdid);
            break;
         }

         case 6:
         {
            OD->view_orders();
            break;
         }

         case 7:
         {
            string orderid;
            //ask user input for an order ID.
            cout<<"Enter the Order ID: ";
            cin >> orderid;
            Order* order = OD->getOrder(orderid);
            //Invoke getProductID from Order database class based on the order ID.
            int productID = OD->getProductID(orderid);
            //Invoke getProduct from ProductDatabase to get a pointer to a Product object.
            Product* product = PD->getProduct(productID);
            //Now invoke process order from that Product pointer.
            if (product->processOrder(order)){
               //If the process order return true invoke clear from the Order
               order->clear();
               cout << "Order successfully processed" << endl;
            }else{
               cout << "Order did not process" << endl;
            }

         }

         default:
            break;
      }
   }
}


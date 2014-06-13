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



/* Main Menu

 List All Products
 Add new Product
 Discontinue a Product
 Stocking a Product
 Query a Product
 View existing Orders
 Process an Order
 Quit
 Please select an option:  1
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
void IOMSapp::welcomemessage()
{
    cout<<setw(6)<<setfill('*')<<"Welcome to Inventory and Ordering Management System (IOMS) "<<endl;
    cout<<"*************************************************"<<endl;
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

void IOMSapp::run()
{
    if (SS->authenticate()==true)
    {
        int x= 0;
        option=0;
        while (option!=8)
        {
            welcomemessage();
            showmenu();
            switch (option)
            {
                case 1:
                    while (x==0){
                        PD->buildB();
                        x++;
                    
                    }
                    PD->DisplayProduct();
                    break;
                case 2:
                {
                    PD->addNewProduct();
                    break;
                }
                    
                case 3:
                {
                    cout<<"Enter the Product"<<endl;
                    string id;
                    cin>>id;
                    PD->discontinueProduct(id);
                    break;
                }
                case 4:
                {
                    cout<<"Enter the Product ID"<<endl;
                    string productid;
                    cin>>productid;
                    cout<<"How much would you like to add?"<<endl;
                    int add;
                    cin>>add;
                    PD->stockProduct(productid, add);
                    break;
                }
                case 5:
                {
                    string prdid;
                    cout<<"Enter Product Id---->";
                    cin>>prdid;
                    PD->productQuery(prdid);
                    break;
                }
                default:
                    break;
            }
            
        }
    }
    
}


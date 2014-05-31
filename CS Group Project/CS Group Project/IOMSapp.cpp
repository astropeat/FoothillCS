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



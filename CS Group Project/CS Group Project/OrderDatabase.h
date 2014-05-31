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
#include "OrderDatabase.cpp"


using namespace std;

//Data: an array of Order objects (max 521), a string for the data file, a static data for order count


class OrderDatabase
{
private:

public:
   //Constructor: default constructor will set data file name to “orders.txt”.
   OrderDatabase():data_filename("orders.txt"){};
   //A non-default constructor will take a file name parameter
   OrderDatabase(){};
   //Destructor: de-allocate heap memory
   ~OrderDatabase(){cout << "OrderDatabase is destroyed ..." << endl;}

};

#endif /* defined(__CS_Group_Project__OrderDatabase__) */

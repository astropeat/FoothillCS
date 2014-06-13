//
//  IOMSapp.h
//  CS Group Project
//
//  Created by Katrina Bugyi on 5/31/14.
//  Copyright (c) 2014 Katrina Bugyi. All rights reserved.
//

#ifndef __CS_Group_Project__IOMSapp__
#define __CS_Group_Project__IOMSapp__
static const int MAXCOUNT = 9;

#include <iostream>
#include <string>
#include "Product.h"
#include "SecuritySystem.h"
#include "ProductDatabase.h"
#include "OrderDatabase.h"
using namespace std;

class IOMSapp
{
private:
   SecuritySystem *SS;
   ProductDatabase *PD;
   OrderDatabase *OD;

   int option;
   void displaymessage();
   void welcomemessage();
   void showmenu();

  public:
    IOMSapp();
    ~IOMSapp();
    bool authenticate();
    void initialize_database();
    void run();
    void process_order(); // FIXME: does this exist?
    
};
#endif /* defined(__CS_Group_Project__IOMSapp__) */

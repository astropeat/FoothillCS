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
#include "SecuritySystem.h"
#include "ProductDatabase.h"
#include "OrderDatabase.h"
using namespace std;

class IOMSapp
{
  public:
    IOMSapp();
    ~IOMSapp();
    void displaymessage();
    void welcomemessage();
    void showmenu();
    int userauthetication();
    void initialize_database();
    void run();
    void process_order();
  private:
    SecuritySystem *SS;
    ProductDatabase *PD;
    OrderDatabase *OD;
    int option;
   
};
#endif /* defined(__CS_Group_Project__IOMSapp__) */

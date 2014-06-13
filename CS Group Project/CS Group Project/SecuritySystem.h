//
//  SecuritySystem.h
//  CS Group Project
//
//  Created by Jason Ngo, Katrina Bugyi on 5/31/14.
//  Copyright (c) 2014 Katrina Bugyi. All rights reserved.
//

#ifndef __CS_Group_Project__SecuritySystem__
#define __CS_Group_Project__SecuritySystem__

static const int NUM_ACCOUNTS = 9;
static const int MAX_ACCOUNTS=16;

#include <iostream>
#include "Account.h"

class SecuritySystem{
private:
   Account accounts[MAX_ACCOUNTS];
   //Data member: one array of Account objects (max 16) and two arrays of strings containing user names and user passwords. You may hard code (initialize) the user name and password arrays as shown below:
   //string users [ ] = { “kelly”, “james”, …., “second to last user”, “”} ;
   // the last user must be an empty string
   string username[NUM_ACCOUNTS]={"Jason","Katrina","Jose","Sara","Anthony","Fred","Frank","Dylan",""};
   string password[NUM_ACCOUNTS]={"x",    "y",      "z",   "a",   "b",      "c",   "d",    "e",    "f"};


public:
   bool authenticate();

   //Constructor/destructor: load the array of Account objects from the user name and password arrays.
   //May need to keep track of how many Accounts loaded.
   SecuritySystem()
   {
      for (int i= 0; i<NUM_ACCOUNTS; i++){
         accounts[i].setUsername(username[i]);
         accounts[i].setPassword(password[i]);
      }
   };
   ~SecuritySystem(){cout << "SecuritySystem is destroyed ..." << endl;}
};


#endif /* defined(__CS_Group_Project__SecuritySystem__) */

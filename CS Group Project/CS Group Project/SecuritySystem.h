//
//  SecuritySystem.h
//  CS Group Project
//
//  Created by Jason Ngo, Katrina Bugyi on 5/31/14.
//  Copyright (c) 2014 Katrina Bugyi. All rights reserved.
//

#ifndef __CS_Group_Project__SecuritySystem__
#define __CS_Group_Project__SecuritySystem__

static const int MAXCOUNT3 = 9;
static const int MAXCOUNT1=16;

#include <iostream>
#include "Account.h"

//Data member: one array of Account objects (max 16) and two arrays of strings containing user names and user passwords. You may hard code (initialize) the user name and password arrays as shown below:
//string users [ ] = { “kelly”, “james”, …., “second to last user”, “”} ;
// the last user must be an empty string

class SecuritySystem{
private:
   Account accounts[MAXCOUNT1];
   string username[MAXCOUNT3]={"Jason","Katrina","Jose","Sara","Anthony","Fred","Frank","Dylan",""};
   string password[MAXCOUNT3]={"x",    "y",      "z",   "a",   "b",  "c",   "d",    "e",    "f"};
   int index;//this will be the location in the array
   int tries = 0;
   
public:
   //get input
   int checkusername(string);
   int checkpassword(string);
   bool authenticate();


   //Constructor/destructor: load the array of Account objects from the user name and password arrays.
   //May need to keep track of how many Accounts loaded.
   SecuritySystem()
   {
      for (int i= 0; i<MAXCOUNT3; i++){
         accounts[i].setUsername(username[i]);
         accounts[i].setPassword(password[i]);
      }
   };
   ~SecuritySystem(){cout << "SecuritySystem is destroyed ..." << endl;}
};


#endif /* defined(__CS_Group_Project__SecuritySystem__) */

//
//  Account.h
//  CS Group Project
//
//  Created by Jose Parente on 5/31/14.
//  Copyright (c) 2014 Jose Parente. All rights reserved.
//

#ifndef __CS_Group_Project__Account__
#define __CS_Group_Project__Account__

#include <iostream>

using namespace std;


class Account{
   /*Data: user name and password (strings)
    Constructor (default and non-default constructors)
    Destructor
    Functions: get/set functions for user name and password and other functions if needed
    */
   
private:
   //Data: user name and password (strings)
   string user_name;
   string password;
public:
   //Constructor (default and non-default constructors)
   Account();
   //Destructor
   ~Account();
    string getUsername();
    string getPassword();
    
};

#endif /* defined(__CS_Group_Project__Account__) */

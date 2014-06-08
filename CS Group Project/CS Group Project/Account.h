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

private:
   //Data: user name and password (strings)
   string user_name;
   string password;
public:
    // Constructor (default and non-default constructors)
    Account();
    Account(string user_name, string password);

    // Destructor
   ~Account() {};

   string getUsername() {return user_name;}
   void setUsername(string user_name) {this->user_name = user_name;}
   string getPassword() {return password;}
   void setPassword(string password) {this->password = password;}

};

#endif /* defined(__CS_Group_Project__Account__) */

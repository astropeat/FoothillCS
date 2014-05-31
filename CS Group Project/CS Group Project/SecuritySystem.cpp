//
//  SecuritySystem.cpp
//  CS Group Project
//
//  Created by Katrina Bugyi on 5/31/14.
//  Copyright (c) 2014 Katrina Bugyi. All rights reserved.
//

#include "SecuritySystem.h"

//Functions:
//method to authenticate a system admin person who wish to use the IOMSApp application.
//Basically this method will ask user to enter both user name and password.
//Use linear search on the Account array to verify if both user name and password are correct.
//If not ask for a retry.
//Allow user to retry for a maximum of 3 times before terminating the authentication process.


int SecuritySystem::checkusername(string inputusername){
  for (int x=0;x<MAXCOUNT;x++)
  {
    if (username[x]==inputusername)
    {
      index=x;
      return 0;//return this on success
    }
  }
   cout << "Unable to authenticate" << endl;
  return -1;//return this on failure
}


int SecuritySystem::checkpassword(string inputpassword){
  if(inputpassword==password[index])
  {
    cout << "User Authenticated" << endl;
    return 0;
  }
   cout << "Unable to authenticate" << endl;
    return -1;//failure
}

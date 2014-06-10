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



bool SecuritySystem::authenticate() {
   for (int maxtries = 0; maxtries < 3; maxtries++){
      string entered_username;
      string entered_password;

      cout << "\t\t\tIOMS Authentication\n\n" << endl;
      cout << "Enter user name:\t"; cin >> entered_username;
      cout << "\nEnter password:\t"; cin >> entered_password;

      for (int i; i < MAXCOUNT; i++){
         if (this->accounts[i].getUsername() == entered_username)
         {
            if (this->accounts[i].getPassword() == entered_password){
               return true;
            }
            cout << "Failed to Authenticate" << endl;
            return false;
         }
      }
      cout << "Failed to Authenticate" << endl;
   }
   //try three times then return false
   return false;
};


/*int SecuritySystem::checkusername(string inputusername){
 for (int x=0;x<MAXCOUNT;x++)
 {
 if (username[x]==inputusername)
 {
 index=x;
 //return this on success
 return 0;
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
 //failure
 return -1;
 }
 */
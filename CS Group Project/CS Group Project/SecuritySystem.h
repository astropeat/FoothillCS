//
//  SecuritySystem.h
//  CS Group Project
//
//  Created by Katrina Bugyi on 5/31/14.
//  Copyright (c) 2014 Katrina Bugyi. All rights reserved.
//

#ifndef __CS_Group_Project__SecuritySystem__
#define __CS_Group_Project__SecuritySystem__
static const int MAXCOUNT = 9;
static const int MAXCOUNT1=16;
#include "OrderDatabase.h"
#include <iostream>
class SecuritySystem
{
  public:
         //get input
        int checkusername(string);
        int checkpassword(string);
        int authenticate();

   
  private:
          OrderDatabase [MAXCOUNT1];
          string username[MAXCOUNT]={"Jason","Katrina","Jose","Sara","Joe","Fred","Frank","Dylan","Starbucks"}
          string password[MAXCOUT]={"x","y","z","a","b","c","d","e","f"}
          int index;//this will be the location in the array
}
#endif /* defined(__CS_Group_Project__IOMSapp__) */
#endif /* defined(__CS_Group_Project__SecuritySystem__) */

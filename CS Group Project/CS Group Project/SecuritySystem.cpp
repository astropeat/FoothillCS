//
//  SecuritySystem.cpp
//  CS Group Project
//
//  Created by Katrina Bugyi on 5/31/14.
//  Copyright (c) 2014 Katrina Bugyi. All rights reserved.
//

#include "SecuritySystem.h"


int SecuritySystem::checkusername(string inputusername)
{
  for (int x=0;x<MAXCOUNT;x++)
  {
    if (username[x]==inputusername)
    {
      index=x;
      return 0;//return this on success
    }
  }
  return -1;//return this on failure
}
int SecuritySystem::checkpassword(string inputpassword)
{
  if(inputpassword==password[index])
  {
    cout<<"User Authenticated"<<endl;
    return 0;
  }
    return -1;//failure
}

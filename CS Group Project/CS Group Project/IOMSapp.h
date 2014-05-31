
//
//  IOMSapp.h
//  CS Group Project
//
//  Created by Katrina Bugyi on 5/31/14.
//  Copyright (c) 2014 Katrina Bugyi. All rights reserved.
//

#ifndef __CS_Group_Project__IOMSapp__
#define __CS_Group_Project__IOMSapp__

#include <iostream>
#include <iomanip>
#include <string>

#include "SecuritySystem.h"
#include "ProductDatabase.h"
#include "OrderDatabase.h"

using namespace std;

class IOMSapp{
   private:
      ProductDatabase * PD;
      OrderDatabase * OD;
      SecuritySystem * SS;

   public:
      IOMSapp();


};
#endif /* defined(__CS_Group_Project__IOMSapp__) */

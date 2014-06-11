//
//  Account.cpp
//  CS Group Project
//
//  Created by Jose Parente on 5/31/14.
//  Copyright (c) 2014 Katrina Bugyi. All rights reserved.
//

#include "Account.h"

Account::Account() : user_name_(""), password_("") {};

// The equivalent code is this:
//Account::Account(string user_name, string password)
//{
//   user_name_ = user_name;
//   password_ = password;
//};
Account::Account(string user_name, string password)
: user_name_(user_name), password_(password)
{



};

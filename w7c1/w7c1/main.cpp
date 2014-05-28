//
//  main.cpp
//  w7c1
//
//  Created by Katrina Bugyi on 5/20/14.
//  Copyright (c) 2014 Katrina Bugyi. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

//http://www.tutorialspoint.com/cplusplus/cpp_class_member_functions.htm
//http://www.cplusplus.com/doc/tutorial/classes/

//DEFINING Constructors
/* 

class SimpleDate{
   public:
      SimpleDate(intd, int m, inty);
};

SimpleDate::SimpleDate(int d, int m, int y){
   date = d;
   month = m;      //member initializer syntax.
   year = y;
 
 }
 
 //BELOW IS THE SAME THING AS ABOVE BUT IN A DIFFERENT WAY. Use this one below.

 SimpleDate::SimpleDate(int d, int m, int y):day(d), month(m), year(y){}

*/


/*
 Static data & static functions
 http://www.cplusplus.com/forum/beginner/4758/
 

 Statics data is class-wide information/shared data.
 There is only a single copy of static data per class.
 Static data exists even before any objects of the class is created.
 Static functions are functions that can only access static data. 
 Static functions can't access member functions or data members.
 
 Prefix your data with "static" if you want it to be static.

 

 Object creation & accessing data
 
 1. create an object by invoking the default constructor.
 SimpleDate d1;
 SimpleDate d2(4, 4, 2014);
 //or SmartPhone p1;
 //SmartPhone p2("650-888-2820");

 cout << d1.getYear() << endl;   //Call a function through a parameter. function needs parenthesis.
 int newMonth;
 cin >> newMonth;
 d2.setMonth(newMonth); //This sets the old month (4) to newMonth
 
 You may access a member function in 3 different ways:
 1. object
 2. a reference to an object
 3. pointer
 
 
 SmartPhone & rp = p2;
 cout << rp.getPhone();



*/

























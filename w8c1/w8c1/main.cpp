//
//  main.cpp
//  w8c1
//
//  Created by Katrina Bugyi on 5/27/14.
//  Copyright (c) 2014 Katrina Bugyi. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;


int main(){
   //manipulate an array using pointer notation.

   //an array of 4 integers, named list.
   int list[4]= {20, 10, 5, 20};

   cout << list[0] << endl;

   //how to get the address of an element in the array? use an address operator.
   //get the address of the third element:

   cout << &list[3] << endl;

   // Now we can create a pointer to point to whatever element we want in the array.

   int *p;

   p = &list[3];

   cout << p << endl;

   // in c++ the array name is the *address* of the *first element* of the array.

   int *ptr;

   ptr = &list[0];

   cout << ptr << endl;

   //OR! THIS IS BETTER! Way more efficient.

   ptr = list;

   cout << ptr << endl;


   return 0;
}




/*
int main()
{
   int month = 2;
   month = 4;

   int apple = 90;

   //Declare a pointer to store memory address of some existing variable
   int * p;

   //p stores the address of month!
   p = &month;

   //output is 0x7fff5fbff908 or whatever.
   cout << p << endl;

   //We change the address of what is in p!
   p = &apple;

   //p is changed to the memory address of apple here.
   cout << p << endl;



   int year = 2014;
   cout << year << endl;
   int * p = &year;
   //dereference operator to access data
   *p = 2015;
   cout << *p<<endl;
   cin >> *p;


   int x = 10;
   int y = 5;

   int * p1 = &x;
   int * p2 = &y;

   cout << p1 << endl;
   cout << p2 << endl;

   x = *p1 + *p2;

   cout << x << endl;

   // *p2 points to y.
   *p2 = *p1 * 2;

   //these both equal 30.
   cout << *p2 << endl;
   cout << y << endl;

   //pointer assignment.
   p2 = p1;
   //p1 and p2 now contain the address of what is in p1 (address of x)
   cout << p2 << endl;

    return 0;
} 

 */

/*
Pointers!
 http://www.cplusplus.com/doc/tutorial/pointers/
 http://cslibrary.stanford.edu/106/
 
 given a variable name, besides knowing the value we acn get the physical memory address of the variable 
 by using the address operator &
 
 int month = 2;
 month = 4;
 
 value -> month
 memory address -> &month
 
 Pointers are different than references. 
 
 (int &r is used at declaration, after the data type for references.)
 
 int     gives a value of a variable.
 int &   gives a reference to another variable in the program.
 int *   a pointer variable, containing the memory address of some existing variable.


 When working with pointers...
 if you want to check values
 int *p = NULL;
 
 if (p != NULL){
 *p = 20;
 }




*/
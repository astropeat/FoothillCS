//
//  main.cpp
//  FCS w2c1
//
//  Created by Katrina Bugyi on 4/15/14.
//  Copyright (c) 2014 Katrina Bugyi. All rights reserved.
//

#include <iostream>

#include <iomanip>

using namespace std;

//Variables

/*
int count = 5;              //Global Variable!

int main () {
   int count = 6;           //Local variable
   count = 7;               //assignment
   cout << count << endl;
   {
      int count = 8;
      cout << count << endl;
      count = 10;
   }
   cout << count << endl;

   cout << ::count;         //scope resolution
}
*/



// Below we swap values.
// To do this we create a storage space, tmp.

/*
int x = 10;
int y = 5;

int tmp;

int main (){
   tmp = x;            // create additional storage
   x = y;              // to store intermediate results
   y = tmp;            // during data processing

   cout << x << endl;  // print final result
   cout << y << endl;  // print final result
}
*/



//Parsing Data

/*
 double balance = 1000;
 double withdraw = 300;
 double deposit = 100;

int main (){
   balance = balance - withdraw;
   balance = balance + deposit;
   cout << balance << endl;
}
*/



// GPA
/*
double total_units = 60;
double GPA = 3.5;
double course_GPA = 3.7;
double course_units = 5;

int main(){
   GPA = (total_units * GPA + course_GPA * course_units)/(total_units + course_units);
   cout << GPA << endl;
}
*/




//Compound Assignment Operators
// *= += -= /=
//This simpifies your code.

/*
double balance = 23;
double withdraw = 13;
double deposit1 = 5;
double deposit2 = 8;
//balance = balance - withdraw;

int main (){
   balance -= withdraw;
   cout << balance << endl;
   balance += (deposit1 + deposit2);
   cout << balance << endl;
}
 */



//Increment/Decrement operators
//Increment ++
//Decrease --

int x = 10;

int main (){
   x++;       //x = 11
   ++x;       //x = 12

   int y = 3; int z = 5;
   int result;

   result = y + ++x +z--; // actually 3 + 13 + 5... then after decrease z by 1. result = 21. z = 4.

   cout << x << endl;
   cout << result << endl;

   result = ++y + --z + x++; // actually 4 + 3 + 13 ... then after increase x by 1. result = 20.  x = 14.

   cout << result << endl;
}


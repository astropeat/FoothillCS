//
//  main.cpp
//  w4c2
//
//  Created by Katrina Bugyi on 5/1/14.
//  Copyright (c) 2014 Katrina Bugyi. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   return 0;
}


/* Loops

 for (exp1; condition; exp2){
 statement1;statement2; etc.
 }
 
 for( ; ; ) {
 if (condition)
    break;
 exp2;
 
 ***If you don't put conditions it's an infinite loop.
 
 

example problem: add the 1st 100 integers
 1+2+3....+99+100
 
 Using a for loop to do this:

 int sum = 0;

 for (int i = 1; i <= 100; i++){
   sum += i;
 }


*/

/* While Loop!  executes as long as statements are true.

 while (condition){
  statement1;
  statement2;
  etc...
 }
 
 example problem: enter deposit transactions and 0 to quit.
 
 double total = 0;
 double deposit;

 while(true){
   cout << "Enter a deposit: ";
   cin >> deposit;
 
   if(deposit > 0)
      total += deposit;
   else 
   cout << "Now exiting";
   break;
 }

 
 boolean done = false;
 
 while(!done){
 //...blah blah
 //...blah initializes blah
   if (deposit > 0)
      total += deposit;
   else 
      done = true;
 }

*/


/*
 DO WHILE LOOP!
 
 do{
 
 
 } while (condition);

It has to go through the body, checks for condition. While condition = true execute looped code.
 It executes the body before checking condition.


*/



/* continue vs break
 
 while condition{
 stat1;
 state2;
 statement3;
 if (cond2)
   continue;
statmenet4;
 
 }

 
 */
























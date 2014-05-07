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



/*  NESTED LOOP  
 http://www.cplusplus.com/forum/beginner/9717/
 
 for (exp1; cond1; exp2){
   for (exp3; cond2; exp4){
   
   }
 }
 
 
 */

/* ARRAYS 
 http://www.cplusplus.com/reference/array/array/?kw=array
 http://www.cplusplus.com/doc/tutorial/arrays/
 
 Arrays are lists. The simplest data structures
 Arrays have fixed size. You can't expand or shrink it
 All array elements are of the same datatype. (all ints, doubles, etc)
 Array elements can be accessed randomly - arrays have a contiguous block of memory
 
 How to *declare* an array:
   (element data type) (array name) [size];

   int scores [1024];
   double balances [2048];
   string names [100];
 
 
How to *initialize* an array:
   int months[12] = {01, 02, 03, 04, 05, 06, 07, 08, 09, 10, 11, 12};

Initialize and start everything at 0:
   int list[20000] = {0};

How to access array elements:
 
 int months[12];
 months[0]=1;
 months[4]=5;
 
 
 cout << months[6] << endl;
 cin >> months[7];
 
 ****** months[12]=30; <----- Index out of bounds! this may crash the program. *******
 
 
 
How to process an array: loop! (most likely for loop)

 int scores[32];
 //compute sum of scores.
 int sum = 0;
 for (int i = 0; i < 32, i++){
   sum += scores[i];
 }
 

 */


/*
 LAB 3
 
 2 arrays 
   1. account number (string)
   2. PIN (int)
 
 int pins[16]={0000, 0001, 0002, 0003, 0004, 0005, 0006.....};
 
 string accounts[16]={"A10203", "B202398", "C3838477", ...};
 
 
 Authentication:
 
 account number + pin number. use getline for account number, cin for pin...
 store input in customer_pin, customer_account.
 cust_account input B202398 and cust_pin 0001
 Go through the whole array and compare one at a time (for loop). 
 for(){
 if(cust_account == accounts[i] && cust_pin == pins[i])

 index must match for authentication.
 
*/





















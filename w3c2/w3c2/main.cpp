//
//  main.cpp
//  w3c2
//
//  Created by Katrina Bugyi on 4/24/14.
//  Copyright (c) 2014 Katrina Bugyi. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;


/*

 C++ functions
 function prototype must be declared before using such as:

 <return type> f-name (parameter list);
 
 You can return tons of shit but only one thing! void, int, double, float, char, object (ref, pointer, string), array, etc.

 parameters: what does the function expect? how much of it?
 



*/

// function prototypes/declarations





// METHODS OF PASSING PARAMETERS TO FUNCTIONS
/* 
 
   Pass by value
         A function calls on another function, passes values. 
         Function A passes a copy of the original data to Function B.
      
         void modify(int);

         int main(){
            int data = 20;
            modify (data);
         }
         void modify (int data){
            data *= 2;
            cout << data << endl;
         }


   Pass by reference
         void getData(string &, long &);
         
         int main(){
               string name;
               long acct_num;
 
               getData(name, acct_num);
         }

         void getData(string & s, long & number){
            getline (cin, s);
            cin >> number;
         }
 

   Pass by pointer





*/

/*
 int   getQuantity  ( ) ;


int  main ( )  {

   int quantity;

   quantity = getQuantity  ( ) ;  // function call/invocation



   return 0;

}



// function definition

int  getQuantity ( ) {

   int  data ;

   cout   <<  "Please enter a quantity:  ";

   cin >> data ;

   if (data > 0)

      return data;

   else

      return 0;

}
*/


void pass_by_value(int k) {
   cout << "pass_by_value(" << k << ")" << endl;
   k = 42;
   cout << "pass_by_value, k is now " << k << endl;
}

void pass_by_reference(int & q) {
   cout << "pass_by_reference(" << q << ")" << endl;
   q = 7;
   cout << "pass_by_reference q is now " << q << endl;
}

int main() {
   int m = 18;

   cout << "main 1, m is " << m << endl;
   pass_by_value(m);
   cout << "main 2, m is " << m << endl;

   pass_by_reference(m);

   cout << "main 3, m is " << m << endl;

   pass_by_value(m);

   cout << "main 4, m is " << m << endl;

   return 0;
}
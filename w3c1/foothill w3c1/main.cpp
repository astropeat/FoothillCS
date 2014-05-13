//
//  main.cpp
//  foothill w3c1
//
//  Created by Katrina Bugyi on 4/22/14.
//  Copyright (c) 2014 Katrina Bugyi. All rights reserved.
//

using namespace std;

#include <iostream>
#include <iomanip>
#include <cmath>

int main(){
   //CIN - when reading int, double/float, char it skips leading white-space characters.
   //this includes spaes, \n, \t.

   //double d;
   //int i;
   //char ch;
   //string s;

   // cin >> d >> ch >> i >> s;
   //34.7 a124cde fgh \n
   //cin skips leadin white space when reading int, double, str, etc.
   // d = 24.75; ch = "a"; i = "124"; s = cde; (not fgh)

   /*
   //Reference variables
   // a reference variable is an alias name for an existing variable.
   //After declaring a reference variable you can use it to modify/update the memory the same way.
   //how to declare a reference variable:
   int month = 4;
   int & refMonth = month;

   //Below we alter month using refMonth.

   refMonth = 8;
   cout << refMonth << endl;
   //as you can see, it overwrites month.
   cout << month << endl;



   //This is illegal: int & refYear;
   //Why? It doesn't reference an exisiting variable.
   // ref variables must be initialized to some existing variable.
   // you can't reinitialize a ref variable.
    */


   // C++ FUNCTIONS!

   //A function is a group (block) of statements that logically are
   //related and combined together to perform a speciifc task.
   //Why functions?
   //Break complex problems in to smaller and more managable sub-problems (easier to deal with)
   //Divide and conquer!
   //This is easier to maintain/debug
   //minimizes code redundancy
   //encourages reusability

   //HOW C++ IMPLEMENTS FUNCTIONS?

   //3 kinds of functions in C++:
   //Global functions exist independent of classes.
   //Class-dependent functions:
   //   * class functions
   //   * member functions

   /*
    1. How to declare a function:
      Function declarations/prototypes/signatures:
      <return_type> functionname (parameter list);
        void (this return type returns nothing. int is default return type.)
        you can return an int, double, char, string, bool, refrence, object, etc.
       parameters: (); does not require data.
       you can pass whatever primitive you like as a parameter. separated by commas if more than one.
      (double, int); you can also provide parameter names (double balance, int id); parameter names are ignored.

   2. How to define a function:
       int main (){
         function body
         return num; or: return; (void)
       };
      A function that takes two ints, adds them, produces value:
       int sum (int, int);
      
       int sum (int n1, int n2){
            int result;
            result = n1 + n2;
            cout << result << endl;
            return result;
    //OR: return (n1+n2);
            };


   3. How to invoke/call a function:

    */
}
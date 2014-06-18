//
//  main.cpp
//  w11c1
//
//  Created by Katrina Bugyi on 6/17/14.
//  Copyright (c) 2014 Katrina Bugyi. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   //Const
   //http://www.cprogramming.com/tutorial/const_correctness.html


   //Recursion
   //http://www.cplusplus.com/articles/D2N36Up4/
   //http://www.danzig.us/cpp/recursion.html
   //http://www.cprogramming.com/tutorial/lesson16.html

   //Recursion is a process whereby a construct operates on itself repeatedly
   //until some stopping conditions occurs.

   //How do we solve a problem recursively?

   //example1:
   //Calculate the sum of the 1st n integers
   //s(n) = 1+2+3+4+....+(n-1)+n
   /*
    long sum = 0;
   int n=10;
   for (int i=1; i<=n; i++){
      sum +=i;
      cout << sum << endl;
   }
   cout << sum<< endl;
    */

   //most every problem can be solved iteratively or recursively.

   //Above code rewritten:
   //S(n)=S(n-1)+n;
   //S(n)=S(n-2)+(n-1);
   //etc.

long sum(int n){
      if(n == 1){
         return 1;}
      else{
         return n+ sum(n-1);

      }
   };
}

sum(4);



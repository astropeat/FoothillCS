//
//  main.cpp
//  w6c1
//
//  Created by Katrina Bugyi on 5/13/14.
//  Copyright (c) 2014 Katrina Bugyi. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
/* Classes - Objects!
  look at problem statement- 
      nouns are classes
      verbs are statements
 
   Classes have access modifiers: private, public, and protected.
 If a member is declared as public anyone can access it via: 
         an object
         a reference to an object
         a pointer to an object
 
 Example:
   class SimpleDate{
      private:
            int month, day, year;   // private is encapsulated- users can't access.
      public:
            int getMonth();         // public is useful: you put function prototypes here.
            void setMonth(int);
            bool isNewYear();
   };
   
      void SimpleDate::setMonth(int m){   //Scope resolution operator lets this access 'month'
      if (m > 0 && m < 13){
         month = m;
         }
   }
   
   int SimpleDate::getMonth(){
         return month;
   }
 
   bool SimpleDate::isNewYear(){
         return (day==1 && month==1);
   }
 
 http://www.programmingsimplified.com/cpp/source-code/scope-resolution-operator
 You can group your public/private/protected or have as many separate ones as you like.
 
 http://tinyurl.com/nffvrd6
If you construct, you should destruct. Destructors have ~ before. It takes no parameters.
 eg. 
 
   SimpleDate();
   ~SimpleDate();
 
 You *must* have a default constructor in order to have a default constructor. Not required, but good practice.

 
 Required in class definition:
 .............
 
 -default constructor       (only one)
 -non-default constructors  (many allowed)
 -copy constructor          (only one)
 
  destructor                (only one)
 
 
 .............
 

 */


}


//
//  main.cpp
//  w4c1
//
//  Created by Katrina Bugyi on 4/29/14.
//  Copyright (c) 2014 Katrina Bugyi. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main(){




/* Relational operators
   <    <=    >    >=    ==    !=

  int score = 90;
  (score <= 95) -> true
  (int score > 92) -> false
  (score == 90) -> true

  * NON-ZERO VALUES ARE TRUE. ZERO VALUE IS FALSE. *

   Logical Operators
   &&  AND
   ||  OR
   !   NOT

   Enter... the truth tables
 
   exp1              exp2              exp1 && exp2
   T                 T                 T
   T                 F                 F
   F                 T                 F
   F                 F                 F
 
 
   exp1              exp2              exp1 || exp2
   T                 T                 T
   T                 F                 T
   F                 T                 T
   F                 F                 F
 
   exp1              !exp1
   T                 F
   T                 F
   F                 T
   F                 T
 
 
 Selection structures

 1. One way selection
   if (exp)                or          if (exp){
      statement;                          statement1;
                                          statement2;
                                          statement3;
                                          }
   example:
      bool raining;
      int month;
 
      if (month <4){
         raining = true;
      }
 
 2. Two way selection

   if (exp){
      statement1;
      statement2;
   } else {
      statement3;
      statement4;
   }
 
   example:
      bool status;
      double gpa;
      if (gpa >= 3.0){
         status = true;
      } else {
      status = false;
      }
 
 3. Multi-way selection (nested if else)
   if (exp1){
      statement1;
   } 
   else if (exp2){
      statement2;
   } 
   else if (exp3){
      statement3;
   }
   else {
      statement4;
   }
 
   example:
      if (grade == 'A')
         gpa = 4.0;
      else if (grade == 'B')
         gpa = 3.0;
      else if (grade == 'C')
         gpa = 2.0;
      else 
         gpa = 1.0;
 
   ***Careful: think about what scenarios can and can't be covered in your nested scenario.

 
 Switch Structure:
 http://www.cplusplus.com/doc/tutorial/control/

   switch (exp){
      case value1: statement1;
                   break;
      case value2: statement2;
                   break;
      case value3: statement3;
                   break;
      default:     statement4;
   }
 
   example:
      int year;
      switch (year){
         case 2014: pop = 200000000;
                    break;
         case 2020: pop = 1000002000;
                    break;
         default:   pop = 1;
      }
 
 Iteration Structures (loops)
 http://www.cplusplus.com/doc/tutorial/control/

   Allows a program to repeatedly execute some block of code.
 
 1. for loop
    Know ahead of time how many times you need to go through the loop
    expression1 is initial condition, if true it goes through the body, executes expression2.
    expression2 alters, loops again.
      
   for (expression1; loop condition; expression2;){
      statement1;
      statement2;
      etc...
   }
 
   example:
   print all integers between 10-100. (with flair!)
 
   int line;
   for (line = 1; line <=100; line += 1;){
      cout << setw(3)<< line << endl;
      }
 
 2. while loop
*/

}
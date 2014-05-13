//============================================================================
// File Name   : Welcome.cpp
// Author      : <your name>
// Copyright   : Your copyright notice
// Description :
// Revision History:
// Date              Version     Change ID    Author          Comment
// 04-10-14          1.0         123          Katrina Bugyi   Initial creation
//============================================================================

//Below initializes the libraries
#include <iostream>
#include <iomanip>

//so you don't have to specify 'std::cout' for objects in main. Just cout.
using namespace std;

//There can only be one main. This is the function name.
int main( ) {

   /* main program is the entry point of a C++ program.
      'cout' = console output
      '<<' insertion operator
      '\t\t' = esecape characters (two tabs)
      "blahblah" = Output to console
      'endl' = end line
      '\n' = new line
       When providing a new line you don't have to do it with another cout.
       See below for two examples.
       The bottom cout includes in and end. Many ways to cut the cake.
    */

   cout << "\t\tWelcome to Spring 2014 at Foothill College\n";
   cout << "\t\tIntroduction to C++ Programming";
   cout << endl;
   cout << "\n";
   cout << "----------------------------------"  << endl;

   cout<<"\n";

   int age;
   age = 20;
   cout << "My age is " <<age <<"."<<"\n" <<endl;

   return 0;
}
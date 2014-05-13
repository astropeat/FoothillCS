//
//  main.cpp
//  w2c2
//
//  Created by Katrina Bugyi on 4/17/14.
//  Copyright (c) 2014 Katrina Bugyi. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

//Given a 4 digit (or less) integer) compute the sum of all the digits in the integer.
//number acde a+c+d+e = x

/*
 int main(){
   int number = 8306;
   int thousand;
   int hundred;
   int ten;
   int one;
   thousand = number / 1000;
   hundred = (number % 1000) / 100;
   ten = (number % 100) / 10;
   one = number % 10;
   int sum = thousand + hundred + ten + one;

   cout << "The sum of the digits of " << number << " is "<< sum <<endl;
}
*/


//More elegant way of doing the above:
/*
int main (){
   int number = 8306;
   int sum = 0;
   sum += number/1000;
   sum += (number%1000)/100;
   sum += (number%100)/10;
   sum += number %10;
   cout << "The sum of the digits of " << number << " is " << sum <<endl;
}
*/



//How to format output in C++
//Set field width (how much space is used to display data) (padding charachters)
//left or right justification
//Set precision for displaying floating point numbers
/*
int main (){
   int n1 = 100;
   int n2 = 5;
   int n3 = 75;
   int n4 = 1247;


   cout << setfill('0');
   cout << setw(8) << n1 << endl;
   cout << setw(8) << n2 << endl;
   cout << setw(8) << n3 << endl;
   cout << setw(8) << n4 << endl;
   cout << setfill(' ');
}
 */



//Format floating point numbers

int main(){
   double d1 = 2.78912;
   double d2 = 35.561;
   double d3 = 476.374952;


   //fixed notation, 2 places after decimal
   cout << fixed << setprecision(2);
   cout << setw(9) << d1 << endl;
   cout << setw(9) << d2 << endl;
   cout << setw(9) << d3 << endl;
}




//C++ Input Facilities
/*
int main(){
   int score;
   double gpa;
   string name;
   string address;

   //PROMPTS!

   cout << "Enter a score: ";   //insertion operator '<<'
   cin >> score;    //extraction operator '>>'
   cout << "Enter GPA: ";
   cin >> gpa;
   cout << "Enter your name: ";
   cin >> name;
   cin.ignore();
   cout << "Enter your address: ";
   getline(cin, address);

   cout << "\n" << endl;
   cout << "Name: " << name << endl;
   cout << "Address: " << address << endl;
   cout << "Score: " << score << endl;
   cout << "GPA: " << gpa << endl;


}
*/
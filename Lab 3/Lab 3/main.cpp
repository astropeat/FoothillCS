//============================================================================
// File Name   : Lab3.cpp
// Author      : Katrina Bugyi
// Copyright   : Your copyright notice
// Description : Lab 2 Foothill C++
// Revision History:
// Date              Version     Change ID    Author          Comment
// 05-01-14          1.0         123          Katrina Bugyi   Initial creation
//============================================================================

#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>

using namespace std;

//Construct primitves

int menu();
int overdraft_function();
int overdraft = 20;


//Main function
int main(){
   menu();

   return 0;
}

//What main calls
int menu(){
   int main_response = 0;
   cout << "ATM Bank of US Menu" << endl;
   cout << " 1.  Deposit \n 2.  Withdraw \n 3.  Print Receipt \n 4.  Quit" << endl;
   cout << "Please enter an option: ";
   cin >> main_response;
   return main_response;
}

/*
int overdraft_function(){
   if (balance - overdraft) <= 0

}
*/


//============================================================================
// File Name   : Lab3.cpp
// Author      : Katrina Bugyi
// Copyright   : Your copyright notice
// Description : Lab 2 Foothill C++
// Revision History:
// Date              Version     Change ID    Author          Comment
// 05-01-14          1.0         123          Katrina Bugyi   Initial creation
//============================================================================

//initialize libraries
#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>

using namespace std;

//Construct primitves
int login();
double member_number_entered;
double pin_entered;
int menu();
int withdraw();
int deposit_function();
double deposit;
int print();
int quit();
int overdraft_function();
double overdraft_fee = 20;
double DAILY_WITHDRAW_THRESHOLD = 500;
double withdrawn = 0;

int member_number[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int pin[10]{1111, 2222, 3333, 4444, 5555, 6666, 7777, 8888, 9999, 1010};
double balance[10]{100.00, 200.00, 300.00, 400.00, 500.00, 600.00, 700.00, 800.00, 900.00, 1000.00};



time_t currentTime = time (NULL);    // number of seconds have passed since 00h 1/1/1970
struct tm * timeinfo = localtime ( &currentTime );

void pause () {
   long count = 0;
   while (isspace(cin.peek()) && count != 30000099880) {
      count++;

   }
}


//Main function
int main(){
   login();
   menu();

   return 0;
}

//login
int login(){
   cout << "Please enter member number:" << endl;
   cin >> member_number_entered;
   cout << "Please enter PIN:" << endl;
   cin >> pin_entered;

   return 0;
}

//What main calls
int menu(){
   int main_response = 0;
   cout << "ATM Bank of US Menu" << endl;
   cout << " 1.  Deposit \n 2.  Withdraw \n 3.  Print Receipt \n 4.  Quit" << endl;
   cout << "Please enter an option: ";
   cin >> main_response;

   if (main_response == 1){
      deposit_function();
   }
   else if (main_response == 2){
      withdraw();
   }
   else if (main_response == 3){
      print();
   }
   else if (main_response == 4){
      quit();
   }
               else cout << "Please choose again: "; cin >> main_response;


   return main_response;

}

/*
int overdraft_function(){
   if (balance - overdraft) <= 0

}
*/


//deposit
//add to balance, return

int deposit_function(){
   cout << "Deposit amount: ";
   cin >> deposit;
   pause();
   cout << "You have deposited $"; cout <<  deposit; cout << "." << endl;
   pause();
   return menu();
}

//withdraw
//check against max withdraw, overdraft, subtract balance, return
int withdraw(){
   return menu();
}

//print
//prints balance receipt
int print(){

   return menu();
}

//quit
//prints thank you and terminates program
int quit(){
   cout << "Thank you for your business" << endl;
   return 0;
}

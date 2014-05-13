//============================================================================
// File Name   : Lab3.cpp
// Author      : Katrina Bugyi
// Copyright   : Your copyright notice
// Description : Lab 3 Foothill C++
// Revision History:
// Date              Version     Change ID    Author          Comment
<<<<<<< HEAD
// 05-02-14          1.0         123          Katrina Bugyi   Initial creation
// 05-12-14          2.0         1234         Katrina Bugyi   Wrap up
=======
// 05-12-14          1.0         1          Katrina Bugyi     Turn in
>>>>>>> FETCH_HEAD
//============================================================================

//initialize libraries
#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>

using namespace std;

//Construct primitves
bool login();
int menu();
void withdraw();
int deposit_function();
int print();
void quit();

string member_name;
double account_number;
string pin_entered;
double current_balance;

double DAILY_WITHDRAW_THRESHOLD = 500;
double total_withdrawn = 0;

int account_array[10]{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
string pin_array[10]{"0000", "1111", "2222", "3333", "4444", "5555", "6666", "7777", "8888", "9999"};


time_t currentTime = time (NULL);    // number of seconds have passed since 00h 1/1/1970
struct tm * timeinfo = localtime ( &currentTime );



//Main function
int main(){
   bool stillOperated = true;
   if (login() == true){
      while (stillOperated){
         int main_response = menu();
         switch (main_response){
            case 1:
               deposit_function();
               break;
            case 2:
               withdraw();
               break;
            case 3:
               print();
               break;
            case 4:
               stillOperated = false;
               cout << "Thank you for your business" << endl;
               break;
            default:
               cout << "Please choose again.\n\n";
               break;
         }
      }
   } else {
      return 0;
   }
   return 0;
}

//login
bool login(){

   cout << "Please enter your name: "; cin >> member_name;
   cout << "Please enter account number: "; cin >> account_number;
   cout << "Enter your current balance: $"; cin >> current_balance;
   cout << "\n\nATM Bank of US" << endl;

   int tries = 0;
   while (tries < 3){
      cout << "Please enter your pin (4-digit pin):"; cin >> pin_entered;

      if (pin_entered.length() == 4){

      for (int i = 0; i <= 9; i++) {
         if(account_number == account_array[i]){
            if (pin_entered == pin_array[i]){
               return true;
               }
            }
         }
      }
      tries += 1;
      cout << "Unable to verify PIN" << endl;
   }
   cout << "Too many failed attempts." << endl;
   return false;
}



//What main calls
int menu(){
   int main_response = 0;

   cout << "\n\n\nATM Bank of US Menu" << endl;
   cout << " 1.  Deposit \n 2.  Withdraw \n 3.  Print Receipt \n 4.  Quit" << endl;
   cout << "Please enter an option: ";
   cin >> main_response;

   return main_response;

}


//deposit
//add to balance, return

int deposit_function(){
   double deposit;
   cout << fixed << setprecision(2);
   cout << "\nDeposit amount: "; cin >> deposit;
   cout << "You have deposited $"; cout <<  deposit; cout << "." << endl;
   current_balance += deposit;
   cout << "\n\nYour current balance is $"; cout << current_balance; cout << ".\n\n\n" << endl;

   return current_balance;
}

//withdraw
//check against max withdraw, overdraft, subtract balance, return
void withdraw(){
   double overdraft_fee = -20;
   double withdrawn;

   cout << "Withdrawal amount: ";
   cout << fixed << setprecision(2);
   cin >> withdrawn;

   if (total_withdrawn + withdrawn >= DAILY_WITHDRAW_THRESHOLD){
      cout << "\nYou may not withdraw more than $500. Please try again.";
      cout << endl;
      return;
   }
   current_balance -= withdrawn;
   total_withdrawn += withdrawn;

   if (current_balance <0){
      current_balance += overdraft_fee;
      cout << fixed << setprecision(2);
      cout << "\nYou have overdrawn your account. A $20 fee has been applied. \n Your new balance is $"; cout << current_balance;
      cout << "\n\n\n";
      return;
   }

   else
      cout << fixed << setprecision(2);
      cout << "\nYou have withdrawn $"; cout <<  withdrawn; cout << "." << endl;
      cout << "Your current balance is $"; cout << current_balance; cout << ".\n\n\n" << endl;
   return;
}

//print
//prints balance receipt
int print(){
   cout << "\n\n*************************************************\n";
   cout << endl;
   cout << "\t\t\t\t\tBank of US\n" << endl;
   cout << endl;
   cout << "\tFor Customer Service call 1-800-111-2222\n";
   cout << "\t\tCUSTOMER ATM TRANSACTION RECEIPT\n";
   cout << endl;
	cout << "\t\tDate: " << asctime (timeinfo) <<"\n";
   cout << endl;
   cout << "Customer name:\t\t\t\t" << member_name <<"\n";
   cout << endl;
   cout << "Account number:\t\t\t\t" << account_number <<"\n";
   cout << endl;
   cout << fixed << setprecision(2);
   cout << "Available balance:\t\t\t" << current_balance <<"\n";
   cout << endl;
   cout << "\tThanks for doing business with Bank of US.\n";
   cout << "\t\t\t\tHave a great day!\n" << endl;
   cout << "*************************************************\n";

   return 1;
}


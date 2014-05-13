//============================================================================
// File Name   : Lab1.cpp
// Author      : Katrina Bugyi
// Copyright   : Your copyright notice
// Description : Lab 1 Foothill C++
// Revision History:
// Date              Version     Change ID    Author          Comment
// 04-13-14          1.0         123          Katrina Bugyi   Initial creation
//============================================================================

//Below initializes the libraries
#include <iostream>
#include <iomanip>
#include <string>

/* ****************************************************************

 Bank of US

 For Customer Service call 1-800-111-2222

 CUSTOMER ATM TRANSACTION RECEIPT

 01/09/2014

 Customer name:    John Doe

 Account number:  1230789912

 Transaction type: Deposit

 Transaction amount:        $   500.00

 Available balance:           $ 2500.00



 Thanks for doing business with Bank of US. Have a great day!!!

 ******************************************************************

*/

using namespace std;

void receipt() {
   string transaction_date = "01/09/2014";
   string customer_name = "Katrina Bugyi";
   string account_number = "1230789912";
   string transaction_type = "Deposit";
   string transaction_amount = "$500.00";
   string avail_balance = "$2500.00";


   cout << "*************************************************\n";
   cout << endl;
   cout << "\t\t\t\t\tBank of US\n" << endl;
   cout << endl;
   cout << "\tFor Customer Service call 1-800-111-2222\n";
   cout << "\t\tCUSTOMER ATM TRANSACTION RECEIPT\n";
   cout << endl;
	cout << "\t\t\t\t\t" << transaction_date << "\n";
   cout << endl;
   cout << "Customer name:\t\t\t\t" << customer_name <<"\n";
   cout << endl;
   cout << "Account number:\t\t\t\t" << account_number <<"\n";
   cout << endl;
   cout << "Transaction amount:\t\t\t" << transaction_amount <<"\n";
   cout << endl;
   cout << "Transaction type:\t\t\t" << transaction_type <<"\n";
   cout << endl;
   cout << "Available balance:\t\t\t" << avail_balance <<"\n";
   cout << endl;
   cout << "\tThanks for doing business with Bank of US.\n";
   cout << "\t\t\t\tHave a great day!\n" << endl;
   cout << "*************************************************\n";
}



int main(){
   receipt();
   return 0;
}


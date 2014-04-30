//============================================================================
// File Name   : Lab2.cpp
// Author      : Katrina Bugyi
// Copyright   : Your copyright notice
// Description : Lab 2 Foothill C++
// Revision History:
// Date              Version     Change ID    Author          Comment
// 04-13-14          1.0         123          Katrina Bugyi   Initial creation
//============================================================================

//Below initializes the libraries
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const double property_tax = 1.5;
int zip;
string property_address;
double interest_rate;
double num_years;
double downpayment;
double property_value;

int user_input();
void pause();
int compute_mortgage_payment();

int main(){
   user_input();
   cout << "Mortgage calculator is processing your data ...  Please wait ...";
   cout << endl;
   pause();
   compute_mortgage_payment();
   return 0;
}

int user_input(){
   cout << "Enter property zip code: ";
   cin >> zip;
   cin.ignore();
   cout << "Enter property address: ";
   getline(cin, property_address);
   cout << "Enter annual interest rate (%): ";
   cin >> interest_rate;
   cout << "Enter number of years: ";
   cin >> num_years;
   cout << "Enter property value: $";
   cin >> property_value;
   cout << "Enter down payment in percentage (%): ";
   cin >> downpayment;

   return 0;
}

void pause () {
   long count = 0;
   while (isspace(cin.peek()) && count != 30000000) {
      count++;

   }
}

int compute_mortgage_payment(){
   double loan_amount;
   double monthly_interest;
   double mortgage_monthly;
   double property_tax_monthly;
   double monthly_payment_wtax;
   double total_payment;
   double calculated_downpayment;

   calculated_downpayment = (downpayment/100) * property_value;
   loan_amount = property_value * (1 - downpayment/100);
   monthly_interest = interest_rate / 1200;
   mortgage_monthly = loan_amount * monthly_interest / (1 - 1 / pow (1 + monthly_interest, num_years * 12));
   property_tax_monthly = property_value * (property_tax / 100) / 12;
   monthly_payment_wtax = mortgage_monthly + property_tax_monthly;
   total_payment = mortgage_monthly * 12 * num_years;

   cout << endl;
   cout << "\t\t*******************************************" << endl;
   cout << "\t\t\t\tMORTGAGE CALCULATOR RESULTS\n";
   cout << "\t\t*******************************************\n" << endl;
   cout << fixed << setprecision(2);
   cout << "Property address: " << property_address << endl;
   cout << "Property Value:\t\t\t\t\t\t\t $" << setw(11) << property_value << endl;
   cout << "Down Payment:\t\t\t\t\t\t\t $" << setw(11) << calculated_downpayment << endl;
   cout << "Loan amount:\t\t\t\t\t\t\t $" << setw(11) << loan_amount << endl;
   cout << "Mortgage monthly payment:\t\t\t\t $" << setw(11)<< mortgage_monthly << endl;
   cout << "Monthly payment (property tax included): $" << setw(11) << monthly_payment_wtax << endl;
   cout << "Total payment:\t\t\t\t\t\t\t $" << setw(11) << total_payment << endl;

   return 0;
}


//============================================================================
// File Name   : Lab4.cpp
// Author      : Katrina Bugyi
// Copyright   : Bugyi
// Description : Lab 4 Foothill C++
// Revision History:
// Date              Version     Change ID    Author          Comment
// 05-23-14          1.0         123          Katrina Bugyi   Initial creation
// 06-04-14          1.5         202          Katrina Bugyi   Turn in
//============================================================================

//initialize libraries
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>



using namespace std;

void pause();


class Product{
private:
   string position;
   string description;
   double price;
   int quantity;
public:
   Product(){
      position = "";
      description = "";
      price = 0;
      quantity = 0;
   };
   ~Product(){ cout << "Product "<< description <<" is destroyed..."<< endl;}

   string getPosition() {return position;}
   string getDescription() {return description;}
   double getPrice() {return price;}
   int getQuantity() {return quantity;}

   void setPosition(string new_position){position = new_position;}
   void setDescription(string new_description){description = new_description;}
   void setPrice(double new_price){price = new_price;}
   void setQuantity(int new_quantity){quantity = new_quantity;}

   bool isEmpty(){
      return(quantity <= 0);
   }

   int addProduct(int addedQuantity){
      quantity += addedQuantity;
      return quantity;
   }

   int removeProduct(int removedQuantity){
      quantity -= removedQuantity;
      return quantity;
   }

};

class Coin{
private:
   constexpr static double nickel = 0.05;
   constexpr static double dime = 0.10;
   constexpr static double quarter = 0.25;

   int quarters = 0;
   int nickels = 0;
   int dimes = 0;

public:
   Coin(){};

   // Coin c(8, 6, 4)
   Coin(int q, int d, int n) {
      quarters = q;
      dimes = d;
      nickels = n;
   }

   ~Coin(){cout << "Coin [value=  $"<< fixed << setprecision(2) << totalValue() <<"] is destroyed ..." << endl;}

   int getNickels() {return nickels;}

   int getDimes() {return dimes;}

   int getQuarters() {return quarters;}

   void setNickels(int new_nickels) {nickels = new_nickels;}

   void setDimes(int new_dimes) {dimes = new_dimes;}

   void setQuarters(int new_quarters) {quarters = new_quarters;}

   //(convert all quarters/dimes/nickels to a double and return it)
   double totalValue(){
      return nickel * nickels + dime * dimes + quarter * quarters;
   }

    /*
    take a double parameter. If coins are enough for withdrawing update the quarters/dimes/nickels
    and return true. If coins are not enough return false.
    You may assume the double parameter is exact multiples of quarters, dimes, and nickels.
    */
   bool withdrawCoins(double to_withdraw){
      return (totalValue() >= to_withdraw);
   }

   // take a double parameter and convert it to quarters, dimes, nickels.
   //Ignore the pennies remainder if any
   double insertCoins(double inserted_coins){
      while (inserted_coins >= quarter){
         quarters += 1;
         inserted_coins -= quarter;
      }
      while (inserted_coins >= dime){
         dimes += 1;
         inserted_coins -= dime;
      }
      while (inserted_coins >= nickel){
         nickels += 1;
         inserted_coins -= nickel;
      }
      return quarters + nickels + dimes;
   }

   //set all quarters/dimes/nickels to 0 and return the total value of the coin
   double clear(){
      double cleared_value = totalValue();
      quarters = 0;
      dimes = 0;
      nickels = 0;
      return cleared_value;
   }
};

class VendingMachine{
private:
   Coin customer_credit;
   Coin vending_balance;
   string machineID;
   Product vendingProducts[18];
   string VendingMachineHeader = "Mountain View Vending Machine";

public:

   void createProducts() {
      string position[18]={
         "A1", "A2", "A3",
         "B1", "B2", "B3",
         "C1", "C2", "C3",
         "D1", "D2", "D3",
         "E1", "E2", "E3",
         "F1", "F2", "F3"};
      string descriptions[18]={
         "Basil", "Mint", "Rosemary",
         "Salt", "Pepper", "Oregano", 
         "Cloves", "Nutmeg", "Cinnamon",
         "Thyme", "Curry", "Lavender",
         "Lime", "Cumin", "Garlic",
         "Lemon", "Chili", "Tumeric"};
      double prices[18]={
         0.75, 0.90, 1.50,
         2.00, 2.50, 1.25,
         0.50, 0.05, 0.10,
         0.25, 0.20, 0.50,
         1.10, 0.10, 0.80,
         0.55, 0.75, 1.50};

      for(int i = 0; i<18; i++){
         vendingProducts[i].setDescription(descriptions[i]);
         vendingProducts[i].setPosition(position[i]);
         vendingProducts[i].setPrice(prices[i]);
         vendingProducts[i].setQuantity(5);
      }
   }

   VendingMachine() : vending_balance(1200, 1000, 2000) {
      // TODO: random machineID
      machineID="00AA11";
      createProducts();
   }

   VendingMachine(string enteredID): vending_balance(1200, 1000, 2000) {

      char  alphanum [] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"};

      srand (time_t(NULL));

      string  machineID = "";

      for (int i=0; i< 6; i++){
         machineID  +=  alphanum [rand ( ) % 36] ;
      }
      machineID = machineID;
      createProducts();
   }
   ~VendingMachine(){cout << "Vending machine "<< machineID <<" is destroyed …" << endl;}

   Coin getCustomerCoin(){return customer_credit;}

   void setCustomerCoin(Coin coin_input){customer_credit = coin_input;}

   void showVendingMachineHeader(){
      cout << "\t\t\tMountain View Vending Machine Company\n\n";
   };

   void showProduct(){
      for (int i =0; i<18; i++){
         cout << vendingProducts[i].getPosition() << " ";
         cout << vendingProducts[i].getDescription() << " ";
         cout <<"$"<< fixed <<setprecision(2) << vendingProducts[i].getPrice() << "\t\t";
         if (i%3 == 2){
            cout << endl;
         }
      }
   }

   int showMenu(){
      int main_response;

      cout << "\n 1. Insert Coins \n 2. Select a Product \n 3. Return Coins" << endl;
      cout << "\nPlease enter an option: ";
      cin >> main_response;
      return main_response;
   }

   void insertCoin(){
      double added_coins;
      cout << "\n\nInsert Coin Amount: ";
      cin >> added_coins;
      customer_credit.insertCoins(added_coins);
      pause();
      cout << "\nYour balance is $"<< customer_credit.totalValue() << "\n\n" << endl;
   }

   void selectProduct(){
      string product_position;
      cout << "Select a product position: ";
      cin >> product_position;

      for (int i = 0; i<18; i++){
         if (product_position == vendingProducts[i].getPosition()){
            if (vendingProducts[i].getQuantity() > 0){
               if (customer_credit.totalValue() >= (vendingProducts[i].getPrice())){
                  vendingProducts[i].removeProduct(1);
                  double credit = customer_credit.clear();
                  credit -= vendingProducts[i].getPrice();
                  pause();
                  cout << "\nTotal amount returned: $" << credit <<"\n"<< endl;
                  cout << "One " << vendingProducts[i].getDescription() << ".\n" << endl;
                  cout << "There are "<< vendingProducts[i].getQuantity() <<" "<< vendingProducts[i].getDescription() << " remaining.\n\n" << endl;
               } else {
                  pause();
                  cout << "\nPlease insert more coins. \nYour balance is $"<< customer_credit.totalValue() << "\n\n" << endl;
                  insertCoin();
               }
            
            } else {
               cout << "\n Pick another item. That one has run out.\n" << endl;
            }
         }
      }
   }

   void returnCoins(){
      double returned_value = customer_credit.clear();
      pause();
      cout << "\nYou have been returned $" << returned_value << ".\n\n" << endl;
   }


   void Operate(){
   bool stillOperating = true;

   while (stillOperating){
      showVendingMachineHeader();
      showProduct();

      int main_response = showMenu();
      switch (main_response){
         case 1:
            insertCoin();
            break;
         case 2:
            selectProduct();
            break;
         case 3:
            returnCoins();
            break;
         default:
            cout << "1\n\tPlease choose again.\n\n";
            break;
         }
      }
   }

};

int main(){
   VendingMachine UltimateVendor;
   UltimateVendor.Operate();
}


void pause () {
   long count = 0;
   cout << "\n\nPlease wait\n\n" << endl;
   while (isspace(cin.peek()) && count != 3000000) {
      count++;

   }
}
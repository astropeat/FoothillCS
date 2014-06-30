//============================================================================
// File Name   : Lab5.cpp
// Author      : Katrina Bugyi
// Copyright   : Your copyright notice
// Description : Lab 5 Foothill C++
// Revision History:
// Date              Version     Change ID    Author          Comment
// 06-24-14          1.0         123          Katrina Bugyi   Turn in
//============================================================================

#include <iostream>
#include "OnlineSuperMarket.h"

using namespace std;

int main()
{
   Fruit Fruits[16]= {
      Fruit("Apple", 45.50, 3.50),
      Fruit("Peach", 30.00, 2.30),
      Fruit("Orange", 90.00, 1.00),
      Fruit("Banana", 35.50, 3.00),
      Fruit("Kumquat", 10.00, 5.00),
      Fruit("Grapes", 2.00, 3.50),
      Fruit("Kiwi", 5.00, 2.99),
      Fruit("Tomato", 12.00, 1.50),
      Fruit("Durian", 56.00, 9.99),
      Fruit("Lychee", 12.50, 3.95),
      Fruit("Pluot", 3.00, 2.95),
      Fruit("Melon", 80.00, 3.99),
      Fruit("Cherry", 24.80, 6.99),
      Fruit("Lemon", 80.00, 2.00),
      Fruit("Lime", 72.00, 0.75),
      Fruit("Plum", 32.00, 3.00)
   };

   OnlineSuperMarket * Supermarket;
   Supermarket = new OnlineSuperMarket(Fruits, 16);
   
   Supermarket->Run();

   return 0;
}


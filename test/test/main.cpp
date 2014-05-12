//
//  main.cpp
//  test
//
//  Created by Katrina Bugyi on 5/11/14.
//  Copyright (c) 2014 Katrina Bugyi. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
   int counter = 20;
   double  value = 34.578912;
   string  message = "Foothill CS Department";
   cout << setw (6) << setfill ('+'); cout << counter; cout << endl;
   cout  << fixed << setprecision (3)  << setw(8) << value << endl;
   cout << setfill ('='); cout << setw(20) <<  message << endl;
}


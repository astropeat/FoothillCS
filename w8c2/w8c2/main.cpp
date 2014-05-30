//
//  main.cpp
//  w8c2
//
//  Created by Katrina Bugyi on 5/29/14.
//  Copyright (c) 2014 Katrina Bugyi. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;
/*
class name{
private:
   string first, last, middle;
public:
   name (string f, string l, string m): first(f), last(l), middle(m){}
   name(){};
   string getFirst(){return first;}
   string getMiddle(){return middle;}
   string getLast(){return last;}
   void setFirst(string f){first = f;}

};


int main()
{
   //Pointers to objects
   name name1;
   name name2("James", "William", "J");
   name name3("Katrina", "Anne", "Bugyi");
   name name4("Austin", "James", "Hendrix");

   name * p1 = NULL;
   name * p2 = NULL;
   name * p3 = NULL;
   name * p4 = NULL;

   p1 = &name1;

   p2 = &name2;

   p3 = &name3;

   p4 = &name4;


   cout << p1 << endl;
   cout << p2 << endl;

   cout << name1.getFirst() << endl;
   cout << name2.getFirst() << endl;

   cout << p3 -> getFirst() << endl;
   cout << p4 -> getFirst() << endl;

   cout << (*p4).getMiddle() << endl;


   //Pointers to Arrays of Objects
   //Declare an array of 32 Name objects

   name list[32];

   name * pList;

   pList = list;

   // pList = &list[0];

   string first;


   //Use a for loop to set the list

   for (int i =0; i < 32; i++){
      cin >> first;
      pList -> setFirst(first);
      pList++;
   }

    return 0;
}
*/


//Dynamic memory allocation
//http://www.cplusplus.com/doc/tutorial/dynamic/


//Stack memory vs heap (dynamic) memory
/*
   STACK MEMORY
   declare local variables, parameters in functions...
   int, double, char.... objects....
   big memory (array of int || double || objects)

   Known at compile time.

   memory comes and goes automatically:
   memory will be allocated at the point of declaration
   de-allocated (reclaimed) automatically by the o/s when exiting scope.

 HEAP MEMORY
   much larger pool of memory!
   
   you can request memory as needed at run-time.
   memory leak is bad.
   it's the programmer's responsibility to free the requested memory.
 
 
 
 
 */






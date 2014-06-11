//
//  FruitStation.h
//  Lab 5
//
//  Created by Katrina Bugyi on 6/8/14.
//  Copyright (c) 2014 Katrina Bugyi. All rights reserved.
//

#ifndef __Lab_5__FruitStation__
#define __Lab_5__FruitStation__

#include <iostream>
#include "Fruit.h"

class  FruitStation{
private:
   //Private data members: an array of pointers to Fruit objects (max of 64 pointers)
   //an integer named size to keep track of the number of Fruit objects actually stored in the array
   Fruit *fruit[64];
   int size;
   
public:

 /*

 
 Constructors:
 Default constructor: initialize all pointers to NULL
 Non-default constructor: take an array of Fruit objects and array length. 
 The constructor will dynamically allocate Fruit objects for the array of pointers 
 based on the input Fruit array. It also needs to update data member size.
 Finally it will invoke the Sort function to sort all Fruits by their names
 
 Destructor: deallocate the Fruit array of pointers (need to use a loop to de-allocate one pointer at a time)
 
 Private functions:  // only need to be used internally
 Sort: to sort the array of pointers to Fruit objects by Fruit name using only either bubble sort or selection sort
 
 Public functions:
 FindFruit: take a Fruit name as the only parameter and use binary search to search the array of pointers to Fruit objects. If found, return a pointer to the found Fruit. Otherwise return NULL
 
 FruitOrder: take Fruit name and weight as its only parameters. Invoke FindFruit function passing Fruit name to it
 If FindFruit returns NULL output a message “Fruit …. not found in the market”
 Otherwise query the found Fruit object (returned as a pointer) to see if the Fruit has sufficient weight to sell. If not, output an error message. Otherwise calculate total cost and display it. You also need to update the Fruit’s object after sale.
 Friend function: provide a friend function of this class named ListAllFruits. This friend function should take a FruitStation object (use the most efficient pass by value method given the FruitStation object containing an array of Fruit object pointers). Its job is to display all fruits, their weights, and unit price in proper format
 
 
*/
};

#endif /* defined(__Lab_5__FruitStation__) */

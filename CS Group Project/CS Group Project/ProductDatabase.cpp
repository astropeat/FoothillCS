//
//  ProductDatabase.cpp
//  CS Group Project
//
//  Created by Katrina Bugyi on 5/31/14.
//  Copyright (c) 2014 Katrina Bugyi. All rights reserved.
//

#include "ProductDatabase.h"






// Functions:
//buildDB: reading text file to load product data into database which is an array then call the sort function to sort it by product ID.

void buildDB (){

   // ADD YOUR CODE HERE TO DECLARE VARIABLES for INPUT

   ifstream fin;

   fin.open (filename);

   if (fin.is_open() == false) {
      cout<<"ERROR:Failed to open file: "<<filename<<endl;
      exit (-1);
   }
}

//listing (display all product data): invoke a friend function (showProduct)  of Product class
//Add new Product: add new Product to inventory
//Discontinue Product: delete a discontinued Product (delete by Product ID)
//Stocking a Product: add more quantity to a Product
//Query a Product: display all information on a Product given a Product Id
//sort: sort the Product database by product ID

void ProductDatabase::sortDatabase(){
   bubbleSort(product[i], 100000);
}

//getProduct: return a pointer to a Product given a product pointer
//resetDB: free all pointers if they’re not NULL

void bubbleSort (int list [ ] , int size) {

   int  tmp, walker;

   for (int curr =0; curr < size -1; curr++){

      for (walker= size-1; walker > curr; walker--) {
         if (list[walker] < list[walker-1]) {
            // swap
            tmp = list[walker];
            list[walker] = list[walker-1];
            list[walker-1] = tmp;
         }
      } // end of inner loop

   } // end of outer loop
   
   
}
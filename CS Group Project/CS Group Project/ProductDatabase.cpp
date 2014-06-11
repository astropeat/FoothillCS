//
//  ProductDatabase.cpp
//  CS Group Project
//
//  Created by Katrina Bugyi on 5/31/14.
//  Copyright (c) 2014 Katrina Bugyi. All rights reserved.
//

#include "ProductDatabase.h"
#include "Product.cpp"
#include "Product.h"
#include <iostream>
#include <fstream>




//Functions:
//buildDB: reading text file to load product data into database which is an array then call the sort
//function to sort it by product ID.

void buildB(){
   string line;
   ifstream myfile ("Products.txt");
   if (myfile.is_open())
   {
      while ( getline (myfile,line) )
      {
         cout << line << '\n';
      }
      myfile.close();
   }
   else cout << "Unable to open file";
}


//listing (display all product data): invoke a friend function (showProduct)  of Product class

void listAllProductData(Product object){
   showProduct(object);
}
 
//Add new Product: add new Product to inventory

void ProductDatabase::addNewProduct(Product product[]){
   ;
}
 
 
//Discontinue Product: delete a discontinued Product (delete by Product ID)

void ProductDatabase::discontinueProduct(Product product[]){
   
}
 
//Stocking a Product: add more quantity to a Product

void ProductDatabase::stockProduct(Product product[]){
   
}
 
 
//Query a Product: display all information on a Product given a Product Id

void ProductDatabase::productQuery(Product product[]){

}
 
//sort: sort the Product database by product ID

void ProductDatabase::sortProductDB(){

}
 
//getProduct: return a pointer to a Product given a product pointer



 
//resetDB: free all pointers if they’re not NULL


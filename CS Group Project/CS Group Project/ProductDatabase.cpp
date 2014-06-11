//
//  ProductDatabase.cpp
//  CS Group Project
//
//  Created by Katrina Bugyi on 5/31/14.
//  Copyright (c) 2014 Katrina Bugyi. All rights reserved.
//

#include "ProductDatabase.h"
#include "Product.h"
#include <iostream>
#include <fstream>




//Functions:
//buildDB: reading text file to load product data into database which is an array then call the sort
//function to sort it by product ID.

void ProductDatabase::buildB(){
   string line;
   ifstream myfile ("Products.txt");
   if (myfile.is_open())
   {
       while (myfile.good())
       {
         getline (myfile,line);
         cout << line << '\n';
       }
      myfile.close();
      for (int i=0;i<MAXPRODUCT;i++)
      {
      cin>>Products[i];
      }

   }

   else cout << "Unable to open file";
}

void ProductDatabase::DisplayProduct(){
    for (int i=0;i<MAXPRODUCT;i++)
    {
    cout<<Products[i]<<endl;
    }
    
}

//listing (display all product data): invoke a friend function (showProduct)  of Product class

void listAllProductData(Product *object){
   object->showProduct();
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


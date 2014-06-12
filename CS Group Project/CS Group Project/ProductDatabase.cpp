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
#include <sstream>

using namespace std;


//Functions:
//buildDB: reading text file to load product data into database which is an array then call the sort
//function to sort it by product ID.

void ProductDatabase::buildB()
{
   string line;
   ifstream myfile ("Products.txt");
   if (myfile.is_open())
   {
      while (getline(myfile, line)){
         //cout << line << endl;
         stringstream ss(line);
         stringstream ss2;
         string part;

         // read id
         getline(ss, part, '#');
         string product_id = part;

         // read description
         getline(ss, part, '#');
         string description = part;

         // read price
         getline(ss, part, '#');
         
         ss2.str(part);
         double price;
         ss2 >> price;

         // read quantity
         getline(ss, part, '#');
         
         ss2.str(part);
         int quantity;
         ss2 >> quantity;
          
         product[product_count_]= new Product(product_id, price, quantity, description);
         product_count_ +=1;

      }
   }

   else cout << "Unable to open file";
}

void ProductDatabase::DisplayProduct()
{
    for (int i=0;i<product_count_;i++)
    {
       showProduct(*product[i]);
       //if (Products[i]=0)
    }

}

//listing (display all product data): invoke a friend function (showProduct)  of Product class

void listAllProductData(Product *object){
   //for (int i=0; i<product_count_; i++)
   //showProduct();
}
 
//Add new Product: add new Product to inventory

void ProductDatabase::addNewProduct(){
   string new_ID;
   double new_Price;
   int new_QTY;
   string new_description;
   cout<<"Please enter the new product's ID: \n";
    cin>>new_ID;
    cout<<endl;
   cout<<"Please enter the new product's Price: \n";
    cin>>new_Price;
    cout<<endl;
   cout<<"Please enter the quantity of new products: \n";
    cin>>new_QTY; cout<<endl;
   cout<<"Please enter a short description of the new product: \n";
    cin>>new_description;
   cout<<endl;
   for(int i; i<product_count_; i++)
   {
      if(product[i]->product_ID!=new_ID)
      {
         int*ip;
         Product *new_product;
         ip=new int;
         new_product=new Product(new_ID, new_Price, new_QTY, new_description);
      }
   }
}

 
//Discontinue Product: delete a discontinued Product (delete by Product ID)


void ProductDatabase::discontinueProduct(string Product_ID_){
   for(int i=0; i<product_count_; i++){
      if (product[i]->product_ID==Product_ID_){
         delete &product[i];
      }
   }
}
 
//Stocking a Product: add more quantity to a Product

void ProductDatabase::stockProduct(string Product_ID_, int QTY){
   for(int i=0; i<product_count_; i++){
      if (product[i]->product_ID==Product_ID_){
         product[i]->setQuantity(QTY);
      }
   }
}
 
 
//Query a Product: display all information on a Product given a Product Id

void ProductDatabase::productQuery(string Product_ID_){
   for(int i=0; i<product_count_; i++){
      if(product[i]->product_ID==Product_ID_){
         showProduct(*product[i]);
      }
   }
}
 
//sort: sort the Product database by product ID

void ProductDatabase::sortProductDB(){

}
//locate all the hashtags
void ProductDatabase::setProductIndex()
{
    
    cout<<"Damn"<<endl;
    for (int i=0;i<MAXPRODUCT;i++)
    {
        for (int x=0;x<Products[i].length();x++)
        {
            ProductIndex[i]=Products[i].at(x);
            
        }
    }
}
void ProductDatabase::getproductindex()
{   cout<<ProductIndex[1];
    /*for (int i=0;i<MAXPRODUCT*4;i++)
    {
        cout<<ProductIndex[i]<<endl;
    }*/
}

//getProduct: return a pointer to a Product given a product pointer



 
//resetDB: free all pointers if they’re not NULL

void ProductDatabase::resetDB(){
   for(int i; i<product_count_; i++){
      if(product[i]!=NULL){
         delete product[i];
      }
   }
}

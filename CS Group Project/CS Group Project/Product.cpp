//
//  Product.cpp
//  CS Group Project
//
//  Created by Katrina Bugyi on 5/31/14.
//  Copyright (c) 2014 Katrina Bugyi. All rights reserved.
//

#include "Product.h"
/*
 
 Functions: get/set functions for all data.
 Also provide a friend function (showProduct) for this class that will output all Product information. 
 Make sure to define the correct parameter required for this function.
 Functions: processOrder that takes an Order object. 
 If Product has more quantity than Order’s quantity then Order is processed. 
 The function reduces the Product’s quantity before return true. 
 Otherwise it returns false (can’t process Order due to limited stocking)
 Sample of text file:
 2357#Sony LED TV 46 in#859.95#145
 3589#Samsung Galaxy 5#259.99#239

*/
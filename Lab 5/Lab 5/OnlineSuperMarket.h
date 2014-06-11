//
//  OnlineSuperMarket.h
//  Lab 5
//
//  Created by Katrina Bugyi on 6/8/14.
//  Copyright (c) 2014 Katrina Bugyi. All rights reserved.
//

#ifndef __Lab_5__OnlineSuperMarket__
#define __Lab_5__OnlineSuperMarket__

#include <iostream>
/*
 class   OnlineSuperMarket

 Private data member: a pointer to FruitStation object, Martket name (XXX for example), 
 web address (http://www.xyz.com for example)
 
 Constructors (default constructor and non-default constructor): initialize Market name, web address
 
 Default constructor: dynamically allocate a default FruitStation object
 Non-default constructor: dynamically allocate a non-default FruitStation object.
 In this case you must pass an array of Fruit objects to this constructor
 
 Destructor: Output a message “Online market XXX  http://www.xyz.com is closed …” 
 and then deallocate the FruitStation object
 
 Public functions:
 Run:  showing some advertising banner about online super market and web address, 
 call the friend function ListAllFruits, then using a loop to start asking user to 
 either order fruits or to quit. If user selects Fruit ordering invoke FruitStationHandler function. 
 Otherwise invoke Quit function.
 
 FruitStationHandler: asking for fruit name, weight, then invoke FruitOrder function from
 FruitStation pointer passing Fruit name and weight to it
 
 Quit: Output a “thanks and come again” message
 
*/





#endif /* defined(__Lab_5__OnlineSuperMarket__) */

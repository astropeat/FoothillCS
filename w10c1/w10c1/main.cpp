//
//  main.cpp
//  w10c1
//
//  Created by Katrina Bugyi on 6/10/14.
//  Copyright (c) 2014 Katrina Bugyi. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   //THIS pointers

   /* in C++ when an object is created it maintains a pointer (memory address) to itself,
    this ->
    
    - Allows function chaining!
     Chain multiple function calls into a single statement.
    - Operator overloading
    - Data structures like linked lists, queues, trees, etc.
   
    
    INTRO:
    
    When an object is createed it maintains a pointer to itself called the 'this' pointer. 
    The 'this' pointer can be accessible only by:
      - constructors
      - destructors
      - member functions
    
      ! Not accessible in static functions...ergo they can not use 'this' pointers.
    */

   //How do we use the 'this' pointer?

   /*
      1. To differentiate between parameter names and data member names
   example:
   
    class Customer{
            private: 
               string name;
               int id;
    };
    Customer::Customer(string name, int id){
      //name = name;   left side name doesn't refer to private data, compiler gets confused!
      //id = id;       same for id!
      
      //instead we do this!
      this->name = name;
      this->id = id;
    }
    
    //the above, using member initializer syntax
    //Customer::Customer(string name, int id)
    // :name(name), id(id){}


    */

   /* 
    2. Function chaining
    example:
    
    class SimpleDate{
      private:
         int day, month, year;
      public:
         void setDay(int);
         void setMonth(int);
         void setYear(int);
    };
    
    SimpleDate d; // d==1/1/1970
    
    //d.setDay(10);
    //d.setMonth(6);
    //d.setYear(2014);  We use d.blahblahblah three times! How about once....? Concatenate!
    
    d.setDay(10).setMonth(6).setYear(2014); //Solution!
    };
    
    SimpleDate& SimpleDate::setDay(int day){  //get a new day
      this->day = day;                        //assign the new day
      return *this;
    };
    
    SimpleDate& SimpleDate::setMonth(int month){
      this->month = month;
      return *this;
    };
    
    SimpleDate& SimpleDate::setMonth(int year){
    this->year = year;
    return *this;
    };

    */


   /*
    3. To support operator overloading (CS2B)
    4. To facilitate data structures implementation (CS2C)
       - linked lists
       - queues
       - trees
    */


   /* 
    COPY CONSTRUCTOR
    http://www.cplusplus.com/articles/y8hv0pDG/
    
    A copy constructor will be invoked when one of the following happens:
    1- create an object from another object
    2- pass an object to a function using pass by value
    3- return an object as a function value
    
    1.
    city c1;                  //default constructor
    city c2("SJ", 95122);     //non-default constructor
    city * c3 = new City();   //pointer to a city object
    city c4 = c2;             //copy constructor
    
    By default copy constructor will do member-wise copy
    
    
    2. void printCity(City c);
    // when printCity is invoked, c parameter will be constructed by calling copy constructor
    
    3. city getACity();
    by default the compiler provides a default copy constructor which will do member wise copy.
    The only time we need a copy constructor is when your class contains pointers as data members.
    
    class City{
      private:
         char * name;
         int zip;
      public:
         City(const City&); // copy constructor
         City();
         City(char * name, int zip);
         ~City();
    };
    
    City right;
    City c = right;

    City::~City(){delete name;} //this frees the memory
    City::City(const city& right){
      zip = right.zip;
      name = new char[strlen(right.name)+1];
      strcopy(name, right.name);
    }
    */


    return 0;
}


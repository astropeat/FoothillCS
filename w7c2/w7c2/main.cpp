//
//  main.cpp
//  w7c2
//
//  Created by Katrina Bugyi on 5/22/14.
//  Copyright (c) 2014 Katrina Bugyi. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

//Object Assignment
//when you define a class always create a default constructor, especially with arrays!

class Point{
private:
   double x;
   double y;
public:
   Point();
   Point(double, double);
   ~Point();
};

//below we use member initializer syntax.
Point::Point():x(0.0), y(0.0){};
Point::Point(double a, double b): x(a), y(b){};

Point::~Point(){};

//Object Composition
class Circle{
private:
   double radius;
   Point center;
public:
   Circle();
   Circle(double, double, double);
};

Circle::Circle(): radius(0.0){}
//compiler will initalize center using oint's default constructor
Circle::Circle(double r, double x, double y)
: radius(r), center(x, y){}

int main()
{



   Point p1;
   Point p2(3.0, 4.0);
   Point p3(4.0, 5.0);

   p1 = p2;   // p1.x = 3.0   p1.y = 4.0
   p2 = p3;   // p2.x = 4.0   p2.y = 5.0
   p2 = p1;
   //member-wise copy

   //pass by value, reference, pointer.
   //Objects & Functions

   //Passing an object to a function
   //Pass by value syntax:
   void f1 (Point p);
   void f2 (const Point p);
   void f3 (const Point &p); //This is the most efficient way to pass by value. A constant, can't modify

   //Pass by reference
   void f4 (Point &P); //This changes the value of the original object


   //Returning an object from a function
   const Point f5(1, 2);
   Point f6(3.0, 28.0);


   //Objects && Arrays
   /*
   int iList[32];
   int iList2[4] = {1, 2, 3, 4};
   Point points[8];
    */



    return 0;
}


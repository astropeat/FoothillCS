//
//  main.cpp
//  w9c1
//
//  Created by Katrina Bugyi on 6/5/14.
//  Copyright (c) 2014 Katrina Bugyi. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;


/*    CLASS 1

   //Binary search algorithm
   // Return: index of the element whose value is the target parameter or -1 if not found

   int  binarySearch (int list [ ], int size, int target) {


      int first = 0;
      int last = size -1 ;
      int mid ;

      while (first <= last) {
         mid = (first+last)/2;
         if (target == list[mid])
            return mid;
         else if (target > list[mid])
            first = mid+1;
         else
            last = mid-1;
      }
      
      return  -1;  // not found
   }


   //Selection Sort Algorithm
void selectionSort (int list [ ], int size) {

   int smallest , tmp, walker;

   for (int first =0; first < size -1; first++){
      smallest = first;
      for (walker=first+1; walker < size; walker++) { // find the index of smallest element
         if (list[walker] < list[smallest])
            smallest = walker;

      } // end of inner loop
        // swap between first and smallest elements
      tmp = list[first];
      list[first] = list[smallest];
      list[smallest]=tmp;

   } // end of outer loop

}



//Bubble Sort Algorithm
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


*/


/* CLASS 2
Friendship <3
     - "breaks" encapsulation" -> don't use unless you know what it means.
     - Used to support another C++ feature, operator overloading.
 http://www.cplusplus.com/doc/tutorial/inheritance/

Friend functions <3
 A friend function is a global function, not a local(member) function.
 A friend function of a class can access private data in that class object. (breaks encapsulation)
 A function can be a friend of multiple classes.
 A class can have multiple friend functions.
 Friendship is granted, not taken.

 
 Example below:

class Employee{
 private:
   double salary;
   string name
 public:
 
 //friend must be declared in the class.
 //friend is specified by saying 'friend' before the function prototype.
 friend void display (const Employee &);

 };
 
 void display (const Employee & e){
   cout << e.name << " " << e.salary << endl;
 
 //name, salary are private but accessible because display is a friend of Employee class.

 }
 
 
 
 
 
Friend Classes <3
 
 

 
 
 */

int main()
{

return 0;
}


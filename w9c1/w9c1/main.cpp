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



/*

Elementary sorting algorithms O(n^2)

//Binary search algorithm
 http://en.wikipedia.org/wiki/Binary_search_algorithm
 http://www.fredosaurus.com/notes-cpp/algorithms/searching/binarysearch.html
 http://mycodinglab.com/binary-search-algorithm-c/
 http://www.cplusplus.com/reference/algorithm/binary_search/
 // very fast and efficient
 // in worst case scenario it takes only Log2N comparison to determine if an element is in the list.
//Return: index of the element whose value is the target parameter or -1 if not found
 


int  binarySearch (int list [ ], int size, int target) {
 //This relies on the list being pre-sorted. It is unwise to do otherwise. 

   int first = 0;
   int last = size -1 ;
   int mid ;

   while (first <= last) {
      mid = (first+last)/2;
 //looks for the middle element in the list. if equal it stops.
      if (target == list[mid])
         return mid;
 //If the value of target is larger than middle element it searches the second half of the list.
      else if (target > list[mid])
         first = mid+1;
 //Otherwise it searches the first half of the list.
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
This sorts in ascending order or descending order.
http://mycodinglab.com/bubble-sort-algorithm/
http://www.sorting-algorithms.com/bubble-sort
Sorted list starts with 0 elements, unsorted has n elements.
It goes through the list and adds the smallest number to the sorted list.
If position n is less than the value of position n-1 it trades places (swaps positions).
Sorts one element at a time.

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

 THIS IS USEFUL FOR OUR PROJECT!
*/




int main()
{

return 0;
}


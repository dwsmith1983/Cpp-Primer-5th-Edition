/* Copyright 2015 <dustin>
 * Using pointers, write a program to set the elements in an array to zero.
 */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::end;

int main() {
  int arr[10];        // initialize an int array with 10 elements
  int *b = arr;       // define *b as a pointer to arr[0]
  int *e = end(arr);  // define *e as a pointer to one past the end
  for (int *i = b; i != e; ++i) {
    *i = 0;  // change the value in the pointer to 0
    cout << *i << " ";
    ++b;     // increment to the next position in the array
  }
  cout << endl;
  return 0;
}


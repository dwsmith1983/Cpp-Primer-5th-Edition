/* Copyright 2015 <dustin>
 * Write a program to define an array of ten ints. Give each element the same
 * value as its position in the array.
 * Copy the array into another array. Rewrite your program to use vectors.
 */

#include <vector>
#include <iostream>

using std::cout;
using std::endl;
using std::vector;

int main() {
  int a[10];   // initializing an array with 10 positions
  cout << "The elements of the array is: ";
  for (int i = 0; i != 10; ++i) {
    a[i] = i;  // map each index to its int value
    cout << a[i] << " ";
  }
  cout << endl;
  int b[10];   // initialize a second array with 10 positions
  cout << "The elements of the copied array is: ";
  for (int i = 0; i != 10; ++i) {
    // copy array a into b
    b[i] = a[i];
    cout << b[i] << " ";
  }
  cout << endl;
  vector<int> v;     // initialize an int vector
  cout << "The elements of the vector is: ";
  for (int i = 0; i != 10; ++i) {
    v.push_back(i);  // append the vector i with int i at position i
    cout << v[i] << " ";
  }
  cout << endl;
  return 0;
}


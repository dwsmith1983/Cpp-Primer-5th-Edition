/* Copyright 2015 <dustin>
 * Write a program to initialize a vector from an array of ints.
 */

#include <vector>
#include <iostream>

using std::cout;
using std::endl;
using std::vector;
using std::begin;
using std::end;

int main() {
  // initializing an array of 10 ints
  constexpr size_t arr_size = 10;
  int arr1[arr_size] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  // initialize vector from arr1
  vector<int> vec(begin(arr1), end(arr1));
  cout << "The elements of the vector are: ";
  for (unsigned i = 0; i != vec.size(); ++i) {
    if (i != vec.size() - 1) {
      cout << vec[i] << " ";
    } else {
      cout << vec[i] << endl;
    }
  }
  return 0;
}


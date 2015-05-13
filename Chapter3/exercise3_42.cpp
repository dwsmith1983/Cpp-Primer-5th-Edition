/* Copyright 2015 <dustin>
 * Write a program to copy a vector of ints into an array of ints.
 */

#include <vector>
#include <iostream>

using std::vector;
using std::cout;
using std::endl;

int main() {
  // initialize a vector with 10 ints
  vector<int> vec = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  constexpr size_t vec_size = 10;
  int arr[vec_size] = {};
  cout << "The elements of the array are: ";
  for (unsigned i = 0; i != vec.size(); ++i) {
    if (i != vec.size() - 1) {
      arr[i] = vec[i];
      cout << arr[i] << " ";
    } else {
      arr[i] = vec[i];
      cout << arr[i] << endl;
    }
  }
  return 0;
}


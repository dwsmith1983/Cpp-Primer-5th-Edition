/* Copyright 2015 <dustin>
 * Write a program to compare two arrays for equality. Write a similar program
 * to compare to vectors.
 */

#include <iostream>
#include <vector>
#include <array>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::array;

int main() {
  /*
   * we can also define the arrays and vectors as strings and do a similar
   * comparision of the elements.
   */
  constexpr size_t b = 5;
  array<int, b> arr1 = {};  // intialize an int arrays of 5 elements
  array<int, b> arr2 = {};  // intialize an int arrays of 5 elements
  cout << "Enter in five integers for the first array:" << endl;
  int i = 0;                // intialize i as the zero int
  for (int j = 0; cin >> i && j != arr1.size() - 1; ++j) {
    arr1[j] = i;            // store user input int i in position j
  }
  cout << "Enter in five integers for the second array:" << endl;
  int n = 0;                // intialize n as the zero int
  for (int m = 0; cin >> n && m != arr2.size() - 1; ++m) {
    arr2[m] = n;            // store user input int n in position m
  }
  int cnt = 0;
  for (int a = 0; a != b; a++) {
    // compare the elements of array 1 and 2
    if (arr1[a] == arr2[a]) {
      ++cnt;                // increase the count if the elements are equal
    }
  }
  if (cnt == b) {
    // if the count = the number of elements in the array, the arrays are equal
    cout << "The arrays are element wise equal" << endl;
  } else {
    // otherwise unequal
    cout << "The arrays are not element wise equal" << endl;
  }
  // now compare vectors
  vector<int> vec1(b, 0);   // intialize vec1 and vec2 with 5 elements of 0
  vector<int> vec2(b, 0);
  cout << "Enter five integers for the first vector" << endl;
  int l = 0;
  for (unsigned t = 0; cin >> l && t != vec1.size() - 1; ++t) {
    vec1.push_back(l);      // append the integers to the first vector
    ++t;                    // increase t
  }
  cout << "Enter five integers for the second vector" << endl;
  for (unsigned t = 0; cin >> l && t != vec2.size() - 1; ++t) {
    vec2.push_back(l);
    ++t;
  }
  if (vec1 == vec2) {
    // determine if the vectors have the same length and elements; equal
    cout << "The vectors are equal" << endl;
  } else {
    cout << "The vectors are not equal" << endl;
  }
  return 0;
}

/* Copyright 2015 <dustin>
 * Write a program to use a conditional operator to find the elements in a
 * vector<int> that have odd values and double the value of each element.
 */

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
  // initialize an int test vector
  vector<int> v = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  // check each element in the vector if odd and double
  for (auto &i : v) {
    cout << ((i % 2 == 0) ? i : 2 * i) << endl;
  }
  return 0;
}

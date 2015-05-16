/* Copyright 2015 <dustin>
 * Read a set of integers into a vector. Print the sum of each pair of adjacent
 * elements. Change your program so that it prints the sum of the first and
 * last elements, followed by the sum of the second and second-to-last, and so
 * on.
 */

#include <vector>
#include <iostream>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main() {
  vector<int> v1;  // initialize v1 as an empty int vector
  int i = 0;       // initialize i as int 0
  // prompt user for inputs
  cout << "Enter in a set of integers:" << endl;
  while (cin >> i) {
    v1.push_back(i);  // at run time populate the vector with ints
  }
  for (unsigned j = 0; j != v1.size() - 1; ++j) {
    /*
     * iterator over less than the max size minus 1 since v1[-1] will have no
     * new adjacent pair
     */
    cout << "The sum of indices " << j << " and " << j + 1 << " is: "
         << v1[j] + v1[j + 1] << endl;
  }
  for (unsigned k = 0; k != v1.size()/2 && k != v1.size() - 1 - k; ++k) {
    // iterator the max size divide by 2 so we don't pick up symmetric pairs
    cout << "The sum of indices " << k << " and " << v1.size() - 1 - k
         << " is: " << v1[k] + v1[v1.size() - 1 - k] << endl;
  }
  return 0;
}

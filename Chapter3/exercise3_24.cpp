/* Copyright 2015 <dustin>
 * Redo the last exercise on p. 105 using iterators. That is, sum adjacent
 * indices and from the outside in in pairs.
 */

#include <vector>
#include <iostream>

using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::distance;

int main() {
  vector<int> v1;  // initialize v1 as an empty int vector
  int i = 0;       // initialize i as int 0
  // prompt user for inputs
  cout << "Enter in a set of integers:" << endl;
  while (cin >> i) {
    v1.push_back(i);  // at run time populate the vector with ints
  }
  // sum of adjacent indices
  for (auto it = v1.cbegin(); it != v1.cend() - 1; ++it) {
    cout << "The sum of indices " << it - v1.cbegin() << " and "
         << it + 1 - v1.cbegin() << " is " << *it + *(it + 1) << endl;
  }
  // sum of v1[j] + v1[last - j] where j=0,1,..,j-1 using iterators
  auto a = v1.cbegin();    // beginning iterator
  auto b = v1.cend() - 1;  // ending iterator
  for (; b > a; ++a, --b) {
    cout << "The sum of indices " << a - v1.cbegin() << " and "
         << b - v1.cbegin() << " is " << *a + *b << endl;
  }
  return 0;
}

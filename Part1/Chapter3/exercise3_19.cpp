/* Copyright 2015 <dustin>
 * List three ways to define a vector and give it ten elements, each with the
 * value 42. Indicate whether there is a preferred way to do so and why.
 * Since all the elements are the same, method 1 of defining the size and
 * element of the vector is the most efficient way to approach this problem.
 * See p. 101 Key Concepts blurb.
 */

#include <vector>
#include <iostream>

using std::vector;
using std::cout;
using std::endl;

int main() {
  // method 1 initialize vector with 10 42s
  vector<int> v1(10, 42);  // initialized vector with 10 42s
  cout << "v1 has " << v1.size() << " elements of the following: ";
  for (unsigned i = 0; i != v1.size(); ++i) {
    if (i != v1.size() - 1) {
      cout << v1[i] << ", ";
    } else {
      cout << v1[i] << endl;
    }
  }
  // method 2 loop through and define as 42
  vector<int> v2(10);      // empty vector with 10 entries
  for (unsigned j = 0; j != v2.size(); ++j) {
    v2[j] = 42;
  }
  cout << "v2 has " << v2.size() << " elements of the following: ";
  for (unsigned k = 0; k != v2.size(); ++k) {
    if (k != v2.size() - 1) {
      cout << v2[k] << ", ";
    } else {
      cout << v2[k] << endl;
    }
  }
  // method 3 push_back
  vector<int> v3;          // empty int vector
  int n = 42;
  for (int m = 0; m <= 9; ++m) {
    v3.push_back(n);
  }
  cout << "v3 has " << v3.size() << " elements of the following: ";
  for (unsigned p = 0; p != v3.size(); ++p) {
    if (p != v3.size() - 1) {
      cout << v3[p] << ", ";
    } else {
      cout << v3[p] << endl;
    }
  }
  return 0;
}

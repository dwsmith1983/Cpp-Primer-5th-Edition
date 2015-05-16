/* Copyright 2015 <dustin>
 * How many elements are there in each of the following vectors? What are the
 * values of the elements?
 * (a) vector<int> v1;
 * 0 since the int vector is uninitialized.
 * (b) vector<int> v2(10);
 * 10 elements of 0
 * (c) vector<int> v3(10, 42);
 * 10 elements of 42
 * (d) vector<int> v4 {10};
 * one element of 10
 * (e) vector<int> v5 {10, 42}
 * two elements of 10 and 42
 * (f) vector<string> v6 {10};
 * 10 elements of empty string
 * (g) vector<string> v7 {10, "hi"};
 * 10 elements of the string "hi"
 */

#include <vector>
#include <string>
#include <iostream>

using std::vector;
using std::string;
using std::cout;
using std::endl;

int main() {
  vector<int> v1;
  // verify our element count
  cout << "v1 has " << v1.size() << " elements" << endl;
  vector<int> v2(10);
  // verify our element count
  cout << "v2 has " << v2.size() << " elements which are: ";
  for (unsigned i = 0; i != v2.size(); ++i) {
    if (i != v2.size() - 1) {
      cout << v2[i] << ", ";
    } else {
      cout << v2[i];
    }
  }
  cout << endl;
  vector<int> v3(10, 42);
  // verify our element count
  cout << "v3 has " << v3.size() << " elements which are: ";
  for (unsigned j = 0; j != v3.size(); ++j) {
    if (j != v3.size() - 1) {
      cout << v3[j] << ", ";
    } else {
      cout << v3[j];
    }
  }
  cout << endl;
  vector<int> v4 {10};
  // verify our element count
  cout << "v4 has " << v4.size() << " elements which is: ";
  for (unsigned k = 0; k != v4.size(); ++k) {
    if (k != v4.size() - 1) {
      cout << v4[k] << ", ";
    } else {
      cout << v4[k];
    }
  }
  cout << endl;
  vector<int> v5 {10, 42};
  // verify our element count
  cout << "v5 has " << v5.size() << " elements which are: ";
  for (unsigned l = 0; l != v5.size(); ++l) {
    if (l != v5.size() - 1) {
      cout << v5[l] << ", ";
    } else {
      cout << v5[l];
    }
  }
  cout << endl;
  vector<string> v6 {10};
  // verify our element count
  cout << "v6 has " << v6.size() << " elements which are: " << v6[0] << endl;
  vector<string> v7 {10, "hi"};
  // verify our element count
  cout << "v7 has " << v7.size() << " elements which are: ";
  for (unsigned n = 0; n != v7.size(); ++n) {
    if (n != v7.size() - 1) {
      cout << v7[n] << ", ";
    } else {
      cout << v7[n];
    }
  }
  cout << endl;
  return 0;
}


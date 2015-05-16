/* Copyright 2015 <dustin>
 * Write a program to read a sequence of ints from cin and store those values
 * in a vector.
 * For the second exercise, we need to read in strings. To do so, we would need
 * to make the following adjustments:
 * vector<string> v2;
 * string word;
 * replace element with word in all instances and change the prompt to mention
 * strings instead of ints
 */

#include <vector>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
  vector<int> v1;   // initialize an empty int vector
  int element = 0;  // initialize element as int 0
  // prompt user for input
  cout << "Enter in integers to append to an empty vector:" << endl;
  while (cin >> element) {
    v1.push_back(element);  // append element to v1
  }
  return 0;
}

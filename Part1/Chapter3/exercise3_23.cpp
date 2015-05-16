/* Copyright 2015 <dustin>
 * Write a program to create a vector with ten int elements. Using an iterator,
 * assign each element a value that is twice its current value. Test your
 * program by printing the vector.
 */

#include <vector>
#include <iostream>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main() {
  vector<int> vint;         // initialize an empty int vector
                            // prompt user for inputs
  cout << "Enter in ten integers:" << endl;
  int entry, i = 0;         // initialize entry,i as the zero int
  while (cin >> entry && i != 10) {
    ++i;                    // increase iterator to ensure only ten entries
    vint.push_back(entry);  // append the integers to the vector
  }
  for (auto it = vint.begin(); it != vint.end(); ++it) {
    *it *= 2;               // change the current value to twice its value
    cout << *it << endl;
  }
  return 0;
}

/* Copyright 2015 <dustin>
 * Write the condition for a while loop that would read ints from the standard
 * input and stop when the value read is equal to 42.
 */

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  cout << "Enter in integers: " << endl;
  int i = 0;
  while (cin >> i && i != 42) {
    cout << "The integer entered is not the correct integer to stop the loop"
         << endl;
  }
  return 0;
}


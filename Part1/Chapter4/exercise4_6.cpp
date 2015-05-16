/* Copyright 2015 <dustin>
 * Write an expression to determine whether an int value is even or odd.
 */

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  cout << "Enter in an integer value: " << endl;
  int i = 0;         // initialize i as int 0
  cin >> i;          // user inputs integer
  if (i % 2 == 0) {  // if mod out by 2 is zero, i is even
    cout << i << " is even" << endl;
  } else {
    cout << i << " is odd" << endl;
  }
  return 0;
}


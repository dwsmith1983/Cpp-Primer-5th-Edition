/* Copyright 2015 <dustin>
 * Rewrite the exercises from p.13 and p.76 with appropriate using declarations
 * Use -- to write a while loop that prints the numbers from 10 to 0
 */

#include <iostream>

// using std namespace for cout and endl so std:: is un-necessary
using std::cout;
using std::endl;

int main() {
  int i = 10;  // initialize i as an int type
  while (i <= 10 && i >= 0) {
    if (i != 0) {
      cout << i << ", ";
    } else {   // so there is no comma after the last element 0
      cout << i;
    }
    --i;       // decrement by 1 each time through the loop
  }
  cout << endl;
  return 0;
}

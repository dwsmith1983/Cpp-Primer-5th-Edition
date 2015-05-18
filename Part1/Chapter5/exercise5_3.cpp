/* Copyright 2015 <dustin>
 * Use the comma operator to rewrite the while loop from p. 11 so that it no
 * longer requires a block. Explain whether this rewrite improves or diminishes
 * the readability of this code.
 */

#include <iostream>

using std::cout;
using std::endl;

int main() {
  int sum = 0, i = 1;
  while (i <= 10)
    sum += i, ++i;
  // without adequate comments, this rewrite would be more difficult to read
  cout << "The sum of 1 to 10 inclusive is " << sum << endl;
  return 0;
}

/* Copyright 2015 <dustin>
 * Determine the results of the following expressions.
 */

#include <iostream>

using std::cout;
using std::endl;

int main() {
  // a
  cout << -30 * 3 + 21 / 5 << endl;
  // b
  cout << -30 + 3 * 21 / 5 << endl;
  // c
  cout << 30 / 3 * 21 % 5 << endl;
  // d
  cout << -30 / 3 * 21 % 4 << endl;
  return 0;
}

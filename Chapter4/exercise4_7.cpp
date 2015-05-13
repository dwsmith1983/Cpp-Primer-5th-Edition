/* Copyright 2015 <dustin>
 * Show three expressions that will overflow.
 */

#include <iostream>

using std::cout;
using std::endl;

int main() {
  cout << 99999999 * 9999999 << endl;
  short a = 32767;
  cout << a + 13 << endl;
  unsigned b = 0;
  cout << --b << endl;
  return 0;
}

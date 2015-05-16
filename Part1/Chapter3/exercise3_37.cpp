/* Copyright 2015 <dustin>
 * What does the following program do?
 */

#include <iostream>

using std::cout;
using std::endl;

int main() {
  const char ca[] = {'h', 'e', 'l', 'l', 'o'};
  const char *cp = ca;
  while (*cp) {
    cout << *cp << endl;
    ++cp;
  }
  return 0;
}
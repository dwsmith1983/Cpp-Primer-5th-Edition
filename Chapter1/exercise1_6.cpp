/* Copyright 2015 <dustin>
 * Explain whether the following program fragment is lega.
 * std::cout << "The sum of " << a;
 *           << " and " << b;
 *           << " is " << a + b << std::endl;
 * The above code is not legal since this code snippet does not
 * define a and b, we would need std::cout per line, we would need
 * to prompt the person for an input of a and b, and we need to end
 * the program with return 0;; otherwise, the program will return
 * 0 + 0 is 0.
 * std::cout is needed for every line since the lines are ended by a ;
 */

#include <iostream>

int main() {
  int a = 0, b = 0;
  std::cout << "The sum of " << a;
  std::cout << " and " << b;
  std::cout << " is " << a + b << std::endl;
  return 0;  // this code will work but only return 0 + 0 is 0
}

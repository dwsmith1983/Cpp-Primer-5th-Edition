/* Copyright 2015 <dustin>
 * Write code to change the value of a pointer. Write code to change the value
 * to which the pointer points.
 */

#include <iostream>

int main() {
  int i = 5, j = 3;
  int *p = &i;
  std::cout << p << std::endl;  // value of to where the pointer points
  p = &j;  // change value of the pointer 5 to 3
  std::cout << *p << " " << p << std::endl;
  *p = 10;
  // change the value of i to 10 but keep value of where the pointer points
  std::cout << *p << " " << p << std::endl;
  return 0;
}

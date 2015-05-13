/* Copyright 2015 <dustin>
 * Which, if any, of the following assigments are invalid? If they are valid,
 * explain what they do.
 * int i = 0, &r1 = i; double d = 0, &r2 = d;
 * (a) r2 = 3.14159;
 * Valid, r2 is defined to be the double 3.14159
 * (b) r2 = r1;
 * Valid, r2 is defined to be the int 0
 * (c) i = r2;
 * Valid, i is defined to be r2 = 0
 * (d) r1 = d;
 * Valid, r1 is defined to be d = 0
 */

#include <iostream>

int main() {
  int i = 0, &r1 = i;
  double d = 0, &r2 = d;
  // r2 = 3.14159;
  // r2 = r1;
  // i = r2;
  r1 = d;
  std::cout << r1 << std::endl;
  return 0;
}

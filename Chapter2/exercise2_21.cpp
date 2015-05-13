/* Copyright 2015 <dustin>
 * Explain each of the following definitions. Indicate whether any are illegal
 * and, if so, why.
 * int i = 0;
 * (a) double *dp = &i; // assumed typo and corrected to *dp
 * Illegal because we cannot convert int to double
 * (b) int *ip = i;
 * Illegal because the pointer is associated with the reference &i not i
 * (c) int *p = &i;
 * Legal
 */

#include <iostream>

int main() {
  int i = 0;
  // double i = 0;
  // double *dp = &i;
  // int *ip = &i;
  int *p = &i;
  std::cout << *p << " " << p << std::endl;
  return 0;
}

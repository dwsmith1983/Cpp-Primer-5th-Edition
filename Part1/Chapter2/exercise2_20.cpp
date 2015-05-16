/* Copyright 2015 <dustin>
 * What does the following program do?
 * int i = 42;  // initialize integer i to 42
 * int *p1 = &i;  // initialize the pointer to i so p1 holds the address to i
 * *p1 = *p1 * *p1;  // square i leaving address unchanged
 */

#include <iostream>

int main() {
  int i = 42;  // initialize integer i to 42
  int *p1 = &i;  // initialize p1 to hold the address of i
  std::cout << p1 << std::endl;  // print pointer address
  *p1 = *p1 * *p1;  // square i leaving address unchanged
  std::cout << *p1 << " " << p1 << std::endl;  // verify output
  return 0;
}

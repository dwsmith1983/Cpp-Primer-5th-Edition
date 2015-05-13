/* Copyright 2015 <dustin>
 * Assuming p is a pointer to int, explain the following code:
 * if (p)  // ..
 * if (*p) // ..
 * Since p is a pointer, if (p) evaluates to true since it is nonzero.
 * *p is the int referenced by the pointer and evaluates to true if nonzero and
 * false if zero.
 */

#include <iostream>

int main() {
  int i = 3, j = 0;  // initialize two ints for test
  int *p = &i;
  int *q = &j;
  if (p) {
    std::cout << "evaluates to true since p is nonzero" << std::endl;
  } else {
    std::cout << "evaluates to false since p is zero" << std::endl;
  }
  if (*p) {
    std::cout << "evaluates to true since *p is nonzero" << std::endl;
  } else {
    std::cout << "evaluates to false since *p is zero" << std::endl;
  }
  if (q) {
    std::cout << "evaluates to true since q is nonzero" << std::endl;
  } else {
    std::cout << "evaluates to false since q is zero" << std::endl;
  }
  if (*q) {
    std::cout << "evaluates to true since *q is nonzero" << std::endl;
  } else {
    std::cout << "evaluates to false since *q is zero" << std::endl;
  }
  return 0;
}

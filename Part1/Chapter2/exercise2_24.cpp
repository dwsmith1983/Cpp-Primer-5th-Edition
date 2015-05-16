/* Copyright 2015 <dustin>
 * Why is the initialization of p legal but that of 1p illegal?
 * int i = 42; void *p = &i; long *1p = &i;
 * With void, the object can be of any type whereas with long we are
 * referencing an integer
 */

#include <iostream>

int main() {
  int i = 42;
  void *p = &i;
  long *pp = &i;
  return 0;
}

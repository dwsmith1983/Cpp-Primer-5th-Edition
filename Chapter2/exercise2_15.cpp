/* Copyright 2015 <dustin>
 * Which of the following definitions, if any, are invalid? Why?
 * (a) int ival = 1.01;
 * Invalid ival should be an int object
 * (b) int &rval1 = 1.01;
 * Invalid since the initializer must be an object
 * (c) int &rval2 = ival;
 * Valid if ival is defined as an int object. 
 * (d) int &rval3;
 * Invalid a reference must be initilized
 */

#include <iostream>

int main() {
  int ival = 1.01;
  int &rval1 = 1.01;
  int ival = 2;
  int &rval2 = ival;
  int &rval3;
  std::cout << rval2 << std::endl;
  return 0;
}

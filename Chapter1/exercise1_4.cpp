/* Copyright 2015 <dustin>
 * Our programs used the addition operator to add two numbers.
 * Write a program that uses multiplication and print the result.
 */

#include <iostream>

int main() {
  std::cout << "Enter two integer numbers:" << std::endl;
  // call the standard library cout
  int a = 0, b = 0;
  // initialize the variables a,b as zero
  std::cin >> a >> b;
  // call the standard library cin
  std::cout << "The multiplication of " << a << " and " << b << " is "
            << a*b << std::endl;
  return 0;
}

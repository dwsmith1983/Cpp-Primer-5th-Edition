// Copyright 2015 <dustin>
// Our programs used the addition operator to add two numbers.
// Write a program that uses multiplication and print the result.
// Write the program to include separate statements for each operand

#include <iostream>

int main() {
  std::cout << "Enter two integer numbers:";
  std::cout << std::endl;
  // call the standard library cout
  // again call the standard library to end the line
  int a = 0, b = 0;
  // initialize the variables a,b as zero
  std::cin >> a;
  std::cin >> b;
  // call the standard library cin
  std::cout << "The multiplication of ";
  std::cout << a;
  std::cout << " and ";
  std::cout << b;
  std::cout << " is ";
  std::cout << a*b;
  std::cout << std::endl;
  return 0;
}

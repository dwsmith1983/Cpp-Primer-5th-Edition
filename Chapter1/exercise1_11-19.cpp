/* Copyright 2015 <dustin>
 * Write a program that prompts the user for two integers.
 * Print each number in the range specified by those two integers.
 */

#include <iostream>

int main() {
  std::cout << "Enter two integers:" << std::endl;
  // prompt user for two integers
  int a = 0, b = 0;    // initialize integers a,b as 0
  std::cin >> a >> b;  // read in integers a,b
  /* this if statement determines the law of trichotomy for a,b,
   * evaluates each case, and prints the range of numbers between a,b
   */
  if (a > b) {  // for a > b
    int i = b;
    while (i >= b && i <= a) {  // list the values in the range
      std::cout << i << std::endl;
      ++i;
    }
  } else if (b > a) {  // for b > a
    int i = a;
    while (i >= a && i <= b) {  // list the values in the range
      std::cout << i << std::endl;
      ++i;
    }
  } else {  // for a = b
    std::cout << "The range of integers is zero" << std::endl;
  }
  return 0;
}

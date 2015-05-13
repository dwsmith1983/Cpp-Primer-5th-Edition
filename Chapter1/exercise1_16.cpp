/* Copyright 2015 <dustin>
 * Write your own version of a program that prints the sum of set of integers
 * read from cin.
 */

#include <iostream>

int main() {
  int sum = 0;  // indexing the sum to zero
  std::cout << "Enter a set of integers to be summed and hit C-d when done"
            << std::endl;
  for (int i = 0; std::cin >> i; ++i) {
    sum += i;  // sum the inputed integers
  }
  std::cout << "The sum of the integers is " << sum << std::endl;
  return 0;
}

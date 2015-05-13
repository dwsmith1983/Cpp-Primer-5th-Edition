/* Copyright 2015 <dustin>
 * Rewrite the first exercises on pg. 13 using for loops.
 */

#include <iostream>

int main() {
  int sum = 0;  // indexing the sum at zero
  for (int i = 50; i <= 100; ++i) {
    sum += i;
  }
  std::cout << "The sum from 50 to 100 is " << sum << std::endl;
  return 0;
}

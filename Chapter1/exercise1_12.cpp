/* Copyright 2015 <dustin>
 * What does the following for loop do? What is the final value of sum?
 * int sum = 0;
 * for (int i = -100, i <= 100, ++i)
 *     sum += i;
 * The following loop sums the numbers from -100 to 100. The final value is
 * zero.
 */

#include <iostream>

int main() {
  int sum = 0;  // indexing the sum at zero
  for (int i = -100; i <= 100; i++) {
    sum += i;
  }
  std::cout << "The sum from -100 to 100 is " << sum << std::endl;
  return 0;
}

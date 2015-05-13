/* Copyright 2015 <dustin>
 * This program sums the numbers from 50 to 100 using a while loop.
 */

#include <iostream>

int main() {
  int sum = 0, i = 50;
  // index the sum at 0 and the iterator i at 50
  while (i >= 50 && i <= 100) {  // using && for 50<=i<=100
    sum += i;
    ++i;
  }
  std::cout << "Sum of 50 to 100 inclusive is "
            << sum << std::endl;
  return 0;
}

/* Copyright 2015 <dustin>
 * Use the decrement operator -- to write a while loop that prints from
 * 10 to 0
 */

#include <iostream>

int main() {
  int i = 10;
  // index the sum at 0 and the iterator i at 1
  while (i >= 0) {
    std::cout << i << std::endl;
    // have cout print the iterator i as it counts down
    --i;  // decrement i by -1
  }
  return 0;
}

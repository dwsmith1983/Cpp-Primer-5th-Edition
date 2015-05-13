/* Copyright 2015 <dustin>
 * What does the following code print?
 * int i, &ri = i;
 * i = 5; ri = 10;
 * std::cout << i << " " << ri << std::endl;
 * Prints 5 10 (incorrect) 10 10
 */

#include <iostream>

int main() {
  int i, &ri = i;
  i = 5;
  ri = 10;
  std::cout << i << " " << ri << std::endl;
  return 0;
}

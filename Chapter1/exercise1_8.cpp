/* Copyright 2015 <dustin>
 * Indicate which of the following statements are legal
 * Then compile and fix any errors.
 */
// std::cout << "/*";                 // legal
// std::cout << "*/";                 // illegal
// std:cout << /* "*/" */;            // illegal
//  std::cout << /* "*/" /* "/*" */;  // illegal

#include <iostream>

int main() {
  std::cout << "/*";                  // legal
  std::cout << "*/";                  // legal
  std::cout << /* "*/" "/*" */;       // illegal corrected
  std::cout << /* "*/" /* "/*" */;    // legal
  return 0;
}

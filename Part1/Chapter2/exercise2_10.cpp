/* Copyright 2015 <dustin>
 * What are the initial values, if any, of each of the following variables?
 * std::string global_str;
 * int main() {
 *   int local_int;
 *   std:string local_str;
 * }
 */

#include <iostream>
#include <string>

std::string global_str;  // empty

int main() {
  int local_int;  // 0
  std::string local_str;  // empty
  std::cout << global_str << std::endl;
  std::cout << local_int << std::endl;
  std::cout << local_str << std::endl;
  return 0;
}

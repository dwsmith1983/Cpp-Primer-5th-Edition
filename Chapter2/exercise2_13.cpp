/* Copyright 2015d <dustin>
 * What is the value of j in the following program?
 * int i = 42;
 * int main() {
 *   int i = 100;
 *   int j = i;
 * }
 * The value of j is 100 since ::i wasn't used to specify the global i
 */

#include <iostream>

int i = 42;

int main() {
  int i = 100;
  int j = i;
  std::cout << j << std::endl;
  return 0;
}

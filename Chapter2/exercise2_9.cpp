/* Copyright 2015 <dustin>
 * Explain the following definitions. For those that are illegal, explain
 * what's wrong and how to correct it.
 * (a) std::cin >> int input_value;
 * illegal; we need to declare input_value as int first. we need to have
 * int input_value;
 * std::cin >> input_value;
 * (b) int i = { 3.14 };
 * illegal; narrowing convedrsion required. we can do int i = (3.14) but this
 * will truncate to 3
 * (c) double salary = wage = 9999.99;
 * illegal; in this case, salary isn't declared. we can write
 * double salary = 9999.99, wage = salary;
 * (d) int i = 3.14;
 * this will work but truncate i to 3
 */

#include <iostream>

int main() {
  int input_value;
  std::cin >> input_value;
  int i = (3.14);
  double salary = 9999.99, wage = salary;
  int j = 3.14;
  return 0;
}

/* Copyright 2015 <dustin>
 * Determine the types and values of each of the following variables:
 * (a) int* ip, i, &r = i;
 * *ip points to an integer, i is an integer, and &r is a reference to an int
 * (b) int i, *ip = 0;
 * i is an int and *ip is a null pointer
 * (c) int* ip, ip2;
 * *ip points to an int and ip2 is an int
 */

#include <iostream>

int main() {
  int* ip, i, &r = i;
  std::cout << *ip << " " << i << " " << &r << std::endl;
  int i2, *ip2 = 0;
  std::cout << i2 << " " << *ip2 << std::endl;
  int* ip3, ip4;
  std::cout << *ip3 << " " << ip4 << std::endl;
  return 0;
}

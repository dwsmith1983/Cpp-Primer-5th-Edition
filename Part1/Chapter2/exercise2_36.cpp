/* Copyright 2015 <dustin>
 * In the following code, determine the type of each variable and the value
 * each variable has when the code finishes:
 * int a = 3, b = 4;
 * decltype(a) = c = 4;  // c has int type
 * decltype((b)) d = a;  // d is a ref integer
 * ++c;
 * ++d;
 * You need to execute $ ./exercise2_36 | c++filt -t in order to understand
 * the typeid.name() output
 */

#include <iostream>
#include <typeinfo>

int main() {
  int a = 3, b = 4;
  decltype(a) c = a;    // c has int type
  decltype((b)) d = a;  // d is a ref integer
  ++c;                  // 4 since a = 3 is incremented by 1
  ++d;                  // 4 since d = 3 is incremented by 1
  std::cout << "c is of type: " << typeid(c).name() << std::endl;
  std::cout << "d is of type: " << typeid(d).name() << std::endl;
  std::cout << "The final value of c is " << c << std::endl;
  std::cout << "The final value of d is " << d << std::endl;
  return 0;
}

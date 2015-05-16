/* Copyright 2015 <dustin>
 * Assignment is an example of an expression that yields a reference type.
 * The type is a reference to the type of the left-hand operand. That is, if
 * i is an int, then the type of the expression i = x is int&. Using that
 * knowledge, determine the type and value of each variable in this code:
 * int a = 3, b = 4;
 * decltype(a) c = a;
 * decltype(a = b) d = a;
 */

#include <iostream>
#include <typeinfo>

int main() {
  int a = 3, b = 4;       // a,b are int
  decltype(a) c = a;      // c is an int type
  decltype(a = b) d = a;  // b is a reference to int a
  std::cout << "a is of type: " << typeid(a).name() << std::endl;
  std::cout << "b is of type: " << typeid(b).name() << std::endl;
  std::cout << "c is of type: " << typeid(c).name() << std::endl;
  std::cout << "d is of type: " << typeid(d).name() << std::endl;
  std::cout << "the final value of a is " << a << std::endl;
  std::cout << "the final value of b is " << b << std::endl;
  std::cout << "the final value of c is " << c << std::endl;
  std::cout << "the final value of d is " << d << std::endl;
  return 0;
}

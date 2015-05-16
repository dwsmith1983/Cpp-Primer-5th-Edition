/* Copyright 2015 <dustin>
 * Determine the types deduced in each of the following definitions. Once you
 * have figured out the types, write a program to see whether you were correct.
 * const int i = 42;
 * auto j = i; const auto &k = i; auto *p = &i;
 * const auto j2 = i, &k2 = i;
 * You need to execute $ ./exercise2_35 | c++filt -t in order to understand
 * the typeid.name() output
 */

#include <iostream>
#include <typeinfo>

int main() {
  const int i = 42;   // constant expression of int type
  auto j = i;         // constant expression of type i
  const auto &k = i;  // for k, constant expression of type i
                      // for &k, is a pointer to constant int
  auto *p = &i;       // for p, is a pointer to constant int
                      // for *p, is of type int
  const auto j2 = i, &k2 = i;
                      // for j2, is of type int
                      // for k2, is of type int
                      // for &k2, is a pointer to constant int
  std::cout << "i is of type: " << typeid(i).name() << std::endl;
  std::cout << "j is of type: " << typeid(j).name() << std::endl;
  std::cout << "k is of type: " << typeid(k).name() << std::endl;
  std::cout << "&k is of type: " << typeid(&k).name() << std::endl;
  std::cout << "p is of type: " << typeid(p).name() << std::endl;
  std::cout << "*p is of type: " << typeid(*p).name() << std::endl;
  std::cout << "j2 is of type: " << typeid(j2).name() << std::endl;
  std::cout << "k2 is of type: " << typeid(k2).name() << std::endl;
  std::cout << "&k2 is of type: " << typeid(&k2).name() << std::endl;
  return 0;
}

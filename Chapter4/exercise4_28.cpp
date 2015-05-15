/* Copyright 2015 <dustin>
 * Write a program to print the size of each of the built-in types.
 */

#include <iostream>

using std::cout;
using std::endl;

int main() {
  // char type
  cout << "The size of char is        " << sizeof(char) << " bytes" << endl;
  cout << "The size of wchar is       " << sizeof(wchar_t) << " bytes" << endl;
  cout << "The size of char16 is      " << sizeof(char16_t) << " bytes"
       << endl;
  cout << "The size of char32 is      " << sizeof(char32_t) << " bytes"
       << endl;
  // int same for uint (unsigned int)
  cout << "The size of int8 is        " << sizeof(int8_t) << " bytes" << endl;
  cout << "The size of int16 is       " << sizeof(int16_t) << " bytes" << endl;
  cout << "The size of int32 is       " << sizeof(int32_t) << " bytes" << endl;
  cout << "The size of int64 is       " << sizeof(int64_t) << " bytes" << endl;
  // float
  cout << "The size of float is       " << sizeof(float) << " bytes" << endl;
  cout << "The size of double is      " << sizeof(double) << " bytes" << endl;
  cout << "The size of long double is " << sizeof(long double) << " bytes"
       << endl;
  // bool
  cout << "The size of bool is        " << sizeof(bool) << " bytes" << endl;
  return 0;
}

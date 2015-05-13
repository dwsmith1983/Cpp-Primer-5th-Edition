/* Copyright 2015 <dustin>
 * Write a program to define two character arrays initialized from string
 * literals. Now define a third character array to hold the concatenation of
 * the two arrays. Use strcpy and strcat to copy the two arrays into the third.
 */

#include <cstring>
#include <string>
#include <iostream>

using std::cout;
using std::endl;

int main() {
  // initialize two char arrays from string literals
  const char ca1[] = "String one";
  const char ca2[] = "String two";
  char ca3[50] = "";  // picked a number significantly larger than for concat
  strcpy(ca3, ca1);
  strcat(ca3, " ");   // add a space between the two concat strings
  strcat(ca3, ca2);
  cout << ca3 << endl;
  return 0;
}

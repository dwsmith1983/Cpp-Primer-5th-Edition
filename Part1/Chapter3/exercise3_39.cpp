/* Copyright 2015 <dustin>
 * Write a program to compare two strings. Now write a program to compare to
 * C-style character strings.
 */

#include <cstring>
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main() {
  // create my strings for comparison with Dr. Seuss reference
  string s1 = "String one not unlike thing one";
  string s2 = "String two";
  // C++-style for comparing two strings
  if (s1 == s2) {
    cout << "the strings are equal" << endl;
  } else if (s1 < s2) {
    cout << "s1 comes before s2 lexicographically" << endl;
  } else {
    cout << "s2 comes before s1 lexicographically" << endl;
  }
  const char ca1[] = "String one not unlike thing one";
  const char ca2[] = "String two";
  // C-style for comparing two strings
  if (strcmp(ca1, ca2) == 0) {
    cout << "the strings are equal" << endl;
  } else if (strcmp(ca1, ca2) < 0) {
    cout << "s1 comes before s2 lexicographically" << endl;
  } else {
    cout << "s2 comes before s1 lexicographically" << endl;
  }
  return 0;
}

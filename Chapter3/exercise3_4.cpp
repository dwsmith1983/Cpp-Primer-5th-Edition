/* Copyright 2015 <dustin>
 * Write a program to read two strings and report whether the strings are
 * equal. If not, report which of the two is larger. Now change the program to
 * report whether the strings have the same length, and if not, report which is
 * longer.
 */

#include <iostream>
#include <string>

// using std namespace for string,cout,cin,endl so std:: is un-necessary
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main() {
  string s1, s2;                            // declare two empty strings
  cout << "Enter in two strings:" << endl;  // prompt user for two strings
  cin >> s1 >> s2;                          // read in the strings
  // determine which string is larger
  if (s1 == s2) {                           // determine equality
    cout << "The two strings entered are the same" << endl;
  } else if (s1 > s2) {                     // determine if s1 is larger
    cout << "The first string is larger than the second string" << endl;
  } else {                                  // determine if s2 is larger
    cout << "The second string is larger than the first string" << endl;
  }
  // determine which string is longer
  if (s1.size() == s2.size()) {             // determine equality
    cout << "The strings have the same length of " << s1.size()  << endl;
  } else if (s1.size() > s2.size()) {       // determine is s1 is longer
    cout << "The first string is longer than the second string with length "
         << s1.size() << endl;
  } else {                                  // determine if s2 is longer
    cout << "The second string is longer than the first string with length "
         << s2.size() << endl;
  }
  return 0;
}


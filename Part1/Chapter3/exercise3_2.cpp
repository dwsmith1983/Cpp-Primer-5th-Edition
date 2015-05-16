/* Copyright 2015 <dustin>
 * Write a program to read the standard input a line at a time. Modify your
 * program to read a word at a time.
 */

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
  string line;  // declare line as an empty string type
  // read inputs a line at a time
  cout << "Enter in a string which can be multiple words or just nonsense"
       << endl;
  while (getline(cin, line)) {
    // getline reads a line at a time
    cout << line << endl;
  }
  return 0;
  /*
   * to read a word at a time, write while(cin >> word) where word is declared
   * as a string type.
   */
}

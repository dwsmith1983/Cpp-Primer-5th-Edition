/* Copyright 2015 <dustin>
 * Write a program that reads a string of characters including punctuation and
 * writes what was read but with the punctuation removed.
 */

#include <iostream>
#include <string>
#include <cctype>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::cerr;

int main() {
  string line;                 // initialize line as a string type
  cout << "Enter a string with punctuation:" << endl;  // prompt the user
  getline(cin, line);          // get the whole line including spaces
  if (!line.empty()) {         // execute if the string is not empty
    for (unsigned i = 0; i != line.size(); ++i) {  // loop through line[i]
      if (ispunct(line[i])) {  // if the char is punctuation
        line[i] = {};
      }
    }
    cout << line << endl;      // return the new string
  } else {
    cerr << "The string is empty" << endl;
    return -1;                 // failure
  }
  return 0;
}


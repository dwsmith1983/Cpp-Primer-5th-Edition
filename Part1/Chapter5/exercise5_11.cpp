/* Copyright 2015 <dustin>
 * Modify the vowel-counting program so that it also counts the number of
 * blank spaces, tabs, and newlines read.
 */

#include <iostream>
#include <cctype>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::noskipws;

int main() {
  // initialize counts
  unsigned blankCnt = 0, tabCnt = 0, newCnt = 0;
  cout << "Enter in a text" << endl;
  char sentence;  // initialize sentence as an empty string
  while (cin >> noskipws >> sentence) {
    // do not skip leading white spaces
    switch (sentence) {
      // count blank spaces, tabs, and new line
      case ' ':
        ++blankCnt;
        break;
      case '\t':
        ++tabCnt;
        break;
      case '\n':
        ++newCnt;
        break;
    }
  }
  // print results
  cout << "Number of blank spaces: \t" << blankCnt << '\n'
       << "Number of tabs: \t\t" << tabCnt << '\n'
       << "Number of new lines: \t\t" << newCnt << endl;
  return 0;
}

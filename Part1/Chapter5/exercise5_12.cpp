/* Copyright 2015 <dustin>
 * Modify our vowel counting program so that it counts the number of occurences
 * of the following two-character sequences: ff, fl, and fi.
 */

#include <iostream>
#include <cctype>
#include <string>

using std::cout;
using std::endl;
using std::cin;

int main() {
  // initialize counts
  unsigned ffCnt = 0, flCnt = 0, fiCnt = 0;
  cout << "Enter in a text" << endl;
  char sentence;  // initialize sentence as an empty string
  while (cin >> sentence) {
    // do not skip leading white spaces
    switch (sentence) {
      // count blank spaces, tabs, and new line
      case 'ff':
        ++ffCnt;
        break;
      case 'fl':
        ++flCnt;
        break;
      case 'fi':
        ++fiCnt;
        break;
    }
  }
  // print results
  cout << "Number of ff: \t" << ffCnt << '\n'
       << "Number of fl: \t" << flCnt << '\n'
       << "Number of fi: \t" << fiCnt << endl;
  return 0;
}

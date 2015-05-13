/* Copyright 2015 <dustin>
 * Use range for to change all the characters in a string to X.
 */

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::cerr;
using std::endl;
using std::string;

int main() {
  string line;                        // declare line as an empty string type
  const string X = "X";               // const string for changing line
  cout << "Enter a string:" << endl;  // prompt user to enter a string in
  cin >> line;
  if (!line.empty()) {
    for (auto &c : line) {            // for all char in line
      c = X[0];                       // assign char to X
    }
  } else {
    cerr << "No string entered" << endl;
    return -1;
  }
  // print the changed line
  cout << line << endl;
  return 0;
}


/* Copyright 2015 <dustin>
 * Re-write the program in exercise3_6, first using a while and again using a
 * traditional for loop. Which of the three approaches do you prefer and why?
 * The range for loop is the most intuitive; with the while loop, we need to
 * execute a break to stop the process; and the traditional for loop is a bit
 * clunky and verbose
 */

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::cerr;
using std::endl;
using std::string;

int main() {
  // method one exercise3_6 approach
  string line;                        // declare line as an empty string type
  const string X = "X";               // const string for changing line
  cout << "Enter a string:" << endl;  // prompt user to enter a string in
  cin >> line;
  if (!line.empty()) {
    for (auto &c : line) {            // for all char in line
      c = X[0];                       // assign char to X
    }
  }
  // print the changed line
  cout << line << endl;

  // method 2 while loop
  string line2;
  cout << "Enter a string for the while loop:" << endl;
  // prompt user to enter a string in
  cin >> line2;
  while (!line2.empty()) {
    for (auto &d : line2) {           // for all char in line
      d = X[0];                       // assign char to X
    }
    break;                            // abort the while loop after for
  }
  // print the changed line
  cout << line << endl;

  // method 3 traditional for loop
  string line3;
  cout << "Enter a string for the traditional for loop:" << endl;
  // prompt user to enter a string in
  cin >> line3;
  if (!line3.empty()) {
    for (string::size_type i = 0; i < line3.size(); ++i) {
      line3[i] = X[0];                // assign char to X
    }
  }
  // print the changed line
  cout << line3 << endl;
  return 0;
}

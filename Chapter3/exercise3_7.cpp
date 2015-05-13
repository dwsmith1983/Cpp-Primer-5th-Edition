/* Copyright 2015 <dustin>
 * What would happen if you define the loop control variable in the exercise3_6
 * as type char? Predict the results and then change your program to use a char
 * to see if you were right.
 * The program will run the same. In exercise3_6, we let the compiler decide
 * with auto, but since the input is a string, we know the elements are
 * characters.
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
    for (char &c : line) {            // for all char in line
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

/* Copyright 2015 <dustin>
 * Extend the program that assigned high pass, pass, and fail grades to also
 * assign low pass for grades between 60 and 75 inclusive. Write two versions:
 * One version that uses only conditional operators; the other should use one
 * or more if statements. Which version do you think is easier to understand
 * and why?
 */

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
  cout << "Input numeric, integer grade: " << endl;
  int grade = 0;      // initialize grade as the 0 int
  cin >> grade;
  string finalgrade;  // initialize final grade as an empty string
  // conditional operator method
  finalgrade = (grade > 90) ? "high pass"
               : (grade > 60 && grade < 75) ? "low pass"
               : (grade < 60) ? "fail" : "pass";
  cout << finalgrade << endl;
  // if statements
  if (grade > 90) {
    cout << "high pass" << endl;
  } else if (grade > 60 && grade < 75) {
    cout << "low pass" << endl;
  } else if (grade < 60) {
    cout << "fail" << endl;
  } else {
    cout << "pass" << endl;
  }
  // The if statement construct is much easier to read
  return 0;
}

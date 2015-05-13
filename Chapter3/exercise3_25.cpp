/* Copyright 2015 <dustin>
 * Rewrite the grade clustering program from p. 104 using iterators instead of
 * subscripts.
 */

#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::cerr;

int main() {
  vector<unsigned> scores(11, 0);  // 11 buckets initialized at 0
  unsigned grade = 0;              // initializes grade as 0
  // prompt user fdor grades
  cout << "Enter in students' grades:" << endl;
  while (cin >> grade) {
    if (grade <= 100) {  // make sure grade is in the correct range
      // increment and put grade in correct bin
      ++(*(scores.begin() + grade/10));
    } else {
      cerr << "Invalid grade entered.\n"
          "Grades should be in the range of 0 to 100." << endl;
      return -1;
    }
  }
  cout << "There are ";
  for (auto it = scores.cbegin(); it != scores.cend(); ++it) {
    if (it != scores.cend() - 1) {
      cout << *it << ", ";
    } else {
      cout << *it;
    }
  }
  cout << " grades in each bin, respectively" << endl;
  return 0;
}

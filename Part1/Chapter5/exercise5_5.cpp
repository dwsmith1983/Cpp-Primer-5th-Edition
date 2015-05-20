/* Copyright 2015 <dustin>
 * Using an if-else statement, write your own version of the program to
 * generate the letter grade from a numeric grade.
 */

#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
using std::cerr;

int main() {
  // scores vector
  const vector<string> scores = {"F", "D", "C", "B", "A", "A+"};
  cout << "Enter in students numerical grade: " << endl;
  int grade;
  vector<string> lettergrade;
  // use Control + d to end while input and print letter grades
  while (cin >> grade) {                // as long as a grade is entered
    if (grade < 60 && grade >= 0) {     // failing grades
      lettergrade.push_back(scores[0]);
    } else if (grade <= 100 && grade >= 0) {
      // assign +/- depending on grade
      if (grade != 100) {
        if (grade % 10 > 7) {
          // + for grades ending in 8,9
          lettergrade.push_back((scores[(grade - 50) / 10] + '+'));
        } else if (grade % 10 < 3) {
          // - for grades ending in 0,1,2
          lettergrade.push_back((scores[(grade - 50) / 10] + '-'));
        } else {
          // only the grade if ending in 3,4,5,6,7
          lettergrade.push_back(scores[(grade - 50) / 10]);
        }
      } else if (grade == 100) {
        // ++ for grades of 100
        lettergrade.push_back((scores[(grade - 50) / 10] + '+'));
      }
    } else {
      cerr << "Grade entered was either not an integer or not in the range"
           << " of 0 to 100" << endl;
      return -1;  // failure
    }
  }
  for (auto &i : lettergrade) {
    // print letter grades
    cout << i << endl;
  }
  return 0;
}

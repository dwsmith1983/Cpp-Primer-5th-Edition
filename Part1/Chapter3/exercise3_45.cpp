/* Copyright 2015 <dustin>
 * Rewrite the program again, this time using auto.
 */

#include <iostream>

using std::cout;
using std::endl;
using std::end;

int main() {
  // initializing multidimensional array (array of arrays)
  int ia[3][4] = {
    {0, 1, 2, 3},
    {4, 5, 6, 7},
    {8, 9, 10, 11}
  };
  // range for using auto
  cout << "The elements of the array using range for are: ";
  for (auto &row : ia) {
    for (auto &col : row) {
      cout << col << " ";
    }
  }
  cout << endl;
  // subscripts using auto
  cout << "The elements of the array using subscripts are: ";
  for (auto i = 0; i != 3; ++i) {
    for (auto j = 0; j != 4; ++j) {
      cout << ia[i][j] << " ";
    }
  }
  cout << endl;
  // pointers using auto
  cout << "The elemts of the array using pointers are: ";
  for (auto *p = ia; p != end(ia); ++p) {
    for (auto *q = *p; q != end(*p); ++q) {
      cout << *q << " ";
    }
  }
  cout << endl;
  return 0;
}

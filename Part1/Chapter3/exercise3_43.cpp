/* Copyright 2015 <dustin>
 * Write three different versions of a program to print the elments of ia. One
 * version should use range for to manage the iteraion, the other two should
 * use an ordinary for loop in one case using subscripts and in the other using
 * pointers. In all three programs, write all types directly. That is, do not
 * use a type alias, auto, or decltype to simplify the code.
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
  // range for
  cout << "The elements of the array using range for are: ";
  for (int (&row)[4] : ia) {
    for (int &col : row) {
      cout << col << " ";
    }
  }
  cout << endl;
  // subscripts
  cout << "The elements of the array using subscripts are: ";
  for (size_t i = 0; i != 3; ++i) {
    for (size_t j = 0; j != 4; ++j) {
      cout << ia[i][j] << " ";
    }
  }
  cout << endl;
  // pointers
  cout << "The elemts of the array using pointers are: ";
  for (int (*p)[4] = ia; p != end(ia); ++p) {
    for (int *q = *p; q != end(*p); ++q) {
      cout << *q << " ";
    }
  }
  cout << endl;
  return 0;
}

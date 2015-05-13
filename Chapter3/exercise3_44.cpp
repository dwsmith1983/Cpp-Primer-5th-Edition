/* Copyright 2015 <dustin>
 * Rewrite the program from the previous exercises using a type alias for the
 * type of the loop control variables.
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
  using int_array = int[4];
  typedef int int_array[4];
  // type alias for the type using range for
  cout << "The elements of the array using type alias with range for are: ";
  for (int_array &p : ia) {
    for (int &col : p) {
      cout << col << " ";
    }
  }
  cout << endl;
  // type aliases does not change affect the subscript code
  // type alias for the type using pointers
  cout << "The elemts of the array using type alias with pointers are: ";
  for (int_array *p = ia; p != end(ia); ++p) {
    for (int *q = *p; q != end(*p); ++q) {
      cout << *q << " ";
    }
  }
  cout << endl;
  return 0;
}

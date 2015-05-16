/* Copyright 2015 <dustin>
 * Is the following program legal? If not, how might you fix it?
 * vector<int> ivec;
 * ivec[0] = 42;
 * No the program is not legal. We need to use a push_back or initialize the
 * vector with one element.
 */

#include <vector>
#include <iostream>

using std::vector;
using std::cout;
using std::endl;

int main() {
  // original program option
  vector<int> ivec0;
  // uncomment, compile, and run program to see the problem
  // ivec0[0] = 42;
  // cout << ivec0[0] << endl;
  // option 1 push_back
  vector<int> ivec1;
  ivec1.push_back(42);
  cout << ivec1[0] << endl;
  // option 2
  vector<int> ivec2(1);
  ivec2[0] = 42;
  cout << ivec2[0] << endl;
  return 0;
}


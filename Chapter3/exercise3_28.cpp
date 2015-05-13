/* Copyright 2015 <dustin>
 * What are the values in the following arrays?
 */

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

char sa[10];
/*
 * changed since static/global strings should use C style instead of
 * string sa[10];
 */
int ia[10];

int main() {
  string sa2[10];
  int ia2[10];
  for (auto c : ia2) {
    cout << c << " ";
  }
  cout << endl;
  return 0;
}

/* Copyright 2015 <dustin>
 * Rewrite the program using postfix operators.
 */

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
  vector<int> ivec(5, 0);  // initialize a zero vector of 5 elements
  vector<int>::size_type cnt = ivec.size();
  // prefix version
  // assign values from size to 1 as the elements of ivec
  for (vector<int>::size_type ix = 0; ix != ivec.size(); ++ix, --cnt) {
    ivec[ix] = cnt;
    cout << ivec[ix] << endl;
  }
  cout << endl;
  cnt = ivec.size();  // reset count to 5
  // postfix version
  for (vector<int>::size_type ix = 0; ix != ivec.size(); ix++, cnt--) {
    ivec[ix] = cnt;
    cout << ivec[ix] << endl;
  }
  return 0;
}

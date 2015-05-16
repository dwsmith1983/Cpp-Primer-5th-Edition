/* Copyright 2015 < dustin>
 * What would happen if the while loop on p. 148 that prints the elements from
 * a vector used the prefix increment operator?
 */

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
  // different vectors to try
  vector<int> v = {1, -7, 11};
  // vector<int> v = {1, 7, 11};
  auto pbeg = v.begin();
  // prefix increment
  while (pbeg != v.end() && *pbeg >= 0) {
    cout << *++pbeg << endl;
  }
  return 0;
}

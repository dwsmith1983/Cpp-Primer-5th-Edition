/* Copyright 2015 <dustin>
 * Parenthesize the following expression to show how it is evaluated. Test your
 * answer by compiling the expression (without parentheses) and printing its
 * result.
 * 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2
 */

#include <iostream>

using std::cout;
using std::endl;

int main() {
  // parentheses of order of operation
  cout << ((((12 / 3) * 4) + (5 * 15)) + (24 % (4 / 2))) << endl;
  // compiler order
  cout << 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2 << endl;
  return 0;
}


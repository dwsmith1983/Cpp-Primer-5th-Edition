/* Copyright 2015 <dustin>
 * Write an expression that tests four values a,b,c,d and ensures that a is
 * greater than b, which is greater than c, which is greater than d.
 */

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  int a = 0, b = 0, c = 0, d = 0;
  cout << "Enter in four integers: " << endl;
  cin >> a >> b >> c >> d;
  if (a > b && b > c && c > d) {
    cout << "a > b > c > d as was needed" << endl;
  } else {
    cout << "The integers are not in of the following order: a > b > c > d"
         << endl;
    cout << "This is your second chance" << endl;
    cout << "Re-enter in your four integers: " << endl;
    cin >> a >> b >> c >> d;
    if (a > b && b > c && c > d) {
      cout << "a > b > c > d as was needed" << endl;
    } else {
      cout << "You failed protocol twice, Good Bye" << endl;
      return -1;
    }
  }
  return 0;
}

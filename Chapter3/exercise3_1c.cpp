/* Copyright 2015 <dustin>
 * Rewrite the exercises from p.13 and p.76 with appropriate using declarations
 * Write a program that prompts the user for two integers. Print each number in
 * the range specified by those two integers.
 */

#include <iostream>
#include <string>
#include <sstream>

// using std namespace so std:: is un-necessary
using std::cout;
using std::endl;
using std::cin;
using std::cerr;
using std::string;
using std::istringstream;

int read_inta() {
  // prompt the user for the first integer
  cout << "Enter in first integer:" << endl;
  string a;  // initialize a as an empty string
  cin >> a;
  // create an input stream to read from the string
  istringstream stma(a);
  int agood;
  char abad;
  // check that a is an int and not char
  if ((stma >> agood) && !(stma >> abad)) {
    return agood;
  } else {
    cerr << "Your first character was not an interger" << endl;
  }
  // throw away junk in the input buffer
  cin.ignore(1000, '\n');
  return read_inta();
}

int read_intb() {
  // prompt the user for the second integer
  cout << "Enter in second integer:" << endl;
  string b;  // initialize b as empty string
  cin >> b;
  // create an input stream to read from the string
  istringstream stmb(b);
  int bgood;
  char bbad;
  // check that b is an int and not char
  if ((stmb >> bgood) && !(stmb >> bbad)) {
    return bgood;
  } else {
    cerr << "Your second character was not an interger" << endl;
  }
  // throw away junk in the input buffer
  cin.ignore(1000, '\n');
  return read_intb();
}

int main() {
  int a = read_inta();
  int b = read_intb();
  cout << "The range of integers between " << a << " and " << b
       << " are/is:" << endl;
  // check to determine if a or b is greater
  if (a > b) {  // print the range between (b, a)
    int i = b + 1;
    while (i >= b + 1 && i <= a - 1) {
      if (i != a - 1) {
        cout << i << ", ";
      } else {
        cout << i;
      }
      ++i;
    }
  } else if (b > a) {  // print the range between (a, b)
    int i = a + 1;
    while (i >= a + 1 && i <= b - 1) {
      if (i != b - 1) {
        cout << i << ", ";
      } else {
        cout << i;
      }
      ++i;
    }
  }
  cout << endl;
  return 0;
}

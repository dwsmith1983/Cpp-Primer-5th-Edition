/* Copyright 2015 <dustin>
 * Rewrite the exercises from p.13 and p.76 with appropriate using declarations
 * Write a program that uses a while to sum the numbers from 50 to 100.
 */

#include <iostream>

// using std namespace for cout and endl so std:: is un-necessary
using std::cout;
using std::endl;

int main() {
  int sum = 0, i = 50;  // declare sum,int as int type
  while (i <= 100 && i >= 50) {
    sum += i;           // sum = sum + i
    ++i;                // increment i by one each time throug
  }
  cout << "The sum from 50 to 100 is " << sum << endl;
  return 0;
}


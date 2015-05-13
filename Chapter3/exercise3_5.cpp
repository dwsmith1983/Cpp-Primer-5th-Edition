/* Copyright 2015 <dustin>
 * Write a program to read strings from the standard input, concatenating what
 * is read into one large string. Print the concatenated string. Next change
 * the program to separate adjacent input strings by a space.
 */

#include <iostream>
#include <string>

// using std namespace for string,cout,cin,endl so std:: is un-necessary
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main() {
  string word, total, total2;  // declare word,totals as an empty string type
  cout << "Enter in strings" << endl;
  while (cin >> word) {        // read in the string
    total += word;             // concatenate forming the string total
    cout << "The concatenated string without any space is:" << endl;
    cout << total << endl;
    total2 += word + " ";            // concatenate string
    cout << "The concatenated string with space is:" << endl;
    cout << total2 << endl;
  }
  return 0;
}

/* Copyright 2015 <dutin>
 * Read a sequence of words from cin and store the values in a vector. After
 * you have read all the words, process the vector and change each word to
 * uppercase. Print the transformed elements, eight words to a line.
 */

#include <vector>
#include <iostream>
#include <string>

using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  vector<string> wvec;  // uninitialized string vector
  string word;          // word is initialized as an empty string
  // prompt user to enter in a sequence of words
  cout << "Enter in a sequence of words:" << endl;
  while (cin >> word) {
    for (auto &c : word) {
      c = toupper(c);      // change all letters in the words to uppercase
    }
    wvec.push_back(word);  // append word to wvec
  }
  for (unsigned j = 0; j <= wvec.size()/7; ++j) {  // determine groups of 8
    for (unsigned i = 8 * j; i != wvec.size() && i < 8 * (j + 1); ++i) {
      // output 8 words per line
      cout << wvec[i] << " ";
    }
    cout << " " << endl;
  }
  return 0;
}

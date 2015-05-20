/* Copyright 2015 <dustin>
 * Write a program using a series of if statements to count the number of
 * vowels in text read from cin.
 */

#include <cctype>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::cerr;
using std::string;

int main() {
  cout << "Enter in a sentence which you would like to know the vowel count"
       << endl;
  string sentence;
  // get the enter in string line
  getline(cin, sentence);
  for (auto &c : sentence) {
    // convert all characters to lower for count
    c = tolower(c);
  }
  // initialize counts to int 0
  int cnta = 0, cnte = 0, cnti = 0, cnto = 0, cntu = 0;
  if (!sentence.empty()) {
    // count vowels using if statements
    for (auto i = 0; i != sentence.size(); ++i) {
      if (sentence[i] == 'a') {
        ++cnta;
      } else if (sentence[i] == 'e') {
        ++cnte;
      } else if (sentence[i] == 'i') {
        ++cnti;
      } else if (sentence[i] == 'o') {
        ++cnto;
      } else if (sentence[i] == 'u') {
        ++cntu;
      } else {
        // do nothing
      }
    }
  } else {
    cerr << "String is empty" << endl;
    return -1;
  }
  // print vowel counts
  cout << "Number of a's: \t" << cnta << '\n'
       << "Number of e's: \t" << cnte << '\n'
       << "Number of i's: \t" << cnti << '\n'
       << "Number of o's: \t" << cnto << '\n'
       << "Number of a's: \t" << cntu << endl;
  return 0;
}

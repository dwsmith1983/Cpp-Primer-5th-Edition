/* Copyright 2015 <dustin>
 * There is one problem with our vowel-counting program as we've implemented
 * it: doesn't count capital letters as vowels. Write a program that counts
 * both lower and upper-case letters as the appropriate vowel--that is, your
 * program should count both 'a' and 'A' as part of aCnt, and so forth.
 */

#include <iostream>
#include <cctype>
#include <string>

using std::cout;
using std::endl;
using std::cin;

int main() {
  // initialize counts
  unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
  cout << "Enter in a text" << endl;
  char sentence;  // initialize sentence as an empty string
  while (cin >> sentence) {
    switch (sentence) {
      // count vowels
      // lower case
      case 'a':
        ++aCnt;
        break;
      case 'e':
        ++eCnt;
        break;
      case 'i':
        ++iCnt;
        break;
      case 'o':
        ++oCnt;
        break;
      case 'u':
        ++uCnt;
        break;
      // upper case
      case 'A':
        ++aCnt;
        break;
      case 'E':
        ++eCnt;
        break;
      case 'I':
        ++iCnt;
        break;
      case 'O':
        ++oCnt;
        break;
      case 'U':
        ++uCnt;
        break;
    }
  }
  // print results
  cout << "Number of a's: \t" << aCnt << '\n'
       << "Number of e's: \t" << eCnt << '\n'
       << "Number of i's: \t" << iCnt << '\n'
       << "Number of o's: \t" << oCnt << '\n'
       << "Number of u's: \t" << uCnt << endl;
  return 0;
}

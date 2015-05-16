/* Copyright 2015 <dustin>
 * Revise the loop that printed the first paragraph in text to instead change
 * the elements in text that correspond to the first paragraph to all
 * uppercase. After you have updated text, print its content. (p. 110)
 */

#include <cctype>
#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main() {
  // since we don't have a text file to test, we will use getline to add texts
  vector<string> text;  // initialize and empty string vector
  // prompt the user to enter in sentences to construct atleast two paragraphs
  cout << "Enter in setences for each element of the vector at least two"
          " paragraphs worth:" << endl;
  string sentence;  // initialize sentence as an empty string
  while (getline(cin, sentence)) {
    for (auto it = sentence.begin(); it != sentence.end(); ++it) {
      *it = toupper(*it);      // convert sentences to all uppercase
    }
    text.push_back(sentence);  // append each sentence to the vector
  }
  for (auto it = text.cbegin(); it != text.cend() && !it->empty(); ++it) {
    // print each line in text up to the first blank line (paragraph break)
    cout << *it << endl;
  }
  return 0;
}

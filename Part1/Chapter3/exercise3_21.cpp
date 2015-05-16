/* Copyright 2015 <dustin>
 * Redo the first exercise on p. 105 using iterators.
 */

#include <vector>
#include <string>
#include <iostream>

using std::vector;
using std::string;
using std::cout;
using std::endl;

int main() {
  vector<int> v1;
  // verify our element count
  if (v1.begin() == v1.end()) {
    cout << "if this prints, v1 is empty and has no elements" << endl;
  }
  vector<int> v2(10);
  // verify our element count
  cout << "v2 has " << v2.size() << " elements which are:" << endl;
  for (auto it = v2.cbegin(); it != v2.cend(); ++it) {
    cout << *it << endl;
  }
  vector<int> v3(10, 42);
  // verify our element count
  cout << "v3 has " << v3.size() << " elements which are:" << endl;
  for (auto it = v3.cbegin(); it != v3.cend(); ++it) {
    cout << *it << endl;
  }
  vector<int> v4 {10};
  // verify our element count
  cout << "v4 has " << v4.size() << " elements which is:" << endl;
  for (auto it = v4.cbegin(); it != v4.cend(); ++it) {
    cout << *it << endl;
  }
  vector<int> v5 {10, 42};
  // verify our element count
  cout << "v5 has " << v5.size() << " elements which are:" << endl;
  for (auto it = v5.cbegin(); it != v5.cend(); ++it) {
    cout << *it << endl;
  }
  vector<string> v6 {10};
  // verify our element count
  cout << "v6 has " << v6.size() << " elements of:" << endl;
  for (auto it = v6.cbegin(); it != v6.cend(); ++it) {
    cout << *it << endl;
  }
  vector<string> v7 {10, "hi"};
  // verify our element count
  cout << "v7 has " << v7.size() << " elements which are:" << endl;
  for (auto it = v7.cbegin(); it != v7.cend(); ++it) {
    cout << *it << endl;
  }
  return 0;
}

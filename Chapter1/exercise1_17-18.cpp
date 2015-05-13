/* Copyright 2015 <dustin>
 * What happens in the program presented in this section if the input values
 * are all equal? What if there are no no duplicate values?
 * If they are all equal, the output will say value occurs x times.
 * If there are no duplicates, it will say x_1 occurs 1 time, x_2 occurs 1 time
 * and so on until all values are accounted for.
 */

#include <iostream>

int main() {
  // i is the number we are counting; we will read new values into j
  int i = 0, j = 0;
  // prompt the user for integer values
  std::cout << "Enter a set integer values and press C-d to count"
            << std::endl;
  // read first number and ensure that we have data to process
  if (std::cin >> i) {
    int cnt = 1;  // store the count for the current value we are processing
    while (std::cin >> j) {  // read the remaing numbers
      if (j == i) {          // if the values are the same
        ++cnt;               // add 1 to cnt
      } else {               // otherwise print count for previous value
        std::cout << i << " occurs " << cnt << " times" << std::endl;
        i = j;               // remember the new value
        cnt = 1;             // reset the counter
      }
    }  // while ends here
    // remember to print the count for the last value in the file
    std::cout << i << " occurs " << cnt << " times" << std::endl;
  }  // outermost if statements ends here
  return 0;
}

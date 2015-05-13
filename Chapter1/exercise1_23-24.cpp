/* Copyright 2015 <dustin>
 * Write a program that reads several transactions and counts how many
 * transcations occur for each ISBN.
 */

#include <iostream>
#include "../IncC++files/1/Sales_item.h"

int main() {
  Sales_item itemi, itemj;  // define the object as itemi,j
  std::cout << "Enter ISBN, quantity, and price" << std::endl;
  if (std::cin >> itemi) {
    int cnt = 1;  // store the count for the current value we are processing
    while (std::cin >> itemj) {  // read the remaining items
      if (itemi.same_isbn(itemj)) {
        ++cnt;
      } else {
        std::cout << itemi.isbn << " occurs " << cnt << " times"
                  << std::endl;
        itemi = itemj;  // remember the new item
        cnt = 1;        // reset the counter
      }
    }  // while ends here
    // print the count of the last item
    std::cout << itemi.isbn << " occurs " << cnt << " times" << std::endl;
  }
  return 0;
}
// how to get the program to say item x occurs cnt times?

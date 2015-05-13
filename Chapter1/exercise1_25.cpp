/* Copyright 2015 <dustin>
 * Compile and execute the bookstore program in this section.
 */

#include <iostream>
#include "../IncC++files/1/Sales_item.h"

int main() {
  Sales_item total;  // variable to hold data for the next transactions
  // read first transcation and ensure that there are data to process
  std::cout << "Enter ISBN, quantity, and price" << std::endl;
  if (std::cin >> total) {
    Sales_item trans;  // variable to hold running sum
    // read and process the remaining transactions
    while (std::cin >> trans) {
      // if we are processing the same book
      if (total.same_isbn(trans)) {
        total += trans;  // update the running total
      } else {
        // print results for the previous book
        std::cout << total << std::endl;
        total = trans;  // total now refers to the new book
      }
    }
    std::cout << total << std::endl;  // print the last transaction
  } else {
    // no input warn the user
    std::cerr << "No data?!" << std::endl;
    return -1;  // failure
  }
  return 0;
}


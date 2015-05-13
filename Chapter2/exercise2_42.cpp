/* Copyright 2015 <dustin>
 * Compile and execute the bookstore program using our own header
 */

#include <iostream>
#include <string>
#include "Sales_data.h"

int main() {
  Sales_data total;  // declare total as a Sales_data type
  // Prompt the user to input sales data
  std::cout << "Enter ISBN, units sold, and price for the books sold"
            << std::endl;
  if (std::cin >> total) {
    Sales_data trans;  // Sales_data type to hold running total
    // process the remaining transactions
    while (std::cin >> trans) {
      // if we are still processing the same book
      if (total.bookNo == trans.bookNo) {
        total = total + trans;  // update the running total
      } else {
        // print results for the previous book
        std::cout << "The total is " << total << std::endl;
        total = trans;  // total is now the next book
      }
    }
    std::cout << "The total is " << total << std::endl;
  } else {
    std::cerr << "No data entered?!" << std::endl;
    return -1;  // failure
  }
  return 0;
}

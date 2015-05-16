/* Copyright 2015 <dustin>
 * Use your Sales_data class to rewrite exercises on pg. 22
 */

#include <iostream>
#include <string>

// Sales_data structure
struct Sales_data {
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
};

// logic to determine if sales data are not equal
bool operator!=(const Sales_data& data1, const Sales_data& data2) {
  // boolen comparision to produce not equal
  return data1.bookNo != data2.bookNo;
}

std::ostream& operator<< (std::ostream &out, const Sales_data &cSales_data) {
  /*
   * Since operator<< is a friend of the Sales_data struct, we can access
   * Sales_data members directly
   */
  out  << cSales_data.bookNo << " " << cSales_data.units_sold
      << " " << cSales_data.revenue;
  return out;
}

int main() {
  /*
   * Write a program that reads a set of book sales transactions, writing
   * each transaction to the standard output.
   */
  Sales_data books;  // books is of type sales_data uninitialized
  double price = 0;  // price is of int type initialized at 0
  std::cout << "Enter a list of books starting with ISBN, copies sold, and "
      "price" << std::endl;
  for (int i = 0; i >= 0; ++i) {
    // The for loop keeps track and counts the books
    while (std::cin >> books.bookNo >> books.units_sold >> price) {
      /*
       * while loop to allow the user to input as many books as they would
       * like
       */
      if (books != Sales_data()) {
        // if books is not empty print which number book for i
        i += 1;
        std::cout << "Book " << i << " is " << books << std::endl;
      }
    }
  }
  return 0;
}

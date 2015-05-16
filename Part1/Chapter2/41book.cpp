/* Copyright 2015 <dustin>
 * Using Sales_data class in the book problem
 */

#include <iostream>
#include <string>

// Sales_data class
struct Sales_data {
  // empty bracket initializes to empty string
  std:: string bookNo{};
  unsigned units_sold = 0;
  double revenue = 0.0;
};

// main function
int main() {
  Sales_data data1, data2;  // uninitalized data1,data2 of type sales_data
  double price = 0;         // iniatilizing prince as 0 of type double
  // read in ISBN, number sold, and price
  std::cout << "Enter in ISBN, units sold, and price" << std::endl;
  std::cin >> data1.bookNo >> data1.units_sold >> price;
  std::cin >> data2.bookNo >> data2.units_sold >> price;
  // calculate the revenue datax.units_sold * price
  data1.revenue = data1.units_sold * price;  // entry one
  data2.revenue = data2.units_sold * price;  // entry two
  if (data1.bookNo == data2.bookNo) {
    // total units sold
    unsigned totalCnt = data1.units_sold + data2.units_sold;
    double totalRevenue = data1.revenue + data2.revenue;
    // print total sold, total revenue, and avg book price
    std::cout << data1.bookNo << " " << totalCnt << " " << totalRevenue << " ";
    if (totalCnt != 0) {
      std::cout << totalRevenue/totalCnt << std::endl;
    } else {
      std::cout << "no sales" << std::endl;
    }
    return 0;  // indicates success
  } else {
    // books didn't have the same ISBN
    std::cerr << "Data must refer to the same ISBN" << std::endl;
  }
  return -1;   // indicates failure
}


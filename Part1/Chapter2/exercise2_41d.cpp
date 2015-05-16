/* Copyright 2015 <dustin>
 * Write a program that reads several transactions and counts how many occur
 * for each ISBN.
 * This program also solves 1.24 as well.
 */

#include <iostream>
#include <string>

// Sales_data struct
struct Sales_data {
  std::string bookNo;
  unsigned units_sold = 0;
  double price = 0.0;
};

// overload I/O stream
std::ostream& operator << (std::ostream& out, const Sales_data& cSales_data) {
  out << cSales_data.bookNo << ", " << cSales_data.units_sold << ", "
      << cSales_data.price;
  return out;
}

std::istream& operator >> (std::istream& in, Sales_data& cSales_data) {
  in >> cSales_data.bookNo >> cSales_data.units_sold >> cSales_data.price;
  return in;
}

// overload boolen operator ==
bool operator == (const Sales_data& data1, const Sales_data& data2) {
  return data1.bookNo == data2.bookNo;
}

int main() {
  Sales_data itemi, itemj;  // declare itemi,itemj as type Sales_data
  // prompt user for data
  std::cout << "Enter ISBN, number of units sold, and price" << std::endl;
  if (std::cin >> itemi) {
    int cnt = 1;  // store the count for the current value we are processing
    while (std::cin >> itemj) {  // read the remaining items
      if (itemi.bookNo == itemj.bookNo) {
        ++cnt;
      } else {
        std::cout << itemi.bookNo << " occurs " << cnt << " times"
                  << std::endl;
        itemi = itemj;  // reset itemj to itemi for next iteration
        cnt = 1;        // reset the counter
      }
    }
    // print the count of the last item
    std::cout << itemj.bookNo << " occurs " << cnt << " times" << std::endl;
  }
  return 0;
}

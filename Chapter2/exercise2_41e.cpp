/* Copyright 2015 <dustin>
 * Compile and execute the bookstore program
 */

#include <iostream>
#include <string>

struct Sales_data {
  std::string bookNo;
  unsigned units_sold = 0;
  double price = 0.0;
  // member function for addition rules
  Sales_data operator + (const Sales_data& data);
};

// overload the boolen operator ==
bool operator == (const Sales_data& data1, const Sales_data& data2) {
  return data1.bookNo == data2.bookNo;
}

// overload the + operator
Sales_data Sales_data::operator + (const Sales_data& data3) {
  units_sold += data3.units_sold;
  price += data3.units_sold;
  return *this;
}

// overload I/O operators
std::istream& operator >> (std::istream& in, Sales_data& cSales_data) {
  in >> cSales_data.bookNo >> cSales_data.units_sold >> cSales_data.price;
  return in;
}

std::ostream& operator << (std::ostream& out, const Sales_data& cSales_data) {
  out << cSales_data.bookNo << ", " << cSales_data.units_sold << ", "
      << cSales_data.price;
  return out;
}

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

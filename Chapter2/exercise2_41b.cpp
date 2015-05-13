/* Copyright 2015 <dustin>
 * Write a program that reads two Sales_data objects that have the same ISBN
 * and produces their sum.
 */

#include <iostream>
#include <string>

// Sales_data structure
struct Sales_data {
  std:: string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
  // member function for addition operator rules
  Sales_data operator + (const Sales_data & data);
};

// logic to determine if sales data have the same ISBN
bool operator == (const Sales_data & data1, const Sales_data & data2) {
  // boolen comparision to produce equal
  return data1.bookNo == data2.bookNo;
}

// addition operator rules
Sales_data Sales_data::operator + (const Sales_data & data2) {
  units_sold += data2.units_sold;
  revenue += data2.revenue;
  return *this;
}

// overload ostream in order for cout to work
std::ostream& operator << (std::ostream & out,
                           const Sales_data & cSales_data) {
  /*
   * Since operator<< is a friend of the Sales_data struct, we can access
   * Sales_data members directly
   */
  out << cSales_data.bookNo << ", " << cSales_data.units_sold << ", "
      << cSales_data.revenue;
  return out;
}

// overload istream in order for cin to work
std::istream& operator >> (std::istream & in, Sales_data & cSales_data) {
  in >> cSales_data.bookNo >> cSales_data.units_sold >> cSales_data.revenue;
  return in;
}

int main() {
  Sales_data item1, item2, total;  // declare item1,item2 as a Sales_data type
  // ask users to enter in sales data
  std::cout << "Add books with the same ISBN, units sold, and price"
            << std::endl;
  std::cin >> item1 >> item2;
  if (item1.bookNo == item2.bookNo) {
    // add the books if they have the same ISBN
    total = item1 + item2;
    std::cout << total << std::endl;
  } else {
    // Error message if ISBNs are not the same
    std::cerr << "The books don't have the same ISBN" << std::endl;
  }
  return 0;
}

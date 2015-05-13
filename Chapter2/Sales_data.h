/* Copyright 2015 <dustin>
 * Write your own version of the Sales_data class.
 */

#ifndef _SALES_DATA_H_
#define _SALES_DATA_H_

#include <string>
#include <iostream>

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
  price += data3.price;
  return *this;
}

// overload the I/O operators
std::istream& operator >> (std::istream& in, Sales_data& cSales_data) {
  in >> cSales_data.bookNo >> cSales_data.units_sold >> cSales_data.price;
  return in;
}

std::ostream& operator << (std::ostream& out, const Sales_data& cSales_data) {
  out << cSales_data.bookNo << ", " << cSales_data.units_sold << ", "
      << cSales_data.price;
  return out;
}

#endif  // _SALES_DATA_H_

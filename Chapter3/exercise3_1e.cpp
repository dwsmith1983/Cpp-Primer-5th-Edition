/* Copyright 2015 <dustin>
 * Rewrite the exercises from p.13 and p.76 with appropriate using declarations
 * Write a program that reads two Sales_data objects that have the same ISBN
 * and produces their sum.
 */

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::ostream;
using std::istream;
using std::cerr;

// Sales_data structure
struct Sales_data {
  string bookNo;
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
ostream& operator << (ostream & out, const Sales_data & cSales_data) {
  out << cSales_data.bookNo << ", " << cSales_data.units_sold << ", "
      << cSales_data.revenue;
  return out;
}

// overload istream in order for cin to work
istream& operator >> (istream & in, Sales_data & cSales_data) {
  in >> cSales_data.bookNo >> cSales_data.units_sold >> cSales_data.revenue;
  return in;
}

int main() {
  Sales_data item1, item2, total;  // declare item1,item2 as a Sales_data type
  // ask users to enter in sales data
  cout << "Add books with the same ISBN, units sold, and price" << endl;
  cin >> item1 >> item2;
  if (item1.bookNo == item2.bookNo) {
    // add the books if they have the same ISBN
    total = item1 + item2;
    cout << total << endl;
  } else {
    // Error message if ISBNs are not the same
    cerr << "The books don't have the same ISBN" << endl;
    return -1;
  }
  return 0;
}

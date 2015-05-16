/* Copyright 2015 <dustin>
 * Rewrite the exercises from p.13 and p.76 with appropriate using declarations
 * Write a program that reads several transactions for the same ISBN. Wrie the
 * sum of all the transaction that were read.
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
  Sales_data operator + (const Sales_data& data);
};

// + operator rules
Sales_data Sales_data::operator + (const Sales_data& data2) {
  // if (bookNo != data2.bookNo) {
  //  std::cerr << "Books must have the same ISBNs" << std::endl;
  // }
  units_sold += data2.units_sold;
  revenue += data2.revenue;
  return *this;
}

// overload ostream in order for cout to work
ostream& operator << (ostream& out, const Sales_data& cSales_data) {
  /*
   * Since operator<< is a member of the Sales_data struct, we can access
   * Sales_data
   */
  out << cSales_data.bookNo << ", " << cSales_data.units_sold << ", "
      << cSales_data.revenue;
  return out;
}

// overload istream in order for cin to work
istream& operator >> (istream& in, Sales_data& cSales_data) {
  in >> cSales_data.bookNo >> cSales_data.units_sold >> cSales_data.revenue;
  return in;
}

int main() {
  Sales_data item, total;  // declare item,total as a Sales_data type
  // prompt the user for the information to enter
  cout << "Enter ISBN, units sold, and revenue:" << endl;
  while (cin >> item) {
    // allow the user to enter in as many items as they deem necessary
    /*
     * I need to figure out how to check for the same ISBNs and when
     * item.bookNo != item.bookNo cerr << "ISBNs need to be the same"
     */
    total = total + item;  // add each new item to the total
  }
  cout << "The total units sold and revenue is " << item.bookNo << total
       << endl;
  return 0;
}

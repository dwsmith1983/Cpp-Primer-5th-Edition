/* Copyright 2015 <dustin>
 * Write a program that reads several transactions for the same ISBN. Wrie the
 * sum of all the transaction that were read.
 */

#include <iostream>
#include <string>

// Sales_data structure
struct Sales_data {
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
  // member function for addition operator rules
  Sales_data operator + (const Sales_data& data);
};

// logic to determine if sales data have the same ISBN
// bool operator == (const Sales_data& data1, const Sales_data& data2) {
  // boolen comparision to produce equal
//  return data1.bookNo == data2.bookNo;
// }

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
std::ostream& operator << (std::ostream& out, const Sales_data& cSales_data) {
  /*
   * Since operator<< is a member of the Sales_data struct, we can access
   * Sales_data
   */
  out << cSales_data.bookNo << ", " << cSales_data.units_sold << ", "
      << cSales_data.revenue;
  return out;
}

// overload istream in order for cin to work
std::istream& operator >> (std::istream& in, Sales_data& cSales_data) {
  in >> cSales_data.bookNo >> cSales_data.units_sold >> cSales_data.revenue;
  return in;
}

int main() {
  Sales_data item, total;  // declare item,total as a Sales_data type
  // prompt the user for the information to enter
  std::cout << "Enter ISBN, units sold, and revenue:" << std::endl;
  while (std::cin >> item) {
    // allow the user to enter in as many items as they deem necessary
    /*
     * I need to figure out how to check for the same ISBNs and when
     * item.bookNo != item.bookNo cerr << "ISBNs need to be the same"
     */
    total = total + item;  // add each new item to the total
  }
  std::cout << "The total units sold and revenue is " << item.bookNo
            << total << std::endl;
  return 0;
}

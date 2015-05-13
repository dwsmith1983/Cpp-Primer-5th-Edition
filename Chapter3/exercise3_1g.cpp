/* Copyright 2015 <dustin>
 * Rewrite the exercises from p.13 and p.76 with appropriate using declarations
 * Write a program that reads several transactions and counts how many occur
 * for each ISBN.
 * This program also solves 1.24 as well.
 */

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::ostream;
using std::istream;

// Sales_data struct
struct Sales_data {
  string bookNo;
  unsigned units_sold = 0;
  double price = 0.0;
};

// overload I/O stream
ostream& operator << (ostream& out, const Sales_data& cSales_data) {
  out << cSales_data.bookNo << ", " << cSales_data.units_sold << ", "
      << cSales_data.price;
  return out;
}

istream& operator >> (istream& in, Sales_data& cSales_data) {
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
  cout << "Enter ISBN, number of units sold, and price" << endl;
  if (cin >> itemi) {
    int cnt = 1;  // store the count for the current value we are processing
    while (cin >> itemj) {  // read the remaining items
      if (itemi.bookNo == itemj.bookNo) {
        ++cnt;          // increase by one
      } else {
        cout << itemi.bookNo << " occurs " << cnt << " times" << endl;
        itemi = itemj;  // reset itemj to itemi for next iteration
        cnt = 1;        // reset the counter
      }
    }
    // print the count of the last item
    cout << itemj.bookNo << " occurs " << cnt << " times" << endl;
  }
  return 0;
}

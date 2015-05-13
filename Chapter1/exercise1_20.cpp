/* Copyright 2015 <dustin>
 * http://www.informit.com/title/0321714113 contains a copy of Sales_item.h
 * in the chapter 1 code directory. Copy that file to your pwd. Use it to
 * wrtie a program that reads a set of book sales transactions, writing each
 * transaction to the standard output.
 */

#include <iostream>
#include <string>
#include "../IncC++files/1/Sales_item.h"

int main() {
  Sales_item item;  // call the item argument in Sales_item.h
  // prompt the user for the desired information to enter
  // std::string is used for long strings that run to multiple lines
  std::string my_phrase = "Input ISBN, number of copies sold, and"
                          " price sold and when complete enter C-c";
  std::cout << my_phrase << std::endl;
  /*
   * defined while to allow users to continually enter in items until stopped
   * by C-c
   */
  for (int i = 0; i >= 0; ++i) {  // index the item number for the count
    while (std::cin >> item) {
      if (item != Sales_item()) {
        // if item is not empty add one for the next item number
        i += 1;
        std::cout << "\t" << " " << " " << "\tISBN,\t\t# sold, price,"
            "  avg price" << std::endl;
        std::cout << "Item " << i << " is " << item << std::endl;
      }
    }
  }
  return 0;
}

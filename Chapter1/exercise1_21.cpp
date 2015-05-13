/* Copyright 2015 <dustin>
 * http://www.informit.com/title/0321714113 contains a copy of Sales_item.h
 * in the chapter 1 code directory. Copy that file to your pwd. Use it to
 * wrtie a program that reads two Sales_item objects that have the same ISBN
 * and produces their sum.
 */

#include <iostream>
#include <string>
#include "../IncC++files/1/Sales_item.h"

int main() {
  Sales_item item1, item2;  // call the item argument in Sales_item.h
  // prompt the user for the desired information to enter
  // std::string is used for long strings that run to multiple lines
  std::string my_phrase = "Input ISBN, number of copies sold, and"
                          " price sold for two items with the same ISBN";
  std::cout << my_phrase << std::endl;
  std::cin >> item1 >> item2;  // read in transactions
  std::cout << item1 + item2 << std::endl;  // add and print their sum
  return 0;
}

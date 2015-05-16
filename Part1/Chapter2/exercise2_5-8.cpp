/* Copyright 2015 <dustin>
 * Determine the type of each of the following literals. Explain the
 * differences among the literals in each of the four examples:
 * (a) 'a', L'a', "a", L"a"
 * 'a' is a character literal that represents the single character a
 * L'a' L specifies a wide character so L'a' is a wide character literal that
 * represents the single wide character a
 * "a" is a string literal; the compiler appends the null character '\0' to
 * every string literal so "a" represents the characters a\0
 * L"a" is the wide string literal
 * (b) 10, 10u, 10L, 10uL, 012, 0xC
 * 10 is an int type
 * 10u is an unsigned int type
 * 10L is a long type
 * 10uL is an unsigned long type
 * 012 is an octal literal
 * 0xC is hexadecimal
 * (c) 3.14, 3.14f, 3.14L
 * 3.14 is a decimal type
 * 3.14f is a float type
 * 3.14L is a long double type
 * (d) 10, 10u, 10., 10e-2
 * 10 is an int type
 * 10u is an unsigned int type
 * 10. is a decimal type
 * 10e-2 is a decimal type
 * What, if any, are the differences between the following definitions:
 * int month = 9, day = 7;
 * int month = 09, day = 07;
 * The second definition 09 and 07 are octal type whereas 9 and 7 are int
 * What values do these literals represent? What type does each have?
 * (a) "Who goes with F\145rgus?\012" 
 * (b) 3.14e1L
 * (c) 1024f
 * (d) 3.14L
 * Who goes with Fergus? is a string literal \145 = e \012 = \n
 * 3.14e1L float long double
 * 1024f float
 * 3.14L float long double
 */

#include <iostream>

int main() {
  std::cout << "Who goes with F\145rgus?\012" << std::endl;
  std::cout << "2\x4d\n" << std::endl;
  std::cout << "2\t\115\n" << std::endl;
  return 0;
}

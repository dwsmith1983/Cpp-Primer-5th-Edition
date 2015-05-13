/* Copyright 2015 <dustin>
 * Is the following code legal or not? If not, how might you make it legal?
 * int null = 0, *p = null;
 * Illegal, to make it legal we should point to the reference of null
 * *p = &null
 */

int main() {
  int null = 0, *p = &null;
  return 0;
}

/* Copyright 2015 <dustin>
 * Compile the program on page 10 with incorrectly
 * nested comments
 */

/* comment paris /*    */ cannot nest
* "cannot nest" is considered source code,
  * as is the rest of this program
    */

int main() {
  return 0;
}

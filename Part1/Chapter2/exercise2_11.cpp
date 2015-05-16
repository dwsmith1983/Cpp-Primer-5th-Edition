/* Copyright 2015 <dustin>
 * Explain whether each of the following is a declaration or a definition:
 * (a) extern int ix = 1024;
 * definition since = 1024 overrides the extern
 * (b) int iy;
 * definition
 * (c) extern int iz;
 * declaration since iz is not being defined.
 */

int main() {
  extern int ix = 1024;
  int iy;
  extern int iz;
  return 0;
}

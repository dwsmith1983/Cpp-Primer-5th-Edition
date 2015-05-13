/* Copyright 2015d <dustin>
 * Explain the following definitions. Identify any that are illegal.
 * (a) int i, *const cp;
 * Set i and the constant pointer cp as int. Illegal, int *const cp is
 * uninitialized
 * (b) int *p1, *const p2;
 * Set pointer p1 and constant pointer p2 as int. Illegal uninitialized again
 * (c) const int ic, &r = ic;
 * ic is a constant int and r references ic. Illegal uninitialized.
 * (d) const int *const p3;
 * p3 is a constant pointer to a constant. Illegal uninitialized.
 * (e) const int *p;
 * constant integer pointer initialized as the null pointer. Legal.
 */

int main() {
  // int i, *const cp;
  // int *pl, *const p2;
  // const int ic, &r = ic;
  // const int *const p3;
  const int *p;
  return 0;
}


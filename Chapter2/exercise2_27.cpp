/* Copyright 2015 <dustin>
 * Which of the following initializations are legal? Explain why.
 * (a) int i = -1, &r = 0;
 * Illegal for int &r = 0; a reference bounds to a definition like
 * int y = 0, &r = y;
 * (b) int *const p2 = &i2;
 * Illegal unless i2 is declared as an int.
 * (c) const int i = -1, &r = 0;
 * Legal since r is reference to a const int
 * (d) const int *const p3 = &i2;
 * Illegal unless i2 is declared; then we have that p3 is a const pointer to a
 * const object
 * (e) const int *p1 = &i2;
 * Illegal unless i2 is declared; then p1 is an int pointer to a constant obj
 * (f) const int &const r2;
 * Illegal, const qualifiers cannot be applied to const references
 * (g) const int i2 = i, &r = i;
 * Illegal unless i is declared as an int
 */

int main() {
  int i = -1, &r = i;
  int i2 = 0;
  int *const p2 = &i2;
  const int j = -1, &m = 0;
  int i3 = 4;
  const int *const p3 = &i3;
  int i4 = 5;
  const int *p1 = &i4;
  // const int &const r2;
  int k = 1;
  const int i5 = k, &r3 = k;
  return 0;
}

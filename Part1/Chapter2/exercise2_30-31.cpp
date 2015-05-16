/* Copyright 2015 <dustin>
 * For each of the following declarations indicate whether the object being
 * declared has top-level or low-level const.
 * const int v2 = 0;         int v1 = v2;
 * int *p1 = &v1, &r1 = v1;
 * const int *p2 = &v2, *const p3 = &i, &r2 = v2;
 * Given the declarations in the above, determine whether the following
 * assignment are legal. Explain how the top-level or low-level const applies
 * in each case.
 * r1 = v2;
 * p1 = p2;     p2 = p1;
 * p1 = p3;     p2 = p3;
 */

int main() {
  const int v2 = 0;         // top level const, we cant change v2
  int v1 = v2;              // low level, we can change v1
  int *p1 = &v1, &r1 = v1;  // p1 is top level, ref type, &r1 is always low
  int i = 0;  // declaring i; otherwise, there will be issues
  const int *p2 = &v2, *const p3 = &i, &r2 = v2;
  // p2 is low level, p3 is top level, &r2 low level
  r1 = v1;                  // legal both low level
  // p1 = p2;                  // illegal p1 top level and p2 low level
  p2 = p1;                  // legal pointed-to types match
  // p1 = p3;                  // illegal p1 top level and p2 low level
  p2 = p3;                  // legal pointed-to types match
  return 0;
}

/* Copyright 2015 <dustin>
 * Which of the following are legal? For those that are illegal, explian why.
 * (a) const int buf;
 * Illegal, buf is uninitialized
 * (b) int cnt = 0;
 * Legal initializing int cnt to zero.
 * (c) const int sz = cnt;
 * Legal if int cnt was previously defined.
 * (d) ++cnt; ++sz;
 * ++cnt is legal if it is defined as (b) or a positive number
 * ++sz is illegal since sz is read only
 */

int main() {
  // const int buf;
  int cnt = 0;
  const int sz = cnt;
  ++cnt;
  ++sz;
  return 0;
}

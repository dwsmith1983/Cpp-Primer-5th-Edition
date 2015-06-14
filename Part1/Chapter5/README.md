# Chapter 5 Statements

Here you will find the solutions to problems that don't require any programming in Chapter 5. However, I may provide example code to test my assertion.

#### 5.1: What is a null statement? When might you use a null statement?
A null statement is an empty statement; that is, the statement doesn't cause
the program to do anything.
When the language requires a statement but the program's logical doesn't, we
use a null statement.
For instance, in loop blocks, when the work can be done in the condition.

#### 5.2: What is a block? When might you need to use a block?
A block is a compound statement.
In loops, when the work cannot be done solely in the condition, we will need a
block to hold the compound statements needed for the loops condition and
program logic.

#### 5.4: Explain each of the following examples, and correct any problems you detect.
- `while (string::iterator iter != s.end()) {/* ... */}`
- `while (bool status = find(word)) {/* ... */} if (!status) {/* ... */}`

`status` needs to be defined outside of the loop.

#### 5.7: Correct the errors in each of the following code fragments:
```c++
// (a)
if (ival1 != ival2) {
  ival1 = ival2;
} else {
  ival1 = ival2 = 0;
}
// (b)
if (ival < minval) {
  minval = ival;
  occurs = 1;
}
// (c)
if (int ival = get_value()) {
  cout << "ival = " << ival << endl;
} else if (!ival) {
  cout << "ival = 0" << endl;  // doesn't matter if we use \n instead
}
// (d)
if (ival == 0) {
  ival = get_value();
}
```

#### 5.8: What is a "dangling else"? How are else clauses resolved in C++?
With nested `if`, we can run into the problem of having more `if`s then
`else`s.
The question then becomes "How do we know to which `if` a given `else`
belongs?"
This is referred to as the dangling else problem.
`else` clauses are matched with the closet preceding unmatched `if` unles `{}`
are begin used.

#### 5.13: Each of the programs in the highlighted text on p.184 contains a common programming error. Identify and correct each error.
```c++
// (a)
unsigned aCnt = 0, eCnt = 0, iouCnt = 0;
char ch = next_text();
switch (ch) {
  case 'a': aCnt++;
  case 'e': eCnt++;
  default: iouCnt++;
}
/*
 * In this program, each case should we written as:
 * case 'a':
 *   ++aCnt;
 *   break;
 * case 'e':
 *   ++eCnt;
 *   break;
 * default:
 *   ++iouCnt;
 *   break;
 */
// (b)
unsigned index = some_value();
switch (index) {
  case 1:
    int ix = get_value();
	ivec[ix] = index;
	break;
  default:
    ix = ivec.size() - 1;
	ivec[ix] = index;
}
/*
 * In this program, for case 1, we need ix <= ivec.size() - 1
 * case 1:
 *  if (int ix = get_value(); ix <= ivec.size() - 1) {
 *	  ivec[ix] = index;
 *  } else {
 *    cout << "ix is not in the vectors index range" << endl;
 *  }
 *	break;
 */
```

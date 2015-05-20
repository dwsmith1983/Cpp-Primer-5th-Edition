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

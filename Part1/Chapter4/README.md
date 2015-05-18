# Chapter 4 Expressions

Here you will find the solutions to problems that don't require any programming
in Chapter 4.
However, I may provide example code to test my assertion.

#### 4.1: What is the value returned by `5 + 10 * 20 / 2`?
By using PEMDAS, which is the order of operations of parentheses, exponents,
multiplication/division, and addtion/subtraction, we obtain
```latex
5 + 10 * 20 / 2 = 5 + 10 * 10 = 105
```

#### 4.2: Using Table 4.12 (p. 166), parenthesize the following expressions to indicate the order in which the operands are grouped:
- `* vec.begin()`
`*(vec.begin())`

- `* vec.begin() - 1`
`*(vec.begin()) - 1`

#### 4.3: Order of evaluation for most of the binary operators is left undefined to give the compiler opportunities for optimization. This strategy presents a trade-off between efficient code generation and potential pitfalls in the use of the language by the programmer. Do you consider that an acceptable trade-off? Why or why not?
Yes this is an acceptable trade-off.
By leaving the order undefined, it forces the programmers to be cognizant of
what code they are writting and the behavior they would like.
I believe this will make the programmers detailed oriented, precise, and careful with their code.
If all the behaviors were defined, we would lose some freedoms and become careless with our code since the compiler will handle it.

#### 4.5: Determine the results of the following expressions.
See [exercise4_5.cpp](https://github.com/dwsmith1983/Cpp-Primer/blob/master/Chapter4/exercise4_5.cpp) for `C++` calculations.

- `-30 * 3 + 21 / 5 = -86`
- `-30 + 3 * 21 / 5 = -18`
- `30 / 3 * 21 % 5 = 0`
- `-30 / 3 * 21 % 4 = -2`

#### 4.7: What does overflow mean? Show three expressions that will overflow.

When a result is greater in magnitude than location can store.
See [exercise4_7.cpp](https://github.com/dwsmith1983/Cpp-Primer-5th-Edition/blob/master/Chapter4/exercise4_7.cpp) for three expressions that will overflow.

#### 4.8: Explain when operands are evaluated in the logical AND, logical OR, and equality operators.
With `&&`, the right hand side is only evaluated if the left hand side is true.
If both the left and right hand are true in `&&`, then the result is true.
With `||`, the right hand side is only evaluated if the left hand side is
false.
If either the left or right hand are true in `||`, then the result is true.
With `==`, the result is true if and only if the right and left hand sides are
the same.

#### 4.9: Explain the behavior of the condition in the following `if`:
```c++
const char *cp = "Hello World";
if (cp && *cp)
```
`cp` is a pointer so it is a memory location not equal to zero so `cp` is true,
and `*cp` dereferences to `H` which not zero so this is also true.
Thus, we have `true && true` which evaluates to true.

#### 4.12: Assuming i,j,k are all ints, explain what `i != j < k` means.
If `i` is zero, the left hand side is false and true otherwise.
If `j < k`, the right hand side is true and false otherwise.
If `i = 0` and `j < k`, we have `true != true` which false.
If `i = 0` and `j > k`, we have `true != false` which is true.
If `i` is not zero and `j < k`, we have `false != true` which is true.
If `i` is not zero and `j > k`, we have `false != false` which is false.

#### 4.13: What are the values of `i` and `d` after each assignment?
```c++
int i;
double d;
```
- `d = i = 3.5`
Since `i` is an `int`, we have `i = 3.5 = 3` so `d = 3`.

- `i = d = 3.5`
Since `d` is a `double`, `d = 3.5` and `i = 3.5 = 3`

#### 4.14: Explain what happens in each of the if tests:
```c++
if (42 = i) {/* ... */}
if (i = 42) {/* ... */}
```
For the first statement, the program will error since we need a lvalue as the
left hand operand.
For the second statement, `i` is not equal to zero so the if statement is true
and will execute the code block.

#### 4.15: The following assigment is illegal. Why? How would you correct it?
```c++
double dval;
int ival;
int *pi;
dval = ival = pi = 0;
```
A pointer cannot be converted to `int`.
We can dereference the pointer and the program will work.
That is, `dval = ival= *pi = 0;`

#### 4.16: Although the following programs are legal, they probably do not behave as the programmer expects. Why? Rewrite the expressions as you think they should be.
- `if (p = getPtr() != 0)`
The programmer probably expects `p = getPtr()` to be evaluated before the
`!=` operator.
I would write the expression as `if ((p = getPtr()) != 0)`.

- `if (i = 1024)`
The programmer probably is looking to compare `i` with `1024` instead of assign
`i` the value `1024` which will always evaluate to true.
I would write the expression as `if (i == 1024)`.

#### 4.17: Explain the difference between prefix and postfix increment.
The prefix increment yields the incremented value; that is, if we started with
`i = 0`, then `++i` returns `i = 1`.
With the postfix increment, yiels the unincremented value; that is, if we
started with `i = 0` again, then `i++` returns `i = 0`.

#### 4.18: What would happen if the while loop on p. 148 that prints the elements from a vector used the prefix increment operator?
If there are no negative elements in the vector, the while loop will print the
elements from `v[1]` to one past the last element in the vector.
If there is a negative element in the vector, the prefix operator will cause
the while loop to print the negative element and then stop.
See [exercise4_18.cpp](https://github.com/dwsmith1983/Cpp-Primer-5th-Edition/blob/master/Chapter4/exercise4_18.cpp).

#### 4.19: Given that `ptr` points to an `int`, that `vec` is a `vector<int>`, and that `ival` is an `int`, explain the behavior of each of these expressions. Which, if any, are likely to be incorrect? Why? How might each be corrected?
- `ptr != 0 && *ptr++`
- `ival++ && ival`
- `vec[ival++] <= vec[ival]`

#### 4.20: Assuming that `iter` is a `vector<string>::iterator`, indicate which, if any, of the following expressions are legal. Explain the behavior of the legal expressions and why those that aren't legal are in error.
- `*iter++;`

Legal, advances the pointer index and accesses the dereferenced string element.

- `(*iter)++;`

Illegal, accesses the dereferenced string element and tries to advance the
dereferenced string by one, but we can not add the int value of 1 to string.

- `*iter.empty();`

Illegal, the dot operator has a higher precedence so the code looks to see if
`iter` is empty and then dereferences.

- `iter->empty();`

Legal, this code checks the first element of the string and returns `1` if
empty and `0` otherwise.

- `++*iter;`

Illegal,

- `iter++->empty()`

Legal, checks each element of the vector to see if it is empty, returns `1` if
empty, and increments to the next element for the same check.

#### 4.23: The following expression fails to compile due to operator precedence. Using Table 4.12 p. 166, explain why it fails. How would you fix it?
```c++
string s = "word";
string p1 = s + s[s.size() - 1] == 's' ? "" : "s";
```
The precedence is `==`, `?:`, and then `+`.
Now, `s[s.size() - 1] = 'd'` so we first need to compare `'d' == 's'` and then
the conditional.
To fix the problem we would write
```c++
string s = "word";
string p1 = s + (s[s.size() - 1] == 's' ? "" : "s");
```
We dont need to write `((s[s.size() - 1] == 's')` due to the corret operator
precedence.

#### 4.24: Our program that distinguished between high pass, pass, and fial depended on the fact that the conditional operator is right associative. Describe how that operator would be evaluated if the operator were left associative.
If the operator was left associative, the first expression evaluated would have
been `(grade < 60) ? "fail" : "pass";`.
With this being the case, the process would never evaluate for the high pass
case since a result would be rendered after the first conditional.

#### 4.25: What is the value of `~'q' << 6` on a machine with 32-bit ints and 8-bit chars, that use Latin-1 character set in which `'q'` has bit pattern `01110001`?
First, we will determine `~'q'`.
With a 32-bit machine, `~'q' = 11111111 11111111 11111111 10001110`.
Now, we have to evaluate `11111111 11111111 11111111 10001110 << 6`.
With the left shift operator, we obtain `11111111 11111111 11100011 1000000`.

#### 4.26: In our grading example in this section, what would happen if we used `unsigned int` as the type for `quiz1`?
By using `unsigned long`, we ensure that `quiz1` has at least 32 bits on any
machine.
If we used `unsigned int`, `quiz1` may not have 32 bits depending on the
machine the code is ran.

#### 4.27: What is the result of each of these expressions?
```c++
unsigned long ul1 = 3, ul2 = 7;
```
- `ul1 & ul2`

Converting to binary, we have `00000011 & 0000111 = 00000011` which is `3`.

- `ul1 | ul2`

Converting to binary, we have `00000011 & 0000111 = 00000111` which is `7`.

- `ul1 && ul2`

Since both `ul1` and `ul2` are non-zero, `&&` evaluates to true so a `1` will
be outputed.

- `ul1 || ul2`

Since either `ul1` or `ul2` is non-zero, `||` evaluates to true so a `1` will
be outputed.

#### 4.29: Predict the output of the following code and explain your reasoning. Now runthe program. Is the output what you expected? If not, figure out why.
```c++
int x[10];
int *p = x;
cout << sizeof(x)/size(*x) << endl;
cout << sizeof(p)/size(*p) << endl;
```
`cout << sizeof(x)/size(*x) << endl;` returns the number of elements in the
array, `10`.
`cout << sizeof(p)/size(*p) << endl;` returns the size of the pointer divided
by the size of the object the pointer points to.
Therefore, we have `8/4 = 2` since the pointer is 8 bytes and `int = int32` so
the `int` is 4 bytes.
Yes, the output was what I expected see p. 157 and [exercise4_29](https://github.com/dwsmith1983/Cpp-Primer-5th-Edition/blob/master/Part1/Chapter4/exercise4_29.cpp).

#### 4.30: Using Table 4.12 p. 166, parenthesize the following expressions to match the default evaluation:
- `sizeof x + y`

`sizeof(x) + y`

- `sizeof p->mem[i]`

`sizeof(p->mem[i])`

- `sizeof a < b`

`sizeof(a) < b`

- `sizeof f()`

`sizeof(f())`

#### 4.31: The program in this section used the prefix increment and decrement operators. Explain why we used prefix and not postfix. What changes would have to be made to use the postfix versions? Rewrite the program using postfix operators.
```c++
vector<int>::size_type cnt = ivec.size();
for (vector<int>::size_type ix = 0; ix != ivec.size(); ++ix, --cnt) {
ivec[ix] = cnt;
}
```
In a `for` loop, it doesn't matter if you use a pre or postfix operator.
That is, no changes need to be made for `ix++, cnt--` to work and yield the
same results as the prefix program see [exercise4_31.cpp](https://github.com/dwsmith1983/Cpp-Primer-5th-Edition/blob/master/Part1/Chapter4/exercise4_31.cpp).

#### 4.32: Explain the following loop.
```c++
constexpr int size = 5;
int ia[size] = {1, 2, 3, 4, 5};
for (int *ptr = ia, ix = 0; ix != size && ptr != ia + size; ++ix, ++ptr) {
  /* ... */
}
```
The loop use both a pointer and index to step through the array.

#### 4.33: Using Table 4.12 p. 166, explain what the following expression does:
```c++
someValue ? ++x, ++y : --x, --y;
```

#### 4.34: Given the variable definitions in this section, explain what conversions take place in the following expressions:
- `if (fval)`

`fval` is converted to boolen true or false depending on whether fval is zero
or not.

- `dval = fval + ival;`

`ival` is promoted to `float` and then the `float` sum is converted to
`double`.

- `dval + ival * cval;`

`cval` is promoted to `int` and then `dval` + `int` is promoted to `double`.

#### 4.35: Given the following definitions,
```c++
char cval;       int ival;       unsigned int ui;
float fval;      double dval;
```
#### identify the implicit type conversions, if any, taking place:
- `cval = 'a' + 3;`

`'a' + 3` is converted to `char`.

- `fval = ui - ival * 1.0;`

Depends on the size of `unsigned int`.

- `dval = ui * fval;`

`ui` is converted to `float` and the the product is promoted to `double`.

- `cval = ival + fval + dval`

The sum converts to a `double` and then promoted to `char`.

#### 4.36: Assuming `i` is an `int` and `d` is a `double` write the expression `i *= d` so that it does integral, rather than floating-point multiplication.

#### 4.37: Rewrite each of the following old-style casts to use a named cast:
```c++
int i;
double d;
const string *ps;
char *pc;
void *pv;
```
- `pv = (void*)ps;`
- `i = int(*pc);`
- `pv = &d;`
- `pc = (char*) pv;`

#### 4.38: Explain the following expression:
```c++
double slope = static_cast<double>(j/i);
```

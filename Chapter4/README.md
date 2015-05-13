# Chapter 4 Expressions

Here you will find the solutions to problems that don't require any programming
in Chapter 4.
However, I may provide example code to test my assertion.

#### 4.1: What is the value returned by `5 + 10 * 20/2`?
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
See [exercise4_7.cpp] for three expressions that will overflow.

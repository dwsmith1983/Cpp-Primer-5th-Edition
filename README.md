# Introduction to my `C++` page

These are my programs for the problems in the 5th Ed. of *C++ Primer* by
Lippman, Lajoie, and Moo.
I don't guarantee that all solutions will be correct or the most concise.
For those starting out, on Linux, you compile the .cpp files by the command
`g++ -Wall exercisex_x.cpp -o exercisex_x`.
If you want to compile with the newest standards `C++14`, add to the end
`-std=c++14`.
That is, the command would be
`g++ -Wall exercisex_x.cpp -o exercisex_x -std=c++14`.
If you would like, you can increase the options from `-Wall` to
`-Wall -Wextra -pedantic-errors` for a greater degree of error messages.

The command `-Wall` enables numerous warnings which you can read about on page
57 of the [GCC Manual](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/gcc.pdf),
`g++ exercisex_x.cpp` tells the compiler how (C++) and which file
to compile, and finally the option `-o exerisex_x` tells the compiler to name
the executable `exercisex_x`.
Otherwise, the executable will be named `a.out`.

I am using the `gitignore` document from Github found
[here](https://github.com/github/gitignore/blob/master/C%2B%2B.gitignore).

The authors broke the book up into Parts 1 to 4 and one getting started
chapter which is Chapter 1.

----

# [Chapter 1: Getting Started](https://github.com/dwsmith1983/Cpp-Primer-5th-Edition/tree/master/Chapter1)

# [Part 1: The Basics]()
Part 1 is considered The Basics by the authors and consists of Chapters 2
through 7.

## [Chapter 2: Variables and Basic Types]()
## [Chapter 3: Strings, Vectors, and Arrays]()
## [Chapter 4: Expressions]()
## Chapter 5: Statements
## Chapter 6: Functions
## Chapter 7: Classes

# Part 2: The `C++` Library
Part 2 covers the primary `C++` libraries.

## Chapter 8: The I/O library
## Chapter 9: Sequential Containers
## Chapter 10: Generic Algorithms
## Chapter 11: Associative Containers
## Chapter 12: Dynamic Memory

# Part 3: Tools for Class Authors

## Chapter 13: Copy Control
## Chapter 14: Overloaded Operations and Conversions
## Chapter 15: Object-Oriented Programming
## Chapter 16: Templates and Generic Programming

# Part 4: Advanced Topics

## Chapter 17: Specialized Library Facilities
## Chapter 18: Tools for Large Programs
## Chapter 19: Specialized Tools and Techniques

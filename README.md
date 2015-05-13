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

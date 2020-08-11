/*
**************** This project description is from an online course on Codecademy.com ************************
FizzBuzz is a classic developer interview question that is asked or referred to so often for so long, it is almost a cliché!

Though this challenge will appear very simplistic to those with some coding experience, 
it is designed to weed out 99.5% programming job candidates who cannot creatively use their coding knowledge to solve simple problems.

Write a fizzbuzz.cpp program that outputs numbers from 1 to 100.

But for multiples of 3, print Fizz instead of the number and for the multiples of 5, print Buzz. 
For numbers which are multiples of both 3 and 5 print, FizzBuzz.

1
2
Fizz
4
Buzz
Fizz
7
8
Fizz
Buzz
11
Fizz
13
14
FizzBuzz
16
17
Fizz
19
Buzz
    ...
97
98
Fizz
Buzz
*/

#include <iostream>

int main () {

  for (int i=1; i<=100; i++) {

    if (i % 15 == 0) {
      std::cout << "Fizz Buzz\n";
    }
    else if (i % 3 == 0) {
      std::cout << "Fizz\n";
    }
    else if (i % 5 == 0) {
      std::cout << "Buzz\n";
    }
    else {
      std::cout << i << "\n";
    }

  }

  return 0;
}

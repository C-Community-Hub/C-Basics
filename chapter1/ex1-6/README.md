# Exercise 1-6

Write a program to verify that the expression `getchar() != EOF` is `0` or `1`.

## Solution
We assign the variable c with `getchar() != EOF` and print out the value of c so as to know what value it's going to return (`1` or `0`).

## Expected output
To get `1` as an output, type any character and press enter.<br>
To get `0` as an output, on Unix/Linux/Mac press `Ctrl + d` and on Windows press `Ctrl + z followed by enter`. These actions will send the `EOF` signal.<br>
* Why is this important? Remeber in our 2nd version of the copy input to output code, we had parenthesis `(c = (getchar()) != EOF)` so our variable c holds our input value and compares it to `EOF`, but without the parenthesis, our variable c holds the comparison of our input value with `EOF` which is terrible since we always want putchar to keep printing our input value until `EOF` is encountered. We want c to hold the value we keyed in, not the result of the character we keyed in with `EOF`.

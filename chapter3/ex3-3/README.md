# Exercise 3-3

Write a function expand(s1,s2) that expands shorthand notations like a-z in the string s1 into the equivalent complete list abc...xyz in s2.
Allow for letters of either case and digits, and be prepared to handle cases like a-b-c and a-z0-9 and -a-z.
Arrange that a leading or trailing - is taken literally.


## Solution

The algorithm:
* For each character in s1
* if character is not an hypen, copy to s2 
   and move to next character.
* if character is a leading or trailing hypen
   copy to s2 else exclusively  fill s2 with 
   ascii character(s) within the given range.
   if next character is same as previous charcater
   jump over the next character.


## Result

input: "a-b-c"
output: "abc"

input: "a-z0-9"
output: "abcdefghijklmnopqrstuvwxyz0123456789"

input: "a-a"
output: "a"

input: "---"
output: "-"

input: "9-0-"
output: "9876543210-"

input: "-z-a"
output: "-zyxwvutsrqponmlkjihgfedcba"

input: "-a-d-"
output: "-abcd-"


## How to run

compile:
```gcc -o solution solution.c```

run:
```./solution```





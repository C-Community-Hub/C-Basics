# Exercise 4-1

Write the function strindex(s,t) which returns the position of the rightmost occurrence of t in s, or -1 if there is none.



## The solution

Finds the rightmost occurrence of string t in string s and returns the starting index of the match. Returns -1 if t is not found in s.

### parameters
    * s: Null-terminated string to search in.
    * t: Null-terminated strinb to searchfor.

### Returns
    * ssize_t: Starting index of the rightmost occurrence of t in s, or -1 if not found. If t is empty, returns the index of the first character in s.
    * returns -1 if either string is a NULL pointer.



## Running the test

Compile  and execute
```
gcc solution.c test.c -o solution && ./solution

```









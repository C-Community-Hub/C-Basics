# Exercise 3-5

Write the function itob(n,s,b) that converts the integer n into a base b character representation in the string s. In particular, itob(n,s,16) formats s as a hexadecimal integer in s.


## Solution

The itob function converts an integer n to a string representation in the specified base b and stores it in the character array s. If s is NULL, the function calculates the length of the resulting string without storing it. It supports bases from 2 to 36 and handles both positive and negative integers.
To handle bases greater 36, more characters will have to be added to the digitchar array.

itob should be called with s=NULL to obtain the length(include NUL byte) sufficient to hold the result string.
```ssize_t len = itob(n,NULL,b)```
then 
``` 
char s[len];
itob(n,s,b);
```

### Parameters
 * n: The integer to convert (can be positive, negative, or zero).

 * s: Pointer to a character array where the string representation is stored. If s is NULL, the function calculates the length without storing.

 * b: The base for conversion (must be between 2 and 36, inclusive).


### Return value

 * Returns the length of the string representation (include the NUL byte).

 * Returns -1 if the base b is invalid (b < 2 or b > 36).


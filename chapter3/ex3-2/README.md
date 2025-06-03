# Exercise 3-2

Write a function _escape(s,t)_ that converts characters like newline and tab  into visible escape sequences like \n and  \t as it copies the string t to s. Use a switch. Write a function for the other direction as well,  converting escape sequences into the real characters.


## Solution

This solution only handles tab and newline.
It can be extended to handle other nonprintable characters. 

## How to run

```gcc -o solution solution.c```

```./solution```

## Expected output

t = "\tHello, World\t"
expect s = "\\tHello, World\\t"





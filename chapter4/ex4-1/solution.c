#include <stdio.h>
#include <string.h>
#include <stdlib.h>

ssize_t strindex(const char source[], const char searchFor[]);


/* return the index of rightmost 
 * occurrence of t in s.
 */
ssize_t  strindex(const char s[], const char t[])
{
  size_t len_s, len_t;

  if(s == NULL || t == NULL)
    return -1;


  len_t = strlen(t);
  len_s = strlen(s);

  //if t is empty, match at end of s
  if(len_t == 0)
    return 0;

  for(ssize_t i = len_s - len_t; i >= 0; --i)
  {
    for(ssize_t j = len_t-1, k = i; j >= 0 && t[j] == s[k]; --k, --j)
      if(j == 0)
	return k;
  }

  return -1;
}

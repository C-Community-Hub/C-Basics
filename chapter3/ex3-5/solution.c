#include <stdio.h>

ssize_t itob(int num, char *str, int base);

int main(void)
{
  const int n = 2147483647;

  for(int b = 2; b <= 36; ++b)
  {
    //call itob with s=NULL to get the
    //length(including NUL byte) sufficient
    //to hold the result string
    ssize_t len = itob(n,NULL,b);

    //allocate enough memory for the
    //result string including the NUL byte
    char s[len];
    itob(n,s,b);

    printf("n: %d\ns: %s\nb: %d\n\n",n,s,b); 
  }


  return 0;
}

ssize_t itob(int n, char *s, int b)
{
  if(b < 2 || b > 36)
    return -1;

  int sign;
  char digitchar[36] = {'0','1','2','3','4',
    '5','6','7','8','9','A','B','C','D','E',
    'F','G','H','I','J','K','L','M','N','O',
    'P','Q','R','S','T','U','V','W','X','Y',
    'Z'};
  
  sign = n < 0?-1:1;
  if(sign < 0)
    n *= -1;

  ssize_t len =0;
  if(n == 0)
  {
    if(s)
      s[len++] = digitchar[n];
    else
      ++len;
  }

  while(n > 0)
  {
    int rem = n % b;
    if(s)
      s[len++] = digitchar[rem];
    else
      ++len;
    n /= b;
  }

  if(sign == -1)
  {
    if(s)
      s[len++] = '-';
    else
      ++len;
  }

  if(s)
  {
    //Reverse s in place;
    char c;
    for(ssize_t j=len,i=0; i < j; --j,++i)
      c = s[i], s[i] = s[j-1], s[j-1] = c;

    // s is NUL terminated
    s[len] = '\0';
  }


  //length of result string including
  // the NUL byte
  return ++len;
}

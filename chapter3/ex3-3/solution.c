#include <stdio.h>
#include <string.h>

#define N 256

void expand(const char *s1, char *s2);

int main(void)
{
  char s1[N] = "z-a-0";
  char s2[N] = {0};


  expand(s1,s2);
  printf("s2: %s\n",s2);


  return 0;
}



void expand(const char *s1, char *s2)
{
  size_t n = strlen(s1);
  int j = 0;

  for(size_t i = 0; i < n; ++i)
  {
    if(s1[i] != '-')
    {
      s2[j++] = s1[i];
      continue;
    }

    if(i == 0 || i == n-1)
      s2[j++] = s1[i];
    else
    {
      int start = s1[i-1];
      int end = s1[i+1];

      if(start < end)
	for(int k = start+1; k < end; ++k)
	  s2[j++] = k;
      else if(start > end)
	for(int k = start-1; k > end; --k)
	  s2[j++] = k;
      else
	++i;
    }//else

  }//for
   
  s2[j] = '\0';
}

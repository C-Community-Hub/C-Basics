#include <stdio.h>
#include <string.h>

#define N 256


void escape(char *s,char *t);


int main(void)
{
  char t[N] = "\tHello,\n\t\t World\n";
  char s[N] = {0};

  escape(s,t);

  printf("%s",s);
}


void escape(char *s,char *t)
{
 
  int i= 0, j=0;
  size_t len = strlen(t);

  for(; i < len; ++i)
  {
    switch(t[i])
    {
      case '\n':
	//0x5c is the  ascii code in hex
	//for the forward slash '\'.
	//Alternatively one could write
	//s[j++] = '\\'.
	s[j++] = 0x5c;s[j++]='n';
	break;
      case '\t':
	s[j++] = 0x5c; s[j++]='t';
	break;
      default: 
	s[j++] = t[i];
	break;
    }//switch

  }//for

}

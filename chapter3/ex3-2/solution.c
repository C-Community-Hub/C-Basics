#include <stdio.h>
#include <string.h>

#define N 256


void escape(char *s,const char *t);
void reverse_escape(const char *s, char *t);


int main(void)
{
  char t[N] = "Hello,\\n\t\nWorld\n";
  char s[N] = {0};
  char v[N] = {0};

  escape(s,t);
  reverse_escape(s, v);

  printf("t: %s",t);
  printf("s: %s",s);
  printf("\n*****************\n");
  printf("v: %s",v);
}


void escape(char *s,const char *t)
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
   
  s[j] = '\0'; //NUL terminated;
}

void reverse_escape(const char *s, char *t)
{
  size_t len = strlen(s);

  for(int j=0, i = 0; i < len; ++i)
  {

    if(s[i] == 0x5c)
    {
      if(s[i+1] == 'n')
      {
	t[j++] = '\n';
	++i;
      }
      else if(s[i+1] == 't')
      {
	t[j++] = '\t';
	++i;
      }
      else
	t[j++] = 0x5c;
    }
    else
      t[j++] = s[i];

  }//for

  t[j] = '\0'; //NUL terminated
}

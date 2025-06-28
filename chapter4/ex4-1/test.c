#include <stdio.h>

extern ssize_t strindex(const char *, const char *);



int main(void)
{
  char *s = "Go ye therefore, and teach"
	     "all nations, baptizing "
	     "them in the name of the "
	     "Father, and of the Son, "
	     "and of the Holy Ghost:..."
	     "But as many as received "
	     "him, to them gave he "
	     "power to become the sons " 
	     "of God, even to them that "
	     "believe on his name:..."
	     "This was he of whom I "
	     "spake, He that cometh "
	     "after me is preferred "
	     "before me: for he was "
	     "before me.";

  ssize_t index = strindex(s,"But");

  printf("index: %zu\n", index);
  if(index == -1) return -1;

  //print string starting at index
  printf("%s\n", &s[index]);

  return 0;
}

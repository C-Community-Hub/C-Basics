#include<stdio.h>
#include<string.h>
#define MAX_LIMIT 20

void squeeze(char *s1, char *s2) {
  int i, j, k, s2_len = strlen(s2);
  for(k = 0; k < s2_len; ++k) {
    int s1_len = strlen(s1);
    for(i = j = 0; i < s1_len; ++i) {
      if(s1[i] != s2[k]) s1[j++] = s1[i];
    }
    s1[j] = '\0';
  }
  printf("%s", s1);
}

int main() {
  char s1[MAX_LIMIT], s2[MAX_LIMIT];
  fgets(s1, MAX_LIMIT, stdin);
  fgets(s2, MAX_LIMIT, stdin);
  squeeze(s1, s2);
  return 0;
}

#include<stdio.h>
#include<limits.h>
#include<string.h>
#define MAX_LIMIT 30

void any(char* s1, char* s2) {
  int idx = INT_MAX, k, s2_len = strlen(s2), s1_len = strlen(s1), i;
  for(k=0;k<s2_len;++k) {
    for(i=0;i<s1_len;++i) {
      if (i >= idx) break;
      if (s1[i] == s2[k] && s1[i] != '\n') idx = i;
    }
  }
  idx = idx == INT_MAX ? -1 : idx;
  printf("%d\n", idx);
}

int main() {
  char s1[MAX_LIMIT], s2[MAX_LIMIT];
  fgets(s1, MAX_LIMIT, stdin);
  fgets(s2, MAX_LIMIT, stdin);
  any(s1, s2);
  return 0;
}

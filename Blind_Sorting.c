/* 11714 - Blind Sorting */
#include <stdio.h>

int main () {
  int n;
  int questions;
  while (scanf("%d",&n) != EOF) {
    questions = n - 1;
    questions += (int) log2(n - 1);
    printf("%d\n",questions);
  }
  return 0;
}

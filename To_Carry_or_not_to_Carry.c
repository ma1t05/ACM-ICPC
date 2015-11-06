/* 10469 - To Carry or not to Carry */
#include <stdio.h>

int main () {
  int a,b,c;
  while (scanf("%d %d",&a,&b) != EOF)
    printf("%d\n",(a|b) - (a&b));
  return 0;
}

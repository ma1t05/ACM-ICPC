/* Summing Digits 11332 */
#include <stdio.h>

int main (){
  int n;
  while (scanf("%d",&n) && n > 0)
    printf("%d\n",(n%9 == 0 ? 9 : n%9));
  return 0;
}

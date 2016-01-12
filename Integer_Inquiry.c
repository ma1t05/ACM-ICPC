/* 424 - Integer Inquiry */

#include <stdio.h>
#define LENGTH 128

int main(){
  int sum[LENGTH];
  int a, b, i, j;
  char VeryLongInteger[LENGTH];
  for (i = 0;i < LENGTH;i++) sum[i] = 0;
  while (scanf("%s",VeryLongInteger) && VeryLongInteger[0] != '0') {
    i = 0;
    while (VeryLongInteger[i] != '\0') i++;
    i--;
    a = 0;
    j = 0;
    for(;i >= 0;i--){
      switch(VeryLongInteger[i]){
      case '9': b=9; break;
      case '8': b=8; break;
      case '7': b=7; break;
      case '6': b=6; break;
      case '5': b=5; break;
      case '4': b=4; break;
      case '3': b=3; break;
      case '2': b=2; break;
      case '1': b=1; break;
      case '0': b=0; break;
      }
      sum[j] += a;
      sum[j] += b;
      a = sum[j] / 10;
      sum[j] %= 10;
      j++;
    }
    while (a >= 1) {
      sum[j] += a;
      a = sum[j] / 10;
      sum[j] %= 10;
      j++;
    }
  }
  i = LENGTH - 1;
  while (sum[i] == 0) i--;
  while (i >= 0)
    printf("%d",sum[i--]);
  printf("\n");
  return 0;
}

/* 11340 - Newspaper */
#include <stdio.h>

int main () {
  int M,N,K;
  int paid_ASCII[256];
  char c;
  int i,value;
  long long int money;
  scanf("%d",&N);
  while (N-- > 0) {
    scanf("%d",&K);
    for (i = 0;i < 256;i++) 
      paid_ASCII[i] = 0;
    while (K-- > 0) {
      scanf(" %c %d",&c,&value); 
      paid_ASCII[c+128] = value;
    }
    scanf("%d",&M);
    money = 0;
    do {
      c = getchar();
      money += paid_ASCII[c+128];
      if (c == 10) M--;
    } while (M >= 0);
    printf("%lld.%02d$\n",money/100,money%100);
  }
  return 0;
}

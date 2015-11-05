/* 113 Power of Cryptography */
#include <stdio.h>
#include <math.h>

int main () {
  unsigned long long int n,p,k;
  while (scanf("%lli %lli",&n,&p) != EOF) {
    k = floor(log(p)/n);
    while (p > pow(k,n))
      k++;
    printf("Case: n=%lli p=%lli\n",n,p);
    printf("%d\n",k);
  }
  return 0;
}

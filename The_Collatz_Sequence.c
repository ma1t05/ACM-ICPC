
/* 694 The Collatz Sequence */

#include <stdio.h>

int main () {
  int i,t;
  int A,L;
  int a,l;
  i = 0;
  while (scanf("%d %d",&A,&L) && A != -1 && L != -1) {
    l = (L - 1) / 3;
    t = 1;
    a = A;
    while (a%2 == 0) {
      a /= 2;
      t++;
    }
    while (a <= l) {

      if (a%2) {
	t++;
	a = 3 * a + 1;
      }
      
      while (a%2 == 0) {
	a /= 2;
	t++;
      }
      
      if (a == 1) break;

    }
    printf("Case %d: A = %d, limit = %d, number of terms = %d\n",++i,A,L,t);
  }
  return 0;
}

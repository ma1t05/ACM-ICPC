/* Autoatic_Answer 11547 */
#include <stdio.h>

int main() {
  int t,n;
  scanf("%d",&t);
  while (t-- > 0) {
    scanf("%d",&n);
    n *= 63; /* 567 / 9 */
    n += 7492;
    n *= 5; /* 235 / 47 */
    n -= 498;
    if (n < 0)
      n *= -1;
    n %= 100;
    n /= 10;
    printf("%d\n",n);
  }
  return 0;
}

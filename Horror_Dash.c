/* 11799 - Horror Dash */
#include <stdio.h>

int main () {
  int T,t;
  int N,c,ans;
  scanf("%d",&T);
  t = 0;
  while(T > t++) {
    scanf("%d",&N);
    ans = 0;
    while (N-- > 0) {
      scanf("%d",&c);
      if (ans < c) ans = c;
    }
    printf("Case %d: %d\n",t,ans);
  }
  return 0;
}

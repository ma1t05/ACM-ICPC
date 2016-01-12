/* 11498 - Division of Nlogonia */
#include <stdio.h>

int main () {
  int K;
  int N,M;
  int X,Y;
  while (scanf("%d",&K) && K != 0) {
    scanf("%d %d",&N,&M);
    while(K-- > 0) {
      scanf("%d %d",&X,&Y);
      if (X == N || Y == M)
	printf("divisa\n");
      else 
	printf("%c%c\n",(Y > M ? 'N' : 'S'),(X > N ? 'E' : 'O'));
    }
  }
}

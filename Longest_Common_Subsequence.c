/* 10405 - Longest Common Subsequence */
#include <stdio.h>
#define max(X,Y) ((X) > (Y) ? (X) : (Y))

int main () {
  int i,j;
  int length_1,length_2;
  char sequence_1[1024],sequence_2[1024];
  int common[1024][1024];
  int m;
  while (gets(sequence_1)) {
    gets(sequence_2);
    length_1 = 0;
    while (sequence_1[length_1] != '\0') length_1++;
    length_2 = 0;
    while (sequence_2[length_2] != '\0') length_2++;
    for (i = 0;i <= length_1;i++) for (j = 0;j <= length_2;j++) common[i][j] = 0;
    for (i = length_1;i > 0;i--) {
      for (j = length_2;j > 0;j--) {
	m = max(common[i-1][j],common[i][j-1]);
	if (sequence_1[i-1] == sequence_2[j-1]) 
	  common[i-1][j-1] = max(1+common[i][j],m);
	else common[i-1][j-1] = m;
      }
    }
    printf("%d\n",common[0][0]);
  }
}

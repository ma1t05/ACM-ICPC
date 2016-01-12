/* 541 - Error Correction */
#include <stdio.h>
#define UNASIGNED -1
#define CORRUPTED -2

int main () {
  int n;
  int i,j;
  int bit;
  int row,col;
  int row_sum;
  int col_sum[128];
  while (scanf("%d",&n) && n != 0) {
    row = UNASIGNED;
    col = UNASIGNED;
    for (i = 0;i < n;i++) col_sum[i] = 0;

    for (i = 0;i < n;i++) {
      row_sum = 0;
      for (j = 0;j < n;j++) {
	scanf("%d",&bit);
	if (bit > 0) {
	  row_sum += bit;
	  col_sum[j] += bit;
	}
      }

      if (row_sum%2)
	row = (row == UNASIGNED ? i : CORRUPTED);
    }

    for (j = 0;j < n;j++) {
      if (col_sum[j]%2)
	col = (col == UNASIGNED ? j : CORRUPTED);
    }
    if (row == UNASIGNED && col == UNASIGNED)
      puts("OK");
    else if (row != CORRUPTED && col != CORRUPTED)
      printf("Change bit (%d,%d)\n",row+1,col+1);
    else puts("Corrupt");
  }
  return 0;
}

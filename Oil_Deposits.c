/* 572 - Oil Deposits */
#include <stdio.h>
#define MAX_SIZE 100

int m,n;
char land[MAX_SIZE][MAX_SIZE];
void remove_deposit(int,int);

int main () {
  int i,j;
  int deposits;
  char line[MAX_SIZE];
  while (scanf("%d",&m) != EOF && scanf("%d",&n) != EOF && m != 0) {
    deposits = 0;
    for (i = 0;i < m;i++) {
      scanf("%s",line);
      for (j = 0;j < n;j++) 
	land[i][j] = line[j];
    }
    for (i = 0;i < m;i++) {
      for (j = 0;j < n;j++) {
	if (land[i][j] != '*') {
	  deposits++;
	  remove_deposit(i,j);
	}
      }
    }
    printf("%d\n",deposits);
  }
  return 0;
}

void remove_deposit(int i,int j) {
  if ((i < 0) || (j < 0) || (i >= m) || (j >= n) || (land[i][j] != '@')) return;
  land[i][j] = '*';
  remove_deposit(i-1,j);
  remove_deposit(i-1,j-1);
  remove_deposit(i,j-1);
  remove_deposit(i+1,j-1);
  remove_deposit(i+1,j);
  remove_deposit(i+1,j+1);
  remove_deposit(i,j+1);
  remove_deposit(i-1,j+1);
}

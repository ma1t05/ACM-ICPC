/* 108 - Maximum Sum */
#include <stdio.h>

int main () {
  int i,j,k,l;
  int n,max,s;
  int a[100][100];

  while(scanf("%d",&n) != EOF) {
    for (i = 0;i < n;i++)
      for (j = 0;j < n;j++)
	scanf("%d",&(a[i][j]));

    for (i = 0;i < n;i++)
      for (j = 1;j < n;j++)
	a[i][j] += a[i][j-1];
    for (i = 1;i < n;i++) 
      for (j = 0;j < n;j++)
	a[i][j] += a[i-1][j];

    max = a[0][0];
    for (i = 0;i < n;i++)
      for (j = 0;j < n;j++)
	for (k = i;k < n;k++)
	  for (l = j;l < n;l++) {
	    s = a[k][l];
	    if (i > 0) s -= a[i-1][l];
	    if (j > 0) s -= a[k][j-1];
	    if ((i > 0) && (j > 0)) s += a[i-1][j-1];
	    if (s > max) max = s;
	  }
    printf("%d\n",max);    
  } 

  return 0;
}

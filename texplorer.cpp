#include<iostream>
#include<stdio.h>
#define MISSION_COMPLETE 0

struct cell{
  int x;
  int y;
  int p;
};

int main(){
  int n,k,N,M,i,j,ox,oy,m,r;
  scanf("%d",&n);
  for(k=0;k<n;k++){
    scanf("%d %d",&N,&M);
    int A[N][M];
    r=N*M;
    cell* L=new cell[r];
    for(i=0;i<M;i++){
      for(j=0;j<N;j++)scanf("%d",&A[j][i]);
    }
    scanf("%d %d",&L[0].x,&L[0].y);
    A[L[0].x][L[0].y]=1;
    r=0;
    m=0;
    L[0].p=0;
    scanf("%d %d",&ox,&oy);
    while(1){
      if(L[m].x+1<N&&A[L[m].x+1][L[m].y]==0){
	r++;
	L[r].x=L[m].x+1;
	L[r].y=L[m].y;
	L[r].p=L[m].p+1;
	A[L[m].x+1][L[m].y]=1;
      }
      if(L[r].x==ox&&L[r].y==oy)break;
      if(L[m].y>0&&A[L[m].x][L[m].y-1]==0){
	r++;
	L[r].x=L[m].x;
	L[r].y=L[m].y-1;
	L[r].p=L[m].p+1;
	A[L[m].x][L[m].y-1]=1;
      }
      if(L[r].x==ox&&L[r].y==oy)break;
      if(L[m].x>0&&A[L[m].x-1][L[m].y]==0){
	r++;
	L[r].x=L[m].x-1;
	L[r].y=L[m].y;
	L[r].p=L[m].p+1;
	A[L[m].x-1][L[m].y]=1;
      }
      if(L[r].x==ox&&L[r].y==oy)break;
      if(L[m].y+1<M&&A[L[m].x][L[m].y+1]==0){
	r++;
	L[r].x=L[m].x;
	L[r].y=L[m].y+1;
	L[r].p=L[m].p+1;
	A[L[m].x][L[m].y+1]=1;
      }
      if(L[r].x==ox&&L[r].y==oy)break;
      m++;
    }
    printf("%d\n",++L[r].p);
    delete L;
  }
  return MISSION_COMPLETE;
}

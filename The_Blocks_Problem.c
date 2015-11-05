/* 101 - The Blocks Problem */
#include <stdio.h>

void returning(int);
int top(int);
int stack[25],pos[25],base[25];
void put(int,int);
void print(int);

int main() {
  int n,a,b,i;
  char move[]="move",onto[]="onto",quit[]="quit";
  char action[5],condition[5];
  scanf("%d",&n);
  for(i=0;i<n;i++){
    stack[i]=-1;
    pos[i]=i;
    base[i]=-1;
  }
  while(scanf("%s",&action)){
    if(strcmp(action,quit) == 0){
      print(n); /* Print Blocks */
      return 0;
    }
    scanf("%d %4s %d",&a,condition,&b);
    /*printf("\n%s %d %s %d\n",action,a,condition,b); /* */
    if((a!=b) && (pos[a]!=pos[b])){/* Legal command */

      if(strcmp(condition,onto) == 0)
	returning(stack[b]); /* Clean stack of b */
      else
	b = top(b);

      stack[b] = a;
      if(strcmp(action,move) == 0)
	returning(stack[a]); /* Clean stack of a */
      put(a,b);

    }
  }
}

void returning(int b) {
  if (b == -1) return;
  returning(stack[b]);
  pos[b] = b;
  if (base[b] != -1)
    stack[base[b]] = -1;
  base[b] = -1;
}

int top(int b) {
  if (stack[b] == -1) 
    return b;
  return top(stack[b]);
}

void put(int a,int b) {
  if (a == -1) return;
  pos[a] = pos[b];
  if (base[a] != b) {
    if (base[a] != -1)
      stack[base[a]] = -1;
    base[a] = b;
  }
  put(stack[a],a);
}

void print(int n) {
  int i,j;
  for(i=0;i<n;i++){
    printf("%d:",i);
    if (base[i] == -1) {
      j = i;
      do {
	printf(" %d",j);
	j = stack[j];
      } while (j != -1);
    }	 
    printf("\n");
  }
}

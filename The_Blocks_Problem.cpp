
#include <iostream>

using namespace std;

int main() {
  int n,a,b,i,j,stack_a;
  int stack[25],pos[25];
  char move[]="move",pile[]="pile",onto[]="onto",over[]="over",quit[]="quit";
  string action,condition;
  cin >> n;
  for(i=0;i<n;i++){
    stack[i]=-1;
    pos[i]=i;
  }
  while(cin >> action){
    if(action==quit){
      // Print Blocks
      for(i=0;i<n;i++){
	cout << i << ":";
	for(j=0;j<n,blocks[i][j]!=-1;j++) cout << " " << blocks[i][j];
	cout << endl;
      }
      return 0;
    }
    cin >> a >> condition >> b;
    if((a!=b) && (pos[a]!=pos[b])){// Legal command
      if(condition==onto){ /* Clean stack of b*/
	for(j=pos[b]+1;j<n,blocks[stack[b]][j]!=-1;j++){
	  stack[blocks[stack[b]][j]]=blocks[stack[b]][j];
	  pos[blocks[stack[b]][j]]=0;
	  blocks[stack[b]][j]=-1;
	}
      }
      //"over":
      stack_a=stack[a];
      if(action==move){
	for(j=pos[a]+1;j<n,blocks[stack_a][j]!=-1;j++){
	  stack[blocks[stack_a][j]]=blocks[stack_a][j];
	  pos[blocks[stack_a][j]]=0;
	  blocks[stack_a][j]=-1;
	}
      }
      //"pile":
      for(i=pos[b]+1;i<n;i++)if(blocks[stack[b]][i]<0)break;
      for(j=pos[a];j<n,blocks[stack_a][j]!=-1;j++,i++){
	stack[blocks[stack_a][j]]=stack[b];
	pos[blocks[stack_a][j]]=i;
	blocks[stack[b]][i]=blocks[stack_a][j];
	blocks[stack_a][j]=-1;
      }
    }
  }
}

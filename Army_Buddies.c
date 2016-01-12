/* 12356 - Army Buddies */
#include <stdlib.h>
#include <stdio.h>
#define NO_BUDDIE -1

typedef struct node node;
struct node {
  int left,right;
  node *P,*L,*R;
};

node* new_node(node &root,int L,int R);
void kill(node&,int,int);
int left_buddy(node&,int);
int right_buddy(node&,int);

int main () {
  int S,B;
  int L,R;
  int i,j;
  node root;
  while (scanf("%d %d",&S,&B) != EOF && S != 0) {
    root.left = 1;
    root.right = S;
    root.L = root.R = NULL;
    while (B-- > 0) {
      scanf("%d %d",&L,&R);
      kill(root,L,R);
      L = left_buddy(root,L);
      R = right_buddy(root,L);

      if (L != NO_BUDDY)
	printf("%d",L);
      else putchar('*');
      putchar(' ');
      if (R != NO_BUDDY)
	printf("%d",R);
      else putchar('*');
      putchar('\n');
    }
  }
  return 0;
}

void kill (node &root,int L,int R) {
  node *aux;
  if (root.left > R)
    kill (*(node.L),L,R);
  else if (root.right < L)
    kill (*(nide.R),L,R);
  else {
    if (root.left < L && root.right > R) {
      root.L = new_node(root,root.left,L-1);
      root.left = L;
      root.R = new_node(root,R+1,root.right);
      root.right = R;
    }
    else if (root.right != R) {
      node.left = L;
    }
    else if (root.left != L) {
      node.right = R;
    }
    else {
      aux = &(root.P);
      if (aux != NULL) {
	if (aux->left > root.right)
	  aux->L = NULL;
	else
	  aux->R = NULL;
	
      }

    }
  }
}

node* new_node(node &root,int L,int R) {
  node *new_node;
  new_node = (*node)malloc(sizeof(node));
  new_node->P = &root;
  new_node->L = new_node->R = NULL;
  node->left = L;
  node->right = R;
  return new_node;
}

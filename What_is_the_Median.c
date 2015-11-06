
/* 10107 - What is the Median? */
#include <stdio.h>
#include <stdlib.h>

struct node {
  int value;
  struct node *left,*right;
};

struct root {
  int elements;
  struct node *left,*right,*current;
};

typedef struct node node;
typedef struct root root;

void insert_element(root*,node*);
int get_median(root*);
void free_root(root*);

int main(){
  root median;
  node *new;
  int c;
  median.left = NULL,median.right = NULL,median.current = NULL;
  while (scanf("%d",&c) != EOF) {
    new = (node*)malloc(sizeof(node));
    new->left = NULL,new->right = NULL,new->value = c;
    insert_element(&median,new);
    printf("%d\n",get_median(&median));
  }
  free_root(&median);
  return 0;
}

void _insert_left(node*,node*);
void _insert_right(node*,node*);

void insert_element(root *median,node *new) {
  node *current;
  if (median->current != NULL) {
    current = median->current;
    median->current = NULL;
    if (current->value >= new->value) {
      /* Move current to right */
      median->right = current;
      /* Insert new to left */
      _insert_left(current,new);
      median->left = current->left;
    }
    else {
      /* Move current to left */
      median->left = current;
      /* Insert new to right */
      _insert_right(current,new);
      median->right = current->right;
    }
  }
  else {
    if (median->left == NULL)
      median->current = new;
    else if (median->left->value > new->value) {
      /* Move letf to current */
      median->current = median->left;
      /* Insert new to left */
      _insert_left(median->left,new);
      median->left = median->current->left;
    }
    else if (median->right->value < new->value) {
      /* Move right to current */
      median->current = median->right;
      /* Insert new to right */
      _insert_right(median->right,new);
      median->right = median->current->right;
    }
    else {
      median->current = new;
      median->current->left = median->left;
      median->left->right = median->current;
      median->current->right = median->right;
      median->right->left = median->current;
    }
  }
}

int get_median(root *median){
  int ans,left,right;
  if (median->current != NULL)
    return median->current->value;
  left = (median->left->value) >> 1;
  right = (median->right->value) >> 1;
  ans = left + right;
  if ((median->left->value)%2 && (median->right->value)%2) ans++;
  return ans;
}

void free_root(root *median) {
  node *current,*next;
  if (median->current != NULL) free(median->current);
  current = median->left;
  while(current != NULL) {
    next = current->left;
    free(current);
    current = next;
  }
  current = median->right;
  while(current != NULL) {
    next = current->right;
    free(current);
    current = next;
  }
}

void _insert_left(node *a,node *new) {
  if (a->value <= new->value) {
    new->left = a;
    a->right->left = new;
    new->right = a->right;
    a->right = new;
  }
  else {
    if (a->left != NULL)
      _insert_left(a->left,new);
    else {
      new->right = a;
      a->left = new;
    }
  }
}

void _insert_right(node *a,node *new) {
  if (a->value >= new->value) {
    new->right = a;
    a->left->right = new;
    new->left = a->left;
    a->left = new;
  }
  else {
    if (a->right != NULL)
      _insert_right(a->right,new);
    else {
      new->left = a;
      a->right = new;
    }
  }
}

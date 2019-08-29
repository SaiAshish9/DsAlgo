#include <stdio.h>

struct node{
  int data;
  struct node * left;
  struct node* right;
}
struct node* root=NULL;

void insert(int d){
  struct node* t,*p;
  t=(struct node*)malloc(sizeof(struct node));
  t->data=d;
  t->left=NULL;
  t->right=NULL;
  p=root;
  if(root==NULL){
    root=t;
  }
  else{
    struct node* curr;
    curr=root;
    while(curr){
      p=curr;
      if(t->data>curr->data){
        curr=curr->right;
      }else{
        curr=curr->left;
      }

    }
    if(t->data>p->data){
      p->right=t;
    }else{
      p->left=t;
    }
  }


}
 void delete(){
   //no children
   {if(curr==p->right){
     p->right=NULL;
   }else{
     p->left=NULL;
   }
   free(curr);}
//1 children
{if(curr->left!=NULL){
  if (curr==p->right){
    p->right=curr->left;
  }
  curr->left=NULL;
  free(curr);
}
if(curr->right!=NULL){
  if (curr==p->right){
    p->right=curr->right;
  }
  curr->right=NULL;
  free(curr);
}
if(curr->left!=NULL){
  if (curr==p->left){
    p->left=curr->left;
  }
  curr->right=NULL;
  free(curr);
}
if(curr->right!=NULL){
  if (curr==p->left){
    p->left=curr->left;
  }
  curr->left=NULL;
  free(curr);
}}
//2 children
void minimumkey(struct node*curr){
  while(curr!=NULL){
    curr=curr->left;
  }return curr;
}
//least element in right subtree
if(current->left!=NULL && curr->right!=NULL){
  struct node* t1,*t2;
  // t1=curr->right;
  // if(t1->left==NULL&&t2->right==NULL){
  //   curr->data=t1->data;
  //   curr->right=NULL;
  //
  //   free(t1);
  // }
  // if(t1->left==NULL&&t1->right!=NULL){
  //   curr->data=t1->data;
  //   curr->right=t1->right;
  //   t1->right=NULL;
  //   free(t1);
  //
  // }
  struct node* next=minimumkey(current->right);
  int val=next->data;
  delete(next->data);
  current->data=val;
}

 }

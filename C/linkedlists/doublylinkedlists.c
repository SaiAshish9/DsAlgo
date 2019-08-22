#include <stdio.h>
#include <stdlib.h>
struct node{
int data;
struct node* left,*right;
};
struct node* root=NULL;


void reverse(){
  struct node *p,*temp;
p=root;

while(p!=NULL){
  temp=p->right;
  p->right=p->left;
  p->left=temp;
  p=p->left;
  if(p!=NULL&&p->right==NULL)
  root=p;
}

}




void append(){
  struct node* temp;
  temp=(struct node*)malloc(sizeof(struct node));
  printf("Enter node data\n"  );
  scanf("%d",&temp->data );
  temp->left=NULL;
  temp->right=NULL;
  if(root==NULL){
   root=temp;
  }else{
  struct node* p;
  p=root;
  while(p->right!=NULL){
    p=p->right;
  }
  p->right=temp;
  temp->left=p;
  }

}

void prepend(){
  struct node* temp;
  temp=(struct node*)malloc(sizeof(struct node));
  printf("Enter node data:");
  scanf("%d",&temp->data);
  temp->left=NULL;
  temp->right=NULL;
  if(root==NULL){
    root=temp;
  }else{
      temp->right=root;
      root->left=temp;
      root=temp;
  }
}

int length(){
struct node* temp=root;
int count=0;
while(temp!=NULL){
  count++;
  temp=temp->right;
}
return count;}

void display(){
  struct node* temp=root;
  if(temp==NULL){
    printf("empty list\n" );
  }
  while(temp!=NULL){
    printf("%d <--> ",temp->data);
    temp=temp->right;
  }
}





void insert(){
  struct node* temp,*p;
  p=root;
int loc,i=1;
printf("Enter loc:");
scanf("%d",&loc);
if(loc>length()){
  printf("Not Possible\n" );
}else{
temp=(struct node*)malloc(sizeof(struct node));
printf("Enter node data:");
scanf("%d",&temp->data);
temp->left=NULL;
temp->right=NULL;
while(i<loc){
p=p->right;
i++;
}
temp->right=p->right;
p->right->left=temp;
temp->left=p;
p->right=temp;
}

}
void Delete(){
struct node* temp;
int loc;
printf("Enter loc to delete\n" );
scanf("%d",&loc );
if(loc>length()){
  printf("Not Possible!");
}else{
  struct node* p=root,*q;
  int i=1;
  while (i<loc) {
    p=p->right;
i++;
  }
p->left->right=p->right;
p->right->left=p->left;
  free(p);
}

}



void main(){
  int c;
  while(1){
    printf("double linked lists operations:\n" );
   printf("1.Append\n");
   printf("2.Prepend\n" );
   printf("3.Add After\n" );
   printf("4.Length\n" );
   printf("5.Display\n" );
printf("6.Delete\n" );
printf("7.Reverse\n" );
printf("8.Exit\n" );
printf("Enter ur choice:\n" );
scanf("%d",&c );
switch (c) {
  case 1:append();
  break;
  case 2:prepend();
  break;
  case 3:insert();
  break;
  case 4:printf("%d\n",length() );
  break;
  case 5:display();
  break;
  case 6:Delete();
  break;
  case 7:reverse();
  break;
  case 8:exit(0);
  default:printf("Invalid choice\n" );
  break;
}
  }

}

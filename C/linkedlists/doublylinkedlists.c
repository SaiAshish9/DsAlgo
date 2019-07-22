#include <stdio.h>

struct node{
int data;
struct node* left,*right;
};
struct node* root=NULL;

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

void length(){
struct node* temp=root;
int count=0;
while(temp!=NULL){
  count++;
  temp=temp->right;
}
printf("%d\n",count );
}

void display(){
  struct node* temp=root;
  if(temp==NULL){
    printf("empty list\n" );
  }
  while(temp!=NULL){
    printf("%d--> ",temp->data);
    temp=temp->right;
  }
}

void insert(){
  struct node* temp,*p;
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




void main(){
  int c;
  while(1){
    printf("double linked lists operations:\n" );
   printf("1.Append\n");
   printf("2.Prepend\n" );
   printf("3.Insert\n" );
   printf("4.Length\n" );
   printf("5.Display\n" );
printf("6.Delete\n" );
printf("7.Exit\n" );
printf("Enter ur choice:\n" );
scanf("%d",&c );
switch (c) {
  case 1:Append();
  break;
  case 2:Prepend();
  break;
  case 3:Insert();
  break;
  case 4:printf("%d\n",Length());
  break;
  case 5:Display();
  break;
  case 6:Delete();
  break;
  case 7:exit(0);
  break;
  default:printf("Invalid choice\n" );
  break;
}
  }

}

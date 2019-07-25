#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node* link;
};
struct node* root=NULL;
int len;
void Append(void);
void Prepend(void);
void Insert(void);
void Display(void);
int Length(void);
void Delete(void);
void reverse(void);

void main() {
  int c;
  while(1){
    printf("single linked lists operations:\n" );
   printf("1.Append\n");
   printf("2.Prepend\n" );
   printf("3.Insert\n" );
   printf("4.Length\n" );
   printf("5.Display\n" );
printf("6.Delete\n" );
printf("7.Reverse\n" );

printf("8.Exit\n" );
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
  case 7:reverse();
  break;
  case 8:exit(0);

  default:printf("Invalid choice\n" );
  break;
}
  }

}

void Append() {
struct node* temp;
temp=(struct node*)malloc(sizeof(struct node));
printf("Enter node data:\n");
scanf("%d",&temp->data);
temp->link=NULL;
if(root==NULL){
  root=temp;
}
else
{
  struct node* p;
  p=root;
  while (p->link!=NULL) {
  p=p->link;
  }
  p->link=temp;
}
}
int Length(){
  int count=0;
  struct node* temp;
  temp=root;
  while(temp!=NULL){
count++;
    temp=temp->link;
  }
  return count;
}
void Display() {
  struct node* temp;
  temp=root;
  if(temp==NULL)
  {
    printf("List is empty!");
  }
  else{
    while(temp!=NULL){
  printf("%d --> ",temp->data );
      temp=temp->link;
    }
    printf("\n" );
  }
}

void Prepend(){
struct node* temp;
temp=(struct node*)malloc(sizeof(struct node));
printf("Enter node data :");
scanf("%d",&temp->data);
temp->link=NULL;
if(root==NULL){
  root=temp;
}else{
  temp->link=root;
  root=temp;
}
}

void Insert(){
struct node* temp,*p;
int loc,i=1;
printf("Enter loc to Insert\n" );
scanf("%d",&loc );
if(loc>Length()){
  printf("Not Possible!");
}else{
p=root;
while(i<loc-1){
  p=p->link;
  i++;
}
temp=(struct node*)malloc(sizeof(struct node));
printf("Enter node data :");
scanf("%d",&temp->data);
temp->link=NULL;
temp->link=p->link;
p->link=temp;
}
}

void Delete(){
struct node* temp;
int loc;
printf("Enter loc to delete\n" );
scanf("%d",&loc );
if(loc>Length()){
  printf("Not Possible!");
}else{
  struct node* p=root,*q;
  int i=1;
  while (i<loc-1) {
    p=p->link;
i++;
  }
  q=p->link;
  p->link=q->link;
  q->link=NULL;
  free(q);
}

}

void reverse(){
  int i,j,len,k,temp;
  len=Length();
  i=0;
  j=len-1;
  struct node* p,*q;
  p=root,q=root;
  while(i<j){
    k=0;
    while(k<j){
      q=q->link;
      k++;
    }
    temp=p->data;
    p->data=q->data;
    q->data=temp;
    i++;
    j--;
    p=p->link;
    q=root;
  }
}

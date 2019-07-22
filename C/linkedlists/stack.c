#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct node{
  int data;
  struct node* link;
};
struct node* top=NULL;

void push(){
  struct node* temp;
  temp=(struct node*)malloc(sizeof(struct node));
  printf("Enter node data:\n" );
  scanf("%d",&temp->data );
  temp->link=top;
  top=temp;
}

void pop(){
  struct node* temp;
  if(top==NULL){
    {printf("empty stack");}
  }else{
    temp=top;
    printf(" element is : %d\n",temp->data );
   top=top->link;
   temp->link=NULL;
   free(temp);
  }
}

void traverse(){
  struct node* temp;
  if(top==NULL){
    {printf("empty stack");}
  }else{temp=top;
while(temp!=NULL){
  printf("%d --> \n",temp->data );
  temp=temp->link;
}}}
 int main(int argc, char const *argv[]) {
char c;
push();
{pop();
traverse();}

  /* code */
  return 0;
}

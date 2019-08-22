#include <stdio.h>
void append(int new){
  struct node* newnode;
  printf("Enter a data:" );
  scanf("%d",&newnode->data);
  root->link=newnode;
  newnode->link=root->link;
   newnodecount=0;
  newnode->count+=1;
  if(root->max<new)
  root->max=new;
  else{
    root->min=new;
  }

}

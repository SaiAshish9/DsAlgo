#include<stdio.h>
#include<conio.h>

void recDisp(struct node* p){
  if(p!=NULL){
  // printf("%d",p->data);
    recDisp(p->link);
    printf("%d",p->data);
  }
}

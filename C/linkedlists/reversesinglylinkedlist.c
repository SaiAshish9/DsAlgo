#include <stdio.h>
#include <stdlib.h>

void reverse(){
  int i,j,len;
  len=length();
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

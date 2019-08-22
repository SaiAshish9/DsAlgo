#include <stdio.h>


void max_min(struct node* start){
struct node* ptr=start;
int flag=1,max,min;
while(ptr!=NULL){
  if(flag==1){
    max=ptr->link;
    min=ptr->link;
    flag=0;
  }else{
    if(max<ptr->link){
      max=ptr->link;
    }
    if(min>ptr->link){
      min=ptr->link;
    }
  }
  ptr=ptr->link;
}
printf("max: %d , min : %d \n",max,min );

}

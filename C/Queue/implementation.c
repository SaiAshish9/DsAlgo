#include <stdio.h>
#include <stdlib.h>
#define capacity 5
int queue[capacity],front=0,rear=0;

void insert(){
  if(capacity==rear){
    printf(" queue is full\n" );
  }else{
    int x;
    printf("Enter a number:\n" );
scanf("%d",&x);
queue[rear++]=x;
  }
}

void delete(){
if(front==rear){
  printf("empty queue\n" );
}else{
printf("deleted %d\n",queue[front] );
for(int i=0;i<rear;i++){
  queue[i]=queue[i+1];
}rear--;
}
}

void traverse(){
  if(front==rear){
    printf("empty queue\n" );
  }else{
for(int i=front;i<rear;i++){
  printf("%d -->",queue[i] );
}printf("\n" );
  }
}






void main(){
int c;
while(1){
  printf("Queue operations:\n" );
 printf("1.Insert\n");
 printf("2.Delete\n" );
 printf("3.Traverse\n" );
printf("4.Exit\n" );
printf("Enter ur choice:\n" );
scanf("%d",&c );
switch (c) {
  case 1:insert();
         break;
  case 2:
      delete();
      break;
  case 3:traverse();
         break;
  case 4:exit(0);
  default:printf("Invalid choice\n" );
}
  }
}

#include <stdio.h>
#include <stdlib.h>
int front=0,rear=-1,x,size=6;
int cqueue[6];
void insert(int x) {
if(front==0&&rear==5||front>0&&rear==front-1){
  printf("queue is full\n" );
}
else {if(front>0&&rear==5){
rear=0;
cqueue[rear]=x;


}else if (front==0&&rear==-1||rear!=front-1){
  cqueue[++rear]=x;
}}

}

void delete(){
int x;
  if(front==0&&rear==-1){
    printf("empty queue");
  }else if(front==rear){
x=cqueue[front];
rear=-1;
front=0;
}else if(front==size-1){
x=cqueue[front];
front=0;
  }
else{
  x=cqueue[front++];
}
}

void main(){
  int x,c;

while(1){
  printf("1.insert  2.delete 3.display 4.exit \n" );
scanf("%d",&c);
switch(c){
  case 1:  printf("Enter a element:\n" );
    scanf("%d",&x);
    insert(x);
break;
  case 2:delete();
  break;
  case 3:
  if(front==0&&rear==-1){
    printf("empty queue");
    exit(0);
  }if(front>rear){
    for(int i=0;i<rear;i++){
      printf("%d  ",cqueue[i] );}
      for(int i=front;i<6;i++){
        printf("%d  ",cqueue[i] );
  }}else{
  for(int i=front;i<6;i++){
    printf("%d  ",cqueue[i] );
  }}
break;
  case 4:exit(0);

}}
}

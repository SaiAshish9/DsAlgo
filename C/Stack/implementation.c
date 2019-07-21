#include <stdio.h>
#include <stdlib.h>
#define Capacity 5
int stack[Capacity],top=1;

int a;

 int isFull(){
  if(top==5){
  return 1;
}
  else
  {return 0;}
}
int isEmpty(){
  if(top==-1){
    return 1;
  }
  else{
    return 0;
  }
}

void Push(int x) {
if(isFull()){
  printf("stack overflow\n" );
}
else{
  top++;
  stack[top]=x;
  printf("%d pushed\n",x);
}
}
int Pop(){
  if(isEmpty()){
    return 0;
  }
  else{
    return stack[top--];
  }
}

void Peek(){
  if(isEmpty()){
    printf("stack is empty\n" );
  }
  else{
    printf("%d\n",stack[top] );
  }
}

void Traverse(){
  if(isEmpty()){
    printf("stack is empty\n" );
  }
  else{
    printf("elements : \n");
    for(int i=0;i<=top;i++){
      printf("%d\n",stack[i] );
    }
  }
}

void main(){
int c;
while(1){
  printf("single linked lists operations:\n" );
 printf("1.Pop\n");
 printf("2.Push\n" );
 printf("3.Peek\n" );
 printf("4.Traverse\n" );
printf("5.Exit\n" );
printf("Enter ur choice:\n" );
scanf("%d",&c );
switch (c) {
  case 1:{
         if(Pop()==0){
          printf("stack overflow\n" );}
         else
         printf(" popped item :%d\n",Pop());
          }
         break;
  case 2:
         printf("Enter a number to be pushed:\n");
         scanf("%d",&a);
         Push(a);
         break;
  case 3:Traverse();
         break;
  case 4:Peek();
         break;
  case 5:exit(0);
  default:printf("Invalid choice\n" );
}
  }
}

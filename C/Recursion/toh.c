#include<stdio.h>
void toh(int n,int a,int b,int c){
  if(n>0){
    toh(n-1,a,c,b);
    printf("move from %d to %d \n",a,c);
    toh(n-1,b,a,c);
  }
}

void main(){
  toh(3,1,2,3);
}

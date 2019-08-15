#include<stdio.h>

int fn(int n){
  if(n>0)
  return fn(n-1)+n;
}


int fn1(int n){
static int x=0;
  if(n>0){
x++;
  return fn1(n-1)+x;
}
}

void main(){
  printf(" %d \n",fn(5));
  printf(" %d \n",fn1(5));

}

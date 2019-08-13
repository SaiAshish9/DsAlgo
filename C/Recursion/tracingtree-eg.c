#include <stdio.h>

void fn(int n){
  if(n>0){
  // printf("%d  ",n);
  fn(n-1);
  printf("%d\n",n);
}}

int x=0;
int fn1(int n){
if(n>0){
  return fn1(n-1)+n;
}}

int fn2(int n){
if(n>0){
  x++;
  return fn2(n-1)+x;
}

}

void main(){
  fn(4);
  printf("\n%d",fn1(5));
  printf("\n%d",fn2(5));
}

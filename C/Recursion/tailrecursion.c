#include <stdio.h>

void fn(int n){
  if(n>0){
  printf("%d  ",n);
  fn(n-1);
}}//O(n) O(n)

void main(){
int i=4;
  fn(4);
while( i>0){
  printf("%d",i);
  i--;
}//O(n) O(1)
}

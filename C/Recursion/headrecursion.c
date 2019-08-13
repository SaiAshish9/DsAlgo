#include <stdio.h>

void fn(int n){
  if(n>0){
  fn(n-1);
  printf("%d  ",n);

}}

void main(){
int i=1;
  fn(4);
while( i<=4){
  printf("%d",i);
  i++;
}}

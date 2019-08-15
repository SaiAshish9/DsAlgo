#include <stdio.h>

void fn(int n){
  if(n>0){
    printf("%d  ",n);

  fn1(n-1);


}}


void fn1(int n){
  if(n>1){
    printf("%d  ",n);

  fn(n/2);


}}

void main(){
int i=1;
  fn(20);
// while( i<=4){
//   printf("%d",i);
//   i++;
// }}
}

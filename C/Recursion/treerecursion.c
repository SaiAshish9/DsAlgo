#include <stdio.h>

void fn(int n){
  if(n==0)
  return 0;
    // printf("%d  ",n);

  fn(n-1);
  printf("%d  ",n);
//121312141213121
  fn(n-1);

}

void main(){
int i=1;
  fn(4);
// while( i<=4){
//   printf("%d",i);
//   i++;
// }}
}
//54321121132112114321121132113211

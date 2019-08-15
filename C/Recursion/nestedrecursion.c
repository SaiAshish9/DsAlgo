#include <stdio.h>

int fn(int n){
  if(n>100){
return n-10;
}
else
return fn(fn(n+11));}

void main(){
int i=1;
  printf("%d",fn(95));
}

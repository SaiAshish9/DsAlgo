#include <stdio.h>

int fact(int n){
  if(n==1)
  return 1;
  return fact(n-1)*n;
}

int ncr(int n,int r){
  if(r==0||n==r){
    return 1;
  }
  return ncr(n-1,r)+ncr(n-1,r-1);
  // int t1,t2,t3;
  // t1=fact(n);
  // t2=fact(r);
  // t3=fact(n-r);
  // return t1/(t2*t3);
}

void main(){
  printf(" %d ",ncr(5,3));
}

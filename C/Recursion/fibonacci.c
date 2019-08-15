#include <stdio.h>

int fib(int n){
  int i=2,a=0,b=1,sum=0;
  if(n<=1)
  return n;
  for(i=2;i<=n;i++){
    sum=a+b;
    a=b;
    b=sum;
  }
  return sum;
}

int fib1(int n){
  if(n<=1)
  return n;
  return fib1(n-1)+fib1(n-2);
}
//memoization
int f[10];
int fib2(int n){
  if(n<=1)
  return n;
  if(f[n-2]=='\0')
  f[n-2]=fib2(n-2);
  if(f[n-1]=='\0')
  f[n-1]=fib2(n-1);
  return f[n-2]+f[n-1];
}

void main(){
  printf("%d \n",fib2(4));
}

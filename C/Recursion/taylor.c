#include <stdio.h>
#include <stdlib.h>
 double e(int x,int n){
double r;
static double p=1,f=1;
   if(n==0)
   {return 1 ;}
else{
r=e(x,n-1);
p=p*x;
f=f*n;
return r+p/f;
}
 }

void main(){
  printf(" %lf ",e(2,10));
}

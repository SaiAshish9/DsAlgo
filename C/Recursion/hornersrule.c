#include <stdio.h>
#include <stdlib.h>
 double e(double x,double n){
double s=1;
for(;n>0;n--)
{s=1+(x/n)*s;}
return s;

 }

double e1(double x,double n){
static double s=1;
if(n==0)
return s;
s=1+x/n*s;
  return e1(x,n-1);
}

void main(){
  printf(" %lf ",e1(2,10));
}

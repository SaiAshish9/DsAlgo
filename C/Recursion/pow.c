#include <stdio.h>
#include <stdlib.h>
 int pow(int m,int n){
   if(n==0)
   return 1;
   // return pow(m,n-1)*m;

if(n%2==0)
return pow(m*m,n/2);
else
return m*pow(m*m,(n-1)/2);



 }

void main(){
  printf(" %d ",pow(2,3));
}

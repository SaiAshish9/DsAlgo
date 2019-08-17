#include <stdio.h>

 void main(){
int i;
char A[]="WeLcOME2";
for(i=0;A[i]!='\0';i++){
  if(A[i]>=65&&A[i]<=90)
  A[i]+=32;
else if(A[i]>=98&&A[i]<=122)
A[i]-=32;
}
printf(" %s ",A);

 }

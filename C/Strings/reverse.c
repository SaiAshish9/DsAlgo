#include<stdio.h>


void main(){
char a[]="python";
char t;
int i,j;

for(j=0;a[j]!='\0';j++){
  
  for(i=0;i<j;i++){
    t=a[i];
    a[i]=a[j];
    a[j]=t;
  }

}
printf(" %s ",a);

}

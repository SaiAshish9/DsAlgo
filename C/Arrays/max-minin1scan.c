#include<stdio.h>
void main(){
  int a[]={5,8,3,9,6,2,10,7,-1,4};
  int i,min=a[0],max=a[0];
  for(i=1;i<10;i++){
    if(a[i]<min)
    min=a[i];
    else if(max<a[i])
    max=a[i];
  }
printf(" min = %d\n max = %d\n",min,max);
}

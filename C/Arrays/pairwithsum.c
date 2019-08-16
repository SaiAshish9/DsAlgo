#include<stdio.h>
void main(){
  int a[]={6,3,8,10,16,7,5,2,9,14};
  int h[16]={0};
  int b[]={1,3,4,5,6,8,9,10,12,14};
int i=0,j=0,k=10;
for(i=0;i<10;i++){
  for(j=i+1;j<10;j++){
    if(a[i]+a[j]==k)
printf(" %d+ %d = %d \n",a[i],a[j],k);
  }
}
printf(" -------\n");
for(i=0;i<9;i++){
  if(h[k-a[i]]!=0&&k-a[i]>0)
  printf(" %d+ %d = %d \n",a[i],k-a[i],k);
h[a[i]]++;
}
printf(" -------\n");

i=0;j=9;
while(i<j){

  if(b[i]+b[j]==k){
    printf(" %d + %d = %d\n ",b[i],b[j],k);
    i++;
    j--;
  }
  else if(b[i]+b[j]<k)
  i++;
  else
  j--;
}

}

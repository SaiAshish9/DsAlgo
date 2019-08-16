#include<stdio.h>

void main(){
  int a[]={3,6,8,8,10,12,15,15,15,20};
  int b[]={8,3,6,4,6,5,6,8,2,7};
  int j=0,i=0,count=0;
  for(i=0;i<10;i++){
    if(a[i]==a[i+1])
  {
    j=i+1;
    while(a[j]==a[i])
    j++;
    printf("%d is appearing %d times\n",a[i],j-i);
    i=j-1;
  }}
int h[30]={0};
for(i=0;i<9;i++)
{
  h[a[i]]++;
}
for(i=3;i<=20;i++){
  if(h[i]>0){
  printf("\n%d %d \n",i,h[i]);
}}

for(i=0;i<9;i++){
count=1;
if(b[i]!=-1){
for(j=i+1;j<10;j++){
  if(b[i]==b[j]){
    count++;
    b[j]=-1;
  }
}}
if(count>1)
{printf("\n%d :  %d \n",b[i],count);
}}

}

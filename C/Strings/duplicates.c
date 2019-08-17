#include<stdio.h>
void main(){
char a[]="finding";
char b[]="finding";
int h[26]={0},i;
long int k=0,x=0;
for(i=0;a[i]!='\0';i++)
{
  h[a[i]-97]++;

}
for(i=0;i<26;i++){
  if(h[i]>1){
    printf(" %c %d \n",i+97,h[i]);
  }
}
printf("----------------------\n");
for(i=0;b[i]!='\0';i++){
  x=1;
  x=x<<b[i]-97;//102-97=5<--
if(x&k>0)
{
  printf(" %c ",b[i]);
}
else
k=x|k;
}
}

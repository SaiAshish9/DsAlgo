#include<stdio.h>

void main(){
  char a[]="decimal";
  char b[]="medical";
  char x='y';
int i,h[26]={0};
for(i=0;a[i]!='\0';i++){
  h[a[i]-97]+=1;
}
for(i=0;b[i]!='\0';i++){
  h[b[i]-97]-=1;
}
for(i=0;i<26;i++){
printf("%d\n",h[i]);
  if(h[i]<0)
{  x='n';
  break;
}}
printf(" %c ",x);

}

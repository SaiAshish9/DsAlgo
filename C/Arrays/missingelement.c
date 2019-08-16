#include<stdio.h>

void main(){
  int a[9]={1,2,3,4,5,7,8,9};
  int b[5]={7,8,9,11};
  int c[9]={6,7,8,9,11,12,15};
  int h[20]={0};
  int i,sum=0,s,diff=b[0];
  for(i=0;i<9;i++){
    sum+=a[i];
  }
  s=9*10/2;
  printf("%d\n",s-sum);

for(i=0;i<5;i++)
{
  if(b[i]-i!=diff)
{  printf("ME : %d\n",i+diff);
  break;}
}

diff=c[0];
for(i=0;i<9;i++)
{
  if(c[i]-i!=diff)
{ while(diff<c[i]-i)
{  printf("ME : %d\n",i+diff);
diff++;
}
}}

for(i=0;i<9;i++){
  h[c[i]]++;
}
for(i=6;i<=15;i++){
if(h[i]==0){

  printf("\nh[i]=%d i=%d\n",h[i],i);
}
}

}

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct term{
  int coeff;
  int exp;
};


struct poly{
  int n;
  struct term *t;
}p;

void main(){
  int i,x=5,sum=0;
  printf("Enter no. of non zero terms:\n");
  scanf("%d",&p.n);
  p.t=(struct term*)malloc(sizeof(struct term));
  printf("Enter terms:\n");
for(i=0;i<p.n;i++){
  printf("Terms no: %d ",i+1);
  scanf("%d %d",&p.t[i].coeff,&p.t[i].exp);
}

for(i=0;i<p.n;i++){
  sum+=p.t[i].coeff*pow(x,p.t[i].exp);
}

printf("\n Sum : %d\n",sum);
}

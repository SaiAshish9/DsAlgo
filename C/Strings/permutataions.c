#include <stdio.h>

void perm(char s[],int k){
  static int a[10]={0};
  static char result[10];;
  int i;
  if(s[k]=='\0')
{result[k]='\0';
printf("%s\n",result);
}
else{
  for(i=0;s[i]!='\0';i++){
    if(a[i]==0){
      result[k]=s[i];
      a[i]=1;
      perm(s,k+1);
      a[i]=0;
    }
  }
}
  }
void swap(int *a,int *b){
  int t=*a;
  *a=*b;
  *b=t;
}

void perm1(char s[],int l,int h){
  int i;
  if(l==h)
  printf("%s\n",s);
  else{
    for(i=l;i<=h;i++){
      swap(&s[l],&s[i]);
      perm1(s,l+1,h);
      swap(&s[l],&s[i]);
    }
  }
}
void main(){

char s[]="ABC";
perm(s,0);
printf("-------------\n");
perm1(s,0,2);

}

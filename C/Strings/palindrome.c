#include<stdio.h>

#include<string.h>
void main(){
char a[]="python";
char t;
int i,j;
char b[10];
strcpy(a,b);
for(j=0;a[j]!='\0';j++){

  for(i=0;i<j;i++){
    t=a[i];
    a[i]=a[j];
    a[j]=t;
  }

}
if(strcmp(a,b))
printf(" Y ");
else
printf("N\n");
}

#include<stdio.h>
void main(){
char A[]="How are   u";
int i,words=1;
for(i=0;A[i]!='\0';i++)
{
if(A[i]==32&&A[i-1]==' ')
words++;
}
printf(" %d ",words);

}

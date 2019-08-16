#include<stdio.h>

struct Array {
     int A[10];    int size;    int length; };

void swap(int *a,int *b){
  int temp;
  temp=*a;
  *a=*b;

  *b=temp;

}

void diff(struct Array *Arr){
  int i=0,j=10;
while(i<j){
  while(Arr->A[i]<0)
  i++;
  while(Arr->A[j]>=0)
  j--;
  if(i<j)
  swap(&Arr->A[i],&Arr->A[j]);
}

}

void main(){
  struct Array Arr={{-6,-4,8,0,-8,-9,5,4,4,7},10,5};
  int i;
  diff(&Arr);
  for(i=0;i<10;i++){
    printf(" %d ",Arr.A[i]);
  }
}

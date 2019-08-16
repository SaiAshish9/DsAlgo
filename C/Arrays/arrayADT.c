#include<stdio.h>
struct Array {
     int A[10];    int size;    int length; };


     void Display(struct Array arr)    {
           int i;
                   printf("\nElements are\n");
           for(i=0;i<arr.length;i++)
                  printf("%d ",arr.A[i]);    }


    void Append(struct Array *arr,int x)
     {        if(arr->length<arr->size)
                arr->A[arr->length++]=x;    }



    void Insert(struct Array *arr,int index,int x)
     {    int i;
         if(index>=0 && index <=arr->length)
  {        for(i=arr->length;i>index;i--)
          arr->A[i]=arr->A[i-1];
           arr->A[index]=x;
             arr->length++;      }}


       void delete(struct Array *arr,int index)
                     {    int i;
                  if(index>=0 && index <=arr->length)
           {        for(i=index;i<arr->length;i++)
                   arr->A[i]=arr->A[i+1];
                      arr->length--;      }}


void swap(int *x,int *y){
int temp;
temp=*x;
*x=*y;
*y=temp;

}

      void ls(struct Array *arr,int x)
        {
int i;
for(i=0;i<arr->length;i++){
  if(x==arr->A[i]){
  printf("\nFound at %d\n",i);
swap(&arr->A[i],&arr->A[i-1]);

}}

        }

int bs(int a[],int l,int r,int x)
{int mid;

if(l<=r){
  mid=(l+r)/2;
  if(x==a[mid])
return mid;
else if(x<a[mid])
return bs(a,l,mid-1,x);
else
return bs(a,mid+1,r,x);
}
return -1;
}

int get(struct Array arr,int index){
  if(index>=0&&arr.length>index)
  return arr.A[index];
}


int sum(int A[],int length){
  if(length<0)
  return 0;
  return sum(A,length-1)+A[length];
}

void reverse(struct Array *arr){
  int  i,j;
//   struct Array arr1;
// arr1.length=arr.length;
// arr1.size=arr.size;
//   for(i=arr.length-1,j=0;i>=0;i--,j++)
//   {arr1.A[j]=arr.A[i];}
//   Display(arr1);
for(i=0,j=arr->length-1;i<j;i++,j--){
  int temp=arr->A[i];
  arr->A[i]=arr->A[j];
  arr->A[j]=temp;
}
}

int issorted(struct Array arr){
  int i=0;
  for(i=0;i<arr.length;i++)
  {
    if(arr.A[i]>arr.A[i+1])
    return 1;
  }return 0;
}



 int main()
 { struct Array arr1={{2,3,4,5,6},10,5};
 Append(&arr1,10);
 Insert(&arr1,0,12);
delete(&arr1,0);
  Display(arr1);
  ls(&arr1,4);
  Display(arr1);
printf("\n Found at %d  ",bs(arr1.A,0,arr1.length,4));
  Display(arr1);
printf("\n %d\n",get(arr1,0 ));

printf("\n %d\n",sum(arr1.A,arr1.length ));
reverse(&arr1);
Display(arr1);
if(issorted(arr1))
printf("\n True\n");
}

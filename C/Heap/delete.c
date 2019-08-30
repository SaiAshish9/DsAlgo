void delete(int A[],int n){
  int x,i,j;
  x=A[n];
  A[i]=A[n];
  i=1,j=2*i;
  while(j<n-1){
    if(A[j+1]>A[j])
    j=j+1;
    if(A[i]<A[j]){
      swap(A[i],A[j]);
      i=j;
      j=2*j;
    }else
    break;
  }
}

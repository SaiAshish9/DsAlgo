#include <iostream>

using namespace std;



int *apply_all(int *w,size_t x,int *y,size_t z){
  int *a{nullptr};
  a=new int[x*z];

int position{0};
for(size_t i{0};i<x;++i){
  for(size_t j{0};j<z;++j){
    a[position]=w[i]*y[j];
    ++position;
  }
}


  return a;
}

int main(){

  int array1[]{1,2,3,4,5};
  int array2[]{10,20,30};

for(auto a:array1){
  cout<<a<<endl;
}
for(auto a:array2){
  cout<<a<<endl;
}

int *results=apply_all(array1,5,array2,3);

for(int a{0};a<15;++a){
  cout<<*(results+a)<<endl;
}

delete [] results;

  return 0;
}

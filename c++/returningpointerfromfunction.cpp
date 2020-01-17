#include <iostream>
#include <cmath>

using namespace std;


int *largest_int(int *a,int *b){
  return *a>*b?a:b;
}

int *create_array(size_t size,int j=0){
  int *new_storage{nullptr};

  new_storage=new int[size];

  for(size_t i{0};i<size;++i){
    *(new_storage+i)=j;
  }
  return new_storage;
}

void display(const int *const array,size_t size){
  for(size_t i{0};i<size;++i)
  cout<<array[i]<<"  ";
  cout<<endl;
}

int main(){

int a{100},b{200};

int *largest_ptr{nullptr};

largest_ptr=largest_int(&a,&b);

cout<<*largest_ptr<<endl;


int *my_array{nullptr};

my_array=create_array(5,20);

display(my_array,5);

delete [] my_array;


  return 0;
}

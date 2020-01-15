#include <iostream>

using namespace std;

int main(){
size_t size{0};
double *temp_ptr(nullptr);

cout<<"How many temps?";
cin>>size;

temp_ptr =new double[size];

cout<<temp_ptr<<endl;

delete [] temp_ptr;

  return 0;
}

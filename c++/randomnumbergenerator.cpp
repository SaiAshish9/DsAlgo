#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <vector>

using namespace std;

int main(){

int *p;
double *q;
cout<<sizeof p<<endl<<sizeof q<<endl;

vector<string> x{"1","2","3"};
vector<string> *vector_ptr{nullptr};
vector_ptr=&x;

cout<<(*vector_ptr).at(0)<<endl;
cout<<(*vector_ptr)[1]<<endl;
cout<<(*vector_ptr).at(2)<<endl;

for(auto i:*vector_ptr)
cout<<i<<endl;

int random{};
size_t count{10};
int min{1};
int max{6};

srand(time(nullptr));

for(size_t i{1};i<=count;++i){
  random=abs(rand()*max+min);
  cout<<random<<endl;
}


  return 0;
}

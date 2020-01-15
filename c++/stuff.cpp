#include <iostream>
#include <vector>
using namespace std;


void static_local_example(){
  static int num{5000};
  num+=5000;
  cout<<num<<endl;
}

int main(){

static_local_example();
static_local_example();


for(auto c:"sai ashish")
{
  if(c==' ')
  cout<<'\t';
  else
cout<<c;
}
cout<<endl;
  // signed and unsigned exp comparison should be avoided
  vector <int> nums{10,20,30,40,50};

  for(unsigned i{0};i<nums.size();++i){
    cout<<nums.at(i)<<endl;
  }

return 0;
}

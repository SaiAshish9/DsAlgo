#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  // 1.sort

vector <int> v{2,1,3};
sort(v.begin(),v.end());
for(auto a:v){
  cout<<a<<endl;
}

// .reverse(v.begin(),v.end())
// .accumulate(v.begin(),v.end(),0)
  return 0;
}

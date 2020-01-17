#include <iostream>
#include <vector>

using namespace std;

int main(){

vector<string> example{"1","2","3"};

for(auto str:example)
       str="0";
for(auto str:example)
      cout<<str<<endl;

for(auto &str:example)
        str="0";
for(auto str:example)
    cout<<str<<endl;

int num{100};
int &ref{num};

cout<<num<<endl;
cout<<ref<<endl;

num=200;
cout<<num<<endl;
cout<<ref<<endl;

ref=300;
cout<<num<<endl;
cout<<ref<<endl;

  return 0;
}

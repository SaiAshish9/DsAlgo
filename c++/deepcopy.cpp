#include <iostream>

using namespace std;

class Deep{
private:
int *data;
public:
void display(){
  cout<<*data<<endl;
}

Deep(int d);
Deep(const Deep &d);
~Deep();
};

Deep::Deep(int d){
  data=new int;
  *data=d;
}

Deep::Deep(const Deep &x)
:Deep(*x.data){
  cout<<"constuctor copied"<<endl;
}

Deep::~Deep(){
  delete data;
  cout<<"destructor called"<<endl;
}

int main(){
  Deep obj1{100};
  obj1.display();
  Deep obj2{obj1};
  return 0;
}

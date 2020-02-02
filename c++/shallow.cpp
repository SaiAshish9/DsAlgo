#include <iostream>

using namespace std;

class Shallow{
private:
  int *data;
public:
  void set_d(int d){
    *data=d;
  }
  int get(){
    return *data;
  }
  Shallow(int d);
  Shallow(const Shallow &d);
  ~Shallow();
};

Shallow::Shallow(int d){
data=new int;
*data=d;
}

Shallow::Shallow(const Shallow &d)
:data(d.data){
cout<<"copied"<<endl;
}

Shallow::~Shallow(){
  delete data;
  cout<<"deleted "<<endl;
}


void display(Shallow s){
  cout<<s.get()<<endl;
}


int main(){

Shallow obj1{100};
display(obj1);

Shallow obj2(obj1);
obj2.set_d(1000);

  return 0;
}

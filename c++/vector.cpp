#include <iostream>
#include <vector>

using namespace std;

int main(){
const int x{3};
int total{10};
double y=static_cast<double>(total)/x;
cout<<y<<endl;


bool equals{false};
equals=1==0;;
cout<<boolalpha;
cout<<equals<<endl;

double a{12},b{11.9999999999999999999999999999};

cout<<noboolalpha;
equals=a==b;
cout<<equals<<endl;


  vector <int> vector1 (0);
  vector <int> vector2 (0);
  vector1.push_back(10);
  vector1.push_back(20);
  cout<<" After insertion "<<endl;
  cout<<vector1.at(0)<<" & "<< vector1.at(1) <<endl;
  vector2.push_back(100);
  vector2.push_back(200);
  cout<<" After insertion "<<endl;
  cout<<vector2.at(0)<<" & "<< vector2.at(1) <<endl;
  vector <vector<int>> vector_2d (0);
  vector_2d.push_back(vector1);
  vector_2d.push_back(vector2);
  cout<<vector_2d.at(0).at(0)<<endl;
  cout<<vector_2d.at(0).at(1)<<endl;
  cout<<vector_2d.at(1).at(0)<<endl;
  cout<<vector_2d.at(1).at(1)<<endl;
  vector1.at(0)=1000;
  cout<<vector_2d.at(0).at(0)<<endl;
  cout<<vector_2d.at(0).at(1)<<endl;
  cout<<vector_2d.at(1).at(0)<<endl;
  cout<<vector_2d.at(1).at(1)<<endl;
  cout<<vector1.at(0)<<" & "<< vector1.at(1) <<endl;

  return 0;
}

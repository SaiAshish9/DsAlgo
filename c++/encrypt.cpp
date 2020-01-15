#include <iostream>
#include <string>

using namespace std;

int main(){

string alphabet{"abcdefghijklmnopqrstuvwxyzABCDDEFGHIJKLMNOPQRSTUVWXYZ"};
     string key{"XYGJKLPOIUYTRBNMVGFDAXWQASDxygjklpoiuytrbnmvgfdaxwqasd"};

     cout<<"Enter a sentence : ";

string test{};
string encrypted{};

getline(cin,test);

for(auto s:test){
  size_t position=alphabet.find(s);
  if(position != string::npos){
    char new_char{key.at(position) };
    encrypted+=new_char;
    }else{
      encrypted+=s;
    }
  }


cout<<"Encrypted text : "<<endl;

cout << encrypted<<endl;

  return 0;
}

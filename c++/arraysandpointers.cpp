#include <iostream>

using namespace std;

int main(){

  int scores[]{100,200,300};

  int *score_ptr{scores};



cout<<" Array Offset"<<endl;

cout<< *(scores+1) <<endl;

cout<<" Pointer Offset"<<endl;
  cout<<*(score_ptr + 1)<<endl;


cout<<"Array Subscript"<<endl;

cout<<scores[1]<<endl;

cout<<"Pointer Subscript"<<endl;
  cout<<score_ptr[1]<<endl;

cout<< endl<<endl;

score_ptr=scores;

// cout<<(*score_ptr)++<<endl;

cout<<*score_ptr++<<endl;
cout<<*score_ptr<<endl;

string s1{"Frank"};

string *p1{&s1};

cout<<p1<<endl<<*p1<<endl;

char name[]{"sai"};

char *char_ptr1{nullptr};
char *char_ptr2{nullptr};

char_ptr1=&name[0];
char_ptr2=&name[3];

cout<<char_ptr2-char_ptr1<<endl;

  return 0;
}

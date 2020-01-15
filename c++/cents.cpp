#include <iostream>
#include <iomanip>

using namespace std;

int main(){


double x{3.125};

cout<<fixed<<setprecision(2);
cout<<x<<endl;

  const int dollar{100},quater{25},dime{10},nickel{5};
  int balance{0},a{0},b{0},c{0},d{0},e{0};


cout<<"Enter an amount in cents : ";
int cents{0};
cin>>cents;



a=cents/dollar;
balance=cents%dollar;

b=balance/quater;
balance%=quater;

c=balance/dime;
balance%=dime;

b=balance/nickel;
balance%=nickel;

e=balance;


cout<<"dollars : "<<a<<endl;
cout<<"quaters : "<<b<<endl;
cout<<"dimers : "<<c<<endl;
cout<<"nickels : "<<d<<endl;
cout<<"pennies : "<<e<<endl;
  return 0;
}

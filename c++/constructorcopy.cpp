#include <iostream>

using namespace std;

class Player{
private:
  int a;
  string b;
public:
  int get_a(){
    return a;
  }

  Player(int a=10,string b="sai");

  Player(const Player &c);
  ~Player(){
    cout<<"Destructor called"<<endl;
  }
};

Player::Player(int a,string x)
:a{a},b{x}{
  cout<<x<<endl;
}

Player::Player(const Player &source)
:a{source.a},b{source.b}{
  cout<<"constructor copied "<<endl<<a<<endl<<b<<endl;
};


void display_player(Player p){
  cout<<p.get_a()<<endl;
}


int main(){
  Player empty{0,""};
  Player new_object{empty};
  display_player(empty);
  Player frank(0,"Frank");
  return 0;
}

#include <iostream>

using namespace std;

class Player{
private :
int x{0};
std::string c{"sai"};
public:
Player();
Player(std::string y);
};

Player::Player()
:x{10},c{"sai1"}{
  cout<<"1"<<endl;
};

Player::Player(std::string y)
:x{20},c{y}{
  cout<<"2"<<endl;
}

int main(){
  Player empty;
  Player("sai2");
  return 0;
}

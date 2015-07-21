#ifndef PLAYER_h
#define PLAYER_h

#include <string>

using namespace std;

class Player{
  public:
    Player(int type);
    virtual ~Player();
    inline int getType() const; // 0:P 1:C -1:E
    inline bool operator==(const Player& rhs) const;
    virtual string getName() const = 0;
  //end public
  private:
    int type_;
  //end private
};

inline int Player::getType() const{ return type_; }
inline bool Player::operator==(const Player& rhs) const{
  return (getType() == rhs.getType());
}

#endif

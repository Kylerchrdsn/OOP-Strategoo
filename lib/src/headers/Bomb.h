/******************************************************
	Bomb.h

	This is the header file for the Bomb class.
******************************************************/
#ifndef BOMB_H
#define BOMB_H

#include"Piece.h"

class Bomb : public Piece{
  public:
    //constructors
    Bomb(Player* owner, int xPos = 0, int yPos = 0, int boardSpace = -1);
    Bomb(Player* owner, std::string filename);

    //move
    virtual Piece* move(Piece* const destination);
  //end public
};

#endif

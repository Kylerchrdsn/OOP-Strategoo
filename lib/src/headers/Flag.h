/******************************************************
	Flag.h

	This is the header file for the Flag class.
******************************************************/
#ifndef FLAG_H
#define FLAG_H

#include "Piece.h"

class Flag : public Piece{
  public:
    //constructors
    Flag(Player* owner, int xPos = 0, int yPos = 0, int boardSpace = -1);
    Flag(Player* owner, std::string filename);

    //move
    virtual Piece* move(Piece* const destination);
  //end public
};

#endif

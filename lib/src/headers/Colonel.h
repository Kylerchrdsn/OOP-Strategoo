/******************************************************
	Colonel.h

	This is the header file for the Colonel class.
******************************************************/
#ifndef COLONEL_H
#define COLONEL_H

#include "Piece.h"

class Colonel : public Piece{
  public:
    //constructors
    Colonel(Player* owner, int xPos = 0, int yPos = 0, int boardSpace = -1);
    Colonel(Player* owner, std::string filename);

    //move
    virtual Piece* move(Piece* const destination);
  //end public
};

#endif

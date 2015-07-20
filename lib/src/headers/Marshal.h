/******************************************************
	Marshal.h

	This is the header file for the Marshal class.
******************************************************/
#ifndef MARSHAL_H
#define MARSHAL_H

#include "Piece.h"

class Marshal : public Piece{
  public:
    //constructors
    Marshal(Player* owner, int xPos = 0, int yPos = 0, int boardSpace = -1);
    Marshal(Player* owner, std::string filename);

    //move
    virtual Piece* move(Piece* const destination);
  //end public
};

#endif

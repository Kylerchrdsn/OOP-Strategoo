/******************************************************
	Lieutenant.h

	This is the header file for the Lieutenant class.
******************************************************/
#ifndef LIEUTENANT_H
#define LIEUTENANT_H

#include "Piece.h"

class Lieutenant : public Piece
{
public:
	//constructors
    Lieutenant(Player* owner, int xPos = 0, int yPos = 0, int boardSpace = -1);
	Lieutenant(Player* owner, std::string filename);

	//move
	virtual Piece* move(Piece* const destination);
};

#endif

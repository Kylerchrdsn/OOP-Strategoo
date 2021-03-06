/******************************************************
	Spy.h

	This is the header file for the Spy class.
******************************************************/
#ifndef SPY_H
#define SPY_H

#include "Piece.h"

class Spy : public Piece
{
public:
	//constructors
    Spy(Player* owner, int xPos = 0, int yPos = 0, int boardSpace = -1);
	Spy(Player* owner, std::string filename);

	//move
	virtual Piece* move(Piece* const destination);
};

#endif

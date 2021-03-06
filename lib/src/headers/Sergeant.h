/******************************************************
	Sergeant.h

	This is the header file for the Sergeant class.
******************************************************/
#ifndef SERGEANT_H
#define SERGEANT_H

#include "Piece.h"

class Sergeant : public Piece
{
public:
	//constructors
    Sergeant(Player* owner, int xPos = 0, int yPos = 0, int boardSpace = -1);
	Sergeant(Player* owner, std::string filename);

	//move
	virtual Piece* move(Piece* const destination);
};

#endif

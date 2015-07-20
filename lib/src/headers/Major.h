/******************************************************
	Major.h

	This is the header file for the Major class.
******************************************************/
#ifndef MAJOR_H
#define MAJOR_H

#include "Piece.h"
#include <string>

class Major : public Piece
{
public:
	//constructors
    Major(Player* owner, int xPos = 0, int yPos = 0, int boardSpace = -1);
	Major(Player* owner, std::string filename);

	//move
	virtual Piece* move(Piece* const destination);
};

#endif

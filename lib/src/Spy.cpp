/******************************************************
	Spy.cpp

	This is the implementation file for the Spy 
	class.
******************************************************/

#include "headers/Spy.h"

Spy::Spy(Player* owner, int xPos, int yPos, int boardSpace) : Piece(owner, xPos, yPos, "lib/images/spy.png")
{
	setBoardSpace(boardSpace);
	setRank(1);
}

//*****************************************************
Spy::Spy(Player* owner, std::string filename) : Piece(owner, 0, 0, filename.c_str())
{
	setBoardSpace(-1);
	setRank(1);
}

//*****************************************************
Piece* Spy::move(Piece* const destination)
{
	//if the piece is an emptyspace
	if(destination->getRank() == 0)
	{
		swapLocation(destination);

		return destination;
	}
	//else if the piece is the flag
	else if(destination->getRank() == 12)
	{
		swapLocation(destination);

		return this;
	}
	//else if the piece is a marshal
	else if(destination->getRank() == 10)
	{
		swapLocation(destination);

		return this;
	}
	//else need to battle pieces to the death
	else
	{
		if(*this > *destination)
		{
			swapLocation(destination);

			return this;
		}
		else if(*this < *destination)
		{
			return destination;
		}
		else
		{
			//draw
			return 0;
		}
	}
}

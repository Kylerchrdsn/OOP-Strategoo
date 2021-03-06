/******************************************************
	Marshal.cpp

	This is the implementation file for the Marshal
	class.
******************************************************/

#include "headers/Marshal.h"

Marshal::Marshal(Player* owner, int xPos, int yPos, int boardSpace) : Piece(owner, xPos, yPos, "lib/images/marshal.png")
{
	setBoardSpace(boardSpace);
	setRank(10);
}

//*****************************************************
Marshal::Marshal(Player* owner, std::string filename) : Piece(owner, 0, 0, filename.c_str())
{
	setBoardSpace(-1);
	setRank(10);
}

//*****************************************************
Piece* Marshal::move(Piece* const destination)
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

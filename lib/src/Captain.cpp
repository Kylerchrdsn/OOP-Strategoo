/******************************************************
	Captain.cpp

	This is the implementation file for the Captain
	class.
******************************************************/
#include "headers/Captain.h"

Captain::Captain(Player* owner, int xPos, int yPos, int boardSpace) : Piece(owner, xPos, yPos, "lib/images/captain.png"){
	setBoardSpace(boardSpace);
	setRank(6);
}
//*****************************************************
Captain::Captain(Player* owner, std::string filename) : Piece(owner, 0, 0, filename.c_str())
{
	setBoardSpace(-1);
	setRank(6);
}
//*****************************************************
Piece* Captain::move(Piece* const destination)
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

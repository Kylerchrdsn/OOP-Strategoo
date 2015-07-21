/******************************************************
	Scout.cpp

	This is the implementation file for the Scout
	class.
******************************************************/

#include "headers/Scout.h"

Scout::Scout(Player* owner, int xPos, int yPos, int boardSpace) : Piece(owner, xPos, yPos, "lib/images/scout.png")
{
	setBoardSpace(boardSpace);
	setRank(2);
}

//*****************************************************
Scout::Scout(Player* owner, std::string filename) : Piece(owner, 0, 0, filename.c_str())
{
	setBoardSpace(-1);
	setRank(2);
}

//*****************************************************
Piece* Scout::move(Piece* const destination){
	//if the piece is an emptyspace
	if(destination->getRank() == 0){
		swapLocation(destination);
		return destination;
	}else if(destination->getRank() == 12){ // else if the piece is the flag
		swapLocation(destination);
		return this;
	}else{ // else need to battle pieces to the death
		if(*this > *destination){
			swapLocation(destination);
			return this;
		}else if(*this < *destination){
			return destination;
		}else{
			//draw
			return 0;
		}
	}
}


/******************************************************
	EmptySpace.cpp

	This is the implementation file for the EmptySpace
	class.
******************************************************/

#include "headers/EmptySpace.h"

//*****************************************************
EmptySpace::EmptySpace(int xPos, int yPos, int boardSpace) : Piece(NULL, xPos, yPos){
	setBoardSpace(boardSpace);
	setRank(0);
}
//can't move!!!!111oneone
//*****************************************************
Piece* EmptySpace::move(Piece* const destination){ return 0; }


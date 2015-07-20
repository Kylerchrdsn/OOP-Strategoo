/******************************************************
	Flag.cpp

	This is the implementation file for the Flag
	class.
******************************************************/

#include "headers/Flag.h"

//*****************************************************
Flag::Flag(Player* owner, int xPos, int yPos, int boardSpace) : Piece(owner, xPos, yPos, "lib/images/flag.png"){
	setBoardSpace(boardSpace);
	setRank(12);
}
//*****************************************************
Flag::Flag(Player* owner, std::string filename) : Piece(owner, 0, 0, filename.c_str()){
	setBoardSpace(-1);
	setRank(12);
}
//*****************************************************
Piece* Flag::move(Piece* const destination){ return 0; }


/******************************************************
	Bomb.cpp

	This is the implementation file for the Bomb
	class.
******************************************************/
#include "headers/Bomb.h"

Bomb::Bomb(Player* owner, int xPos, int yPos, int boardSpace) : Piece(owner, xPos, yPos, "lib/images/bomb.png"){
	setBoardSpace(boardSpace);
	setRank(11);
}
//*****************************************************
Bomb::Bomb(Player* owner, std::string filename) : Piece(owner, 0, 0, filename.c_str()){
	setBoardSpace(-1);
	setRank(11);
}
//bombs can't move!!!!!111111oneoneone
//*****************************************************
Piece* Bomb::move(Piece* const destination){ return 0; }

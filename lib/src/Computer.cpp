/******************************************************
	Computer.cpp

	This is the implementation file for the Computer
	class.
******************************************************/

#include <cstdlib>
#include <ctime>
#include "headers/Computer.h"

//*****************************************************
Computer::Computer() : Player(1){} //nothing to do
//*****************************************************
void Computer::addPiece(Piece* const piece){
	if(piece != 0){ pieces.push_back(piece); }
}
//*****************************************************
void Computer::clearPiece(const int boardSpace){
	//iterator
	std::vector<Piece*>::iterator iter = pieces.begin();
	//found boolean
	bool found = false;

	while(!found && iter != pieces.end()){
		if((*iter)->getBoardSpace() == boardSpace){
			found = true;
			pieces.erase(iter);
		}

		if(!found){
			iter++;
		}
	}
}
//*****************************************************
Piece* Computer::findPieceAtPosition(const int position){ return pieces[position]; }
//*****************************************************
void Computer::setPieces(){
	std::vector<int> vect;              // vector to hold board spaces
	std::vector<Piece*>::iterator iter; // iterator
	int i = 0;                          // counter
	srand(unsigned(time(0)));           // seed timer

	for(int x = 0; x < 40; x++){ vect.push_back(x); }

	//shuffle vector
	std::random_shuffle(vect.begin(), vect.end());

	//assign pieces board space and rendering position
	for(iter = pieces.begin(); iter != pieces.end(); iter++){
		(*iter)->setBoardSpace(vect.at(i)); // assign board space
		i++;                                // increment

		//assign rendering position
		if((*iter)->getBoardSpace() < 10){
			(*iter)->setYPos(0);
			(*iter)->setXPos(200 + ((*iter)->getBoardSpace() * 60));
		}else if((*iter)->getBoardSpace() < 20){
			(*iter)->setYPos(60);
			(*iter)->setXPos(200 + (((*iter)->getBoardSpace() - 10) * 60));
		}else if((*iter)->getBoardSpace() < 30){
			(*iter)->setYPos(120);
			(*iter)->setXPos(200 + (((*iter)->getBoardSpace() - 20) * 60));
		}else{
			(*iter)->setYPos(180);
			(*iter)->setXPos(200 + (((*iter)->getBoardSpace() - 30) * 60));
		}
	}
}


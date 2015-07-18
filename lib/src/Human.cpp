/******************************************************
	Human.cpp

	This is the implementation file for the Human
	class.
******************************************************/
#include "headers/Human.h"

//*****************************************************
Human::Human(){
	setName(" ");
	stats = new Statistics();
}
//*****************************************************
Human::Human(std::string& currentPlayer){
	setName(currentPlayer);
	stats = new Statistics();
	stats->load(currentPlayer);
}
//*****************************************************
Human::~Human(){ delete stats; }
//*****************************************************
void Human::addPiece(Piece* const piece){
	if(piece != 0){
		pieces.push_back(piece);
	}
}
//*****************************************************
void Human::clearPiece(const int boardSpace){
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
Piece* Human::findPieceAtPosition(const int position){
	return pieces[position];
}
//*****************************************************
Piece* Human::findUnplacedPiece(const int buttonRank){
	//temp piece
	Piece* temp = 0;
	//iterator
	std::vector<Piece*>::iterator iter = pieces.begin();
	//found boolean
	bool found = false;

	while(!found && iter != pieces.end()){
		if((*iter)->getRank() == buttonRank && (*iter)->getBoardSpace() == -1){
			temp = *iter;
			found = true;
		}

		if(!found){
			iter++;
		}
	}

	return temp;
}
//*****************************************************
void Human::setStatisticsSprites() const{ stats->setSprites(); }
//*****************************************************
bool Human::loadStatistics() const{ return (stats->load(name)); }
//*****************************************************
bool Human::saveStatistics() const{ return (stats->save(name)); }
//*****************************************************
void Human::displayStatistics(SDL_Surface* background) const{ stats->display(background); }

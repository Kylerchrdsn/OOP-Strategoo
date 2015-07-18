/******************************************************
	Human.h

	This is the header file for the Human class.
******************************************************/
#ifndef HUMAN_H
#define HUMAN_H

#include "SDL/SDL.h"
#include <string>
#include <vector>
#include "Statistics.h"
#include "Piece.h"
#include "Player.h"

using namespace std;

class Human : public Player
{
  public:
    //constructors and destructor
    Human();
    Human(std::string& currentPlayer);
    ~Human();

    //setters
    inline void setName(const std::string& newPlayer);
    inline void setGamesPlayed(int input) const;
    inline void setGamesWon(const int input) const;
    inline void setGamesLost(const int input) const;
    inline void setFlagsCaptured(const int input) const;
    inline void setCapturedFlags(const int input) const;
    inline void setTimesExtinct(const int input) const;
    inline void setGenocide(const int input) const;

    //collection functions
    void addPiece(Piece* const piece);
    void clearPiece(const int boardSpace);
    inline void clearPieces();
    Piece* findUnplacedPiece(const int buttonRank);
    Piece* findPieceAtPosition(const int position);
    inline int getNumPieces() const;

    //statistics functions
    void setStatisticsSprites() const;
    bool loadStatistics() const;
    bool saveStatistics() const;
    void displayStatistics(SDL_Surface* background) const;
  //end public

  private:
    //player name
    std::string name;
    //collection of pieces
    std::vector<Piece*> pieces;
    //statistics
    Statistics* stats;
  //end private
};

//*****************************************************
inline void Human::setName(const std::string& newPlayer){ name = newPlayer; }
//*****************************************************
inline void Human::setGamesPlayed(const int input) const{ stats->setGamesPlayed(input); }
//*****************************************************
inline void Human::setGamesWon(const int input) const{ stats->setGamesWon(input); }
//*****************************************************
inline void Human::setGamesLost(const int input) const{ stats->setGamesLost(input); }
//*****************************************************
inline void Human::setFlagsCaptured(const int input) const{ stats->setFlagsCaptured(input); }
//*****************************************************
inline void Human::setCapturedFlags(const int input) const{ stats->setCapturedFlags(input); }
//*****************************************************
inline void Human::setTimesExtinct(const int input) const{ stats->setTimesExtinct(input); }
//*****************************************************
inline void Human::setGenocide(const int input) const{ stats->setGenocide(input); }
//*****************************************************
inline void Human::clearPieces(){ pieces.clear(); }
//*****************************************************
inline int Human::getNumPieces() const{ return pieces.size(); }
#endif

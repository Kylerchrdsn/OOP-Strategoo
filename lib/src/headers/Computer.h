/******************************************************
	Computer.h

	This is the header file for the Computer class.
******************************************************/
#ifndef COMPUTER_H
#define COMPUTER_H

#include <vector>
#include <algorithm>
#include "Piece.h"
#include "Player.h"

class Computer : public Player{
  public:
    //constructor and destructor
    Computer();
    //collection functions
    void addPiece(Piece* const piece);
    void clearPiece(const int boardSpace);
    inline void clearPieces();
    Piece* findPieceAtPosition(const int position);
    inline int getNumPieces() const;
    //piece functions
    void setPieces();
    virtual inline std::string getName() const;
  //end public

  private:
    //collection of pieces
    std::vector<Piece*> pieces;
  //end private
};
//*****************************************************
inline void Computer::clearPieces(){ pieces.clear(); }
//*****************************************************
inline int Computer::getNumPieces() const{ return pieces.size(); }
//*****************************************************
inline std::string Computer::getName() const{ return " "; }

#endif

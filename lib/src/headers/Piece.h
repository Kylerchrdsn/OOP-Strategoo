/******************************************************
	Piece.h

	This is the header file for the Piece class.
******************************************************/
#ifndef PIECE_H
#define PIECE_H

#include <string>
#include "Sprite.h"
#include "Player.h"

class Piece{
  public:
    // Constructors //
    Piece(Player* owner, const int x = 0, const int y = 0);
    Piece(Player* owner, const int x, const int y, const std::string& filename);
    // Destructor //
    virtual ~Piece();
    // Getters and setters //
    inline int         getRank() const;
    inline int         getBoardSpace() const;
    void               setRank(const int rank);
    inline int         getXPos() const;
    inline void        setXPos(const int xPos) const;
    inline int         getYPos() const;
    inline void        setYPos(const int yPos) const;
    void               setBoardSpace(const int boardSpace);
    inline bool        getIsSelected() const;
    inline void        setIsSelected(const bool selected);
    Player*            getOwner() const;
    void               setOwner(Player* owner);
    inline std::string getName() const;
    inline void        setName(const std::string& name);
    // Piece functions //
    void swapLocation(Piece* const other);
    // Input logic, and rendering //
    void                handleInput(SDL_Event& gEvent);
    virtual             Piece* move(Piece* const destination) = 0;
    inline virtual void show(SDL_Surface* const destination) const;
    // Operator overloads //
    inline bool operator==(const Piece& piece) const;
    inline bool operator!=(const Piece& piece) const;
    inline bool operator<(const Piece& piece) const;
    inline bool operator>(const Piece& piece) const;
  //end public

  private:
    // Image //
    Sprite* pieceImage;
    // Boardspace, rank, and owner //
    int boardSpace_,
        rank_;
    Player* owner_; // 0 for player, 1 for computer, -1 for emptyspace
    // isSelected boolean //
    bool isSelected;
    // Name //
    std::string name_;
  //end private
};
//*****************************************************
inline int Piece::getRank() const{ return rank_; }
//*****************************************************
inline int Piece::getBoardSpace() const{ return boardSpace_; }
//*****************************************************
inline int Piece::getXPos() const{ return pieceImage->getXPos(); }
//*****************************************************
inline void Piece::setXPos(const int xPos) const{ pieceImage->setXPos(xPos); }
//*****************************************************
inline int Piece::getYPos() const{ return pieceImage->getYPos(); }
//*****************************************************
inline void Piece::setYPos(const int yPos) const{ pieceImage->setYPos(yPos); }
//*****************************************************
inline bool Piece::getIsSelected() const{ return isSelected; }
//*****************************************************
inline void Piece::setIsSelected(const bool selected){ isSelected = selected; }
//*****************************************************
inline Player* Piece::getOwner() const{ return owner_; }
//*****************************************************
inline std::string Piece::getName() const{ return name_; }
//*****************************************************
inline void Piece::setName(const std::string& name){ name_ = name; }
//*****************************************************
inline void Piece::show(SDL_Surface* const destination) const{ pieceImage->show(destination); }
//*****************************************************
inline bool Piece::operator==(const Piece& piece) const{ return getRank() == piece.getRank(); }
//*****************************************************
inline bool Piece::operator!=(const Piece& piece) const{ return !(*this == piece); }
//*****************************************************
inline bool Piece::operator<(const Piece& piece) const{ return getRank() < piece.getRank(); }
//*****************************************************
inline bool Piece::operator>(const Piece& piece) const{ return getRank() > piece.getRank(); }
#endif

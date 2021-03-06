/******************************************************
	Selector.cpp

	This is the implementation file for the Selector
	class.
******************************************************/

#include "headers/Selector.h"

Selector::Selector()
{
	selectorImage = new Sprite();

	selectorImage->load("lib/images/selector.png");
	selectorImage->setXPos(260);
	selectorImage->setYPos(237);

	setChoice(0);
	setMoved(false);
}

//*****************************************************
Selector::~Selector()
{
	delete selectorImage;
}

//*****************************************************
void Selector::setChoice(const int choice)
{
	//choice must be 0 or 1
	if(choice == 0 || choice == 1)
	{
		choice_ = choice;
	}
}

//*****************************************************
void Selector::reset()
{
	setChoice(1);
	setMoved(true);
}

//*****************************************************
void Selector::handleInput(SDL_Event& gEvent)
{
	if(gEvent.type == SDL_KEYDOWN)
	{
		//if the up key was pressed
		if(gEvent.key.keysym.sym == SDLK_UP)
		{
			setMoved(true);
		}
		//if the down key was pressed
		else if(gEvent.key.keysym.sym == SDLK_DOWN)
		{
			setMoved(true);
		}
	}
}

//*****************************************************
bool Selector::move()
{
	//if the selector was moved
	if(isMoved)
	{
		if(getChoice() == 0)
		{
			setChoice(1);

			selectorImage->setYPos(290);

			setMoved(false);
		}
		else
		{
			setChoice(0);

			selectorImage->setYPos(237);

			setMoved(false);
		}

		return true;
	}

	return false;
}

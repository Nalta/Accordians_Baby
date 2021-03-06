#ifndef ACCORD_H
#define ACCORD_H

#include <iostream>
#include <vector>
#include "card.h"
#include "deck.h"

class Accordion
{
public:
	Accordion();
	Accordion(Deck deck);
	void sketch();
	void spread(Deck deck);
	void scrollLeft();
	void scrollRight();
	bool cardCheck(int target);
	bool cardCheck(int start, int target);
	void moveOne();
	void moveThree();
	int numCardsLeft();
	bool validMovesLeft();
	const Card* checkOne();
	const Card* checkThree();
	int getCardsRemaining();
	void clear() {cards.clear();}
	friend class Game;
	void undo();
	bool canUndo() {return !trash.empty();}

private:
	int cursor;
	std::vector<Card> cards;
	std::vector<Card> trash;
	int trashIndex;

};

#endif
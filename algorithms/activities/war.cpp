#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Card {
	//TODO: Implement your Card here
public:
	bool operator< (const Card &other) {
		/**
		 * Tip: In this function, return true if the current card
		 * is less than `other` (e.g. if you have an int called rank,
		 * you would write:
		 *
		 * return (rank < other.rank);
		 *
		 * Then, in your main code, you can use the less-than operator to compare
		 * cards:
		 *
		 * Card card1, card2;
		 * //...
		 * if (card1 < card2) {
		 *     //...
		 * }
		 *
		 * Because this is a member function, you can access the private member
		 * variables of `other`.
		 */
	}
};

class Player {
	//TODO: Implement your Player here
};

//*** DO NOT CHANGE THIS CODE ***
class Deck {
	queue<const Card *> m_deck;

public:
	void push (const Card &card) { m_deck.push(&card); }
	const Card &top () const { return m_deck.front(); }
	const Card &pop ();
};

//TODO: Implement your driver code here
int main () {

}

const Card& Deck::pop () {
	const Card *top = m_deck.front();
	m_deck.pop();
	return *top;
}

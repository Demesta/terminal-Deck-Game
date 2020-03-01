
#ifndef CPP_PROJECT__PLAYER_H_
#define CPP_PROJECT__PLAYER_H_

#include <list>

#include "GreenCard.h"
#include "Holding.h"
#include "Personality.h"
#include "DeckBuilder.h"

class Player
{
  private:
    int player_number;  //to know which player's turn is

    list<GreenCard*>* fateDeck;
    list<BlackCard*>* dynastyDeck;  //holdings and personalities
    list<GreenCard*> hand;
    list<Holding*> holdings;
    list<Personality*> army;

    int honour;
    int money;
    int initialDefence;
    int numberOfProvinces;

    DeckBuilder deck;

  public:
    Player(int);
    int GetPlayerNumber() const;
    list<GreenCard *> *GetFateDeck() const;
    list<BlackCard *> *GetDynastyDeck() const;

};

#endif //CPP_PROJECT__PLAYER_H_

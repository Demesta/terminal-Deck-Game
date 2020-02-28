
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
    int player_number;    //to know which player's turn is
    int honour;
    int money;
    int initialDefence;
    int numberOfProvinces;

    list<GreenCard*>* fateDeck;   //items and followers
    list<BlackCard*>* dynastyDeck;  //holdings and personalities
    list<GreenCard*> hand;
    list<Holding*> holdings;
    list<Personality*> army;

    DeckBuilder deck;

  public:
    Player(int);
};

#endif //CPP_PROJECT__PLAYER_H_

#include "Player.h"

Player::Player(int n)
{
    player_number = n;

    fateDeck = deck.createFateDeck();     //initializing and shuffling decks
    deck.deckShuffler(fateDeck);

    dynastyDeck = deck.createDynastyDeck();
    deck.deckShuffler(dynastyDeck);

}
int Player::GetPlayerNumber() const
{
    return player_number;
}
list<GreenCard *> *Player::GetFateDeck() const
{
    return fateDeck;
}
list<BlackCard *> *Player::GetDynastyDeck() const
{
    return dynastyDeck;
}

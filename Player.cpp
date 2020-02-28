#include "Player.h"

Player::Player(int n)
{
    player_number = n;
    
    deck = DeckBuilder();

    fateDeck = deck.createFateDeck();     //initializing and shuffling decks
    deck.deckShuffler(fateDeck);

    dynastyDeck = deck.createDynastyDeck();
    deck.deckShuffler(dynastyDeck);

}
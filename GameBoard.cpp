#include "GameBoard.h"
#include "Player.h"
#include <list>


GameBoard::GameBoard()
{
    cout<<"The GameBoard is set\n";
}

void GameBoard::printGameStatistics()
{
    cout<<"Current Game statistics:\n";
    cout<<"This is round number "<<GetRound()<<"\n";
    cout<<"There are currently " << players_list.size()<<" Players in the game\n";

    for(auto it = players_list.begin(); it != players_list.end(); it++)     //prints number of cards for each player
    {
        cout<<"Player number "<< (*it)->GetPlayerNumber()<<" has "<<(*it)->GetFateDeck()->size()<<" cards in Fate Deck ";
        cout<<"and "<<(*it)->GetDynastyDeck()->size()<<" cards in Dynasty Deck\n";
    }

//    for(auto it = players_list.begin(); it != players_list.end(); it++)    //code to check card names
//    {
//        cout<<"Player number "<< (*it)->GetPlayerNumber()<<" has the following green cards:\n";
//
//        list<GreenCard *>::iterator a = (*it)->GetFateDeck()->begin();
//        while(a != (*it)->GetFateDeck()->end())
//        {
//            cout<<(*a)->GetName()<<"\n";
//            a++;
//        }
//    }
}

void GameBoard::initializeGameBoard(int n) //n is number of players
{
    SetRound(1);

    for(int i = 1 ; i<=n ; i++)
    {
        Player* p;
        p = new Player(i);   //constructor for Player that also gives a number to the Player
                         //Inside the constructor the DeckBuilder is also called to initialize decks
        
        this->players_list.push_back(p);
    }

    this->printGameStatistics();
}
void GameBoard::SetRound(int round)
{
    GameBoard::round = round;
}
int GameBoard::GetRound() const
{
    return round;
}

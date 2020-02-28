#include "GameBoard.h"
#include "Player.h"


GameBoard::GameBoard()
{
    cout<<"The GameBoard is set\n";
}

GameBoard::printGameStatistics()
{
    cout<<"Current Game statistics:\n";
    cout<<"There are currently "players_list.length()<<" Players in the game\n";

}


GameBoard::initializeGameBoard(int n) //n is number of players
{
    for(int i = 1 ; i<n ; i++)
    {
        Player* p;
        p = Player(i);   //constructor for Player that also gives a number to the Player 
                         //Inside the constructor the DeckBuilder is also called to initialize decks
        
        this.players_list.push_back(p);             
    }

    this.printGameStatistics();
}
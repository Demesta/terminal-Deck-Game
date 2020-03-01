#include <fstream>
#include <cstdio>
#include <iostream>
#include <ctime>
#include <list>
#include <cstdlib>
#include <vector>
#include <sstream>
#include <string>

#include "Player.h"
#include "Card.h"

using namespace std;

class GameBoard
{
  private:
    list<Player*> players_list;
    list<Card*> cards_list;
    int round;
  public:
    GameBoard();
    void initializeGameBoard(int);
    void printGameStatistics();
    void gameplay();
    int GetRound() const;
    void SetRound(int round);
};





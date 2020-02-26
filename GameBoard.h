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
    list<Player*> players_list;
    list<Card*> cards_list;

    GameBoard();
    void printGameStatistics();
    void gameplay();
};





#include <iostream>
#include "DeckBuilder.h"
#include "GameBoard.h"

using namespace std;

int main()
{
    cout<< "                                  |>>>\n"
           "                                  |\n"
           "                    |>>>      _  _|_  _         |>>>\n"
           "                    |        |;| |;| |;|        |\n"
           "                _  _|_  _    \\\\.    .  /    _  _|_  _\n"
           "               |;|_|;|_|;|    \\\\:. ,  /    |;|_|;|_|;|\n"
           "               \\\\..      /    ||;   . |    \\\\.    .  /\n"
           "                \\\\.  ,  /     ||:  .  |     \\\\:  .  /\n"
           "                 ||:   |_   _ ||_ . _ | _   _||:   |\n"
           "                 ||:  .|||_|;|_|;|_|;|_|;|_|;||:.  |\n"
           "                 ||:   ||.    .     .      . ||:  .|\n"
           "                 ||: . || .     . .   .  ,   ||:   |       \\,/\n"
           "                 ||:   ||:  ,  _______   .   ||: , |            /`\\\n"
           "                 ||:   || .   /+++++++\\    . ||:   |\n"
           "                 ||:   ||.    |+++++++| .    ||: . |\n"
           "              __ ||: . ||: ,  |+++++++|.  . _||_   |\n"
           "     ____--`~    '--~~__|.    |+++++__|----~    ~`---,              ___\n"
           "-~--~                   ~---__|,--~'                  ~~----_____-~'   `~----~~";

    cout<<"\n_____________________________________________________________________________________\n";

    int players_num;
    //TODO NA TO KANO
    cout<<"How many players? Choose from 2 to 8:";       //Players choice
    cin>>players_num;

    while(1)       //check if valid number
    {
        if(players_num > 8)
        {
            cout<<"Error: Too many players!\n";
            return 0;
        }
        else if(players_num < 2)
        {
            cout<<"Error: Needs to be at least 1 player!\n";
            return 0;
        }
        else    //Code for valid number
        {
            GameBoard gameboard;          //create gameboard

            gameboard.initializeGameBoard(players_num);   //initialize players and decks

            return 0;
        }
    }
}

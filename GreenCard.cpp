#include "GreenCard.h"

GreenCard::GreenCard(string s) : Card(s){}

const string &GreenCard::GetCardText() const
{
    return cardText;
}

#include "Card.h"
#include "Utils.h"

Card::Card(string s)
{
    name = s;
}
void Card::SetName(const string &name)
{
    Card::name = name;
};

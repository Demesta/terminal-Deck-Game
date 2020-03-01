#include "Card.h"
#include "Utils.h"

Card::Card(string s)
{
    name = s;
}
void Card::SetName(const string &name)
{
    Card::name = name;
}
const string &Card::GetName() const
{
    return name;
};

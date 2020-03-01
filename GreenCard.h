#ifndef CPP_PROJECT__GREENCARD_H_
#define CPP_PROJECT__GREENCARD_H_

#include "Card.h"

class GreenCard : public Card
{
  private:
    int attackBonus;
    int defenceBonus;
    int minimumHonour;
    string cardText;
    int effectCost;
    int durability;

  public:
    GreenCard(string);
    int effectBonus();
    const string &GetCardText() const;
};

#endif //CPP_PROJECT__GREENCARD_H_

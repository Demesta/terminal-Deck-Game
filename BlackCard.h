#ifndef CPP_PROJECT__BLACKCARD_H_
#define CPP_PROJECT__BLACKCARD_H_


#include "Card.h"

class BlackCard : public Card
{
  private:
    bool isReleaved;

  public:
    BlackCard(string);
};

#endif //CPP_PROJECT__BLACKCARD_H

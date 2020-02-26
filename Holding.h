#ifndef CPP_PROJECT__HOLDING_H_
#define CPP_PROJECT__HOLDING_H_

#include "BlackCard.h"

class Holding :public BlackCard
{
  private:
    int harvestValue;
  public:
    Holding(string);
    ~Holding();
};

class Stronghold :public Holding
{
  private:
    int honour = 5;
    int harvest = 5;
    int initialDefence = 5;

  public:
    Stronghold(string s) : Holding(s){};
};

class Plain :public Holding
{
  private:
    int cost = 2;
    int harvest = 2;
  public:
    Plain(string s) : Holding(s){};
};

class Mine :public Holding
{
  private:
    int cost = 5;
    int harvest = 3;
  public:
    Mine(string s) : Holding(s){};

};

class GoldMine :public Holding
{
  private:
    int cost = 7;
    int harvest = 5;
  public:
    GoldMine(string s) : Holding(s){};
};

class CrystalMine :public Holding
{
  private:
    int cost = 12;
    int harvest = 6;
  public:
    CrystalMine(string s) : Holding(s){};
};

class Farmland :public Holding
{
  private:
    int cost = 3;
    int harvest = 4;
  public:
    Farmland(string s) : Holding(s){};
};

class GiftsandFavour :public Holding
{
  private:
    int cost = 2;
    int harvest = 2;
  public:
    GiftsandFavour(string s) : Holding(s){};
};

#endif //CPP_PROJECT__HOLDING_H_

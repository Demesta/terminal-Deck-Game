
#ifndef CPP_PROJECT__ITEM_H_
#define CPP_PROJECT__ITEM_H_

#include "GreenCard.h"

class Item : public GreenCard
{
  public:
    Item(string);
};

class Katana :public Item
{
  private:
    int cost = 0;
    int attack_bonus = 2;
    int defence_bonus = 0;
    int minimum_honour = 1;
    int effect_bonus = 1;
    int effect_cost = 2;
    int durability = 3;
  public:
    Katana(string s) : Item(s){};
};

class Spear :public Item
{
  private:
    int cost = 0;
    int attack_bonus = 0;
    int defence_bonus = 2;
    int minimum_honour = 1;
    int effect_bonus = 1;
    int effect_cost = 2;
    int durability = 3;
  public:
    Spear(string s) : Item(s){};
};

class Bow :public Item
{
  private:
    int cost = 2;
    int attack_bonus = 2;
    int defence_bonus = 2;
    int minimum_honour = 2;
    int effect_bonus = 3;
    int effect_cost = 4;
    int durability = 5;
  public:
    Bow(string s) : Item(s){};
};

class Ninjato :public Item
{
  private:
    int cost = 4;
    int attack_bonus = 3;
    int defence_bonus = 3;
    int minimum_honour = 3;
    int effect_bonus = 2;
    int effect_cost = 2;
    int durability = 4;
  public:
    Ninjato(string s) : Item(s){};
};

class Wakizashi :public Item
{
  private:
    int cost = 8;
    int attack_bonus = 5;
    int defence_bonus = 5;
    int minimum_honour = 3;
    int effect_bonus = 3;
    int effect_cost = 3;
    int durability = 8;
  public:
    Wakizashi(string s) : Item(s){};
};


#endif //CPP_PROJECT__ITEM_H_

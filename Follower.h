
#ifndef CPP_PROJECT__FOLLOWER_H_
#define CPP_PROJECT__FOLLOWER_H_
#include "GreenCard.h"

class Follower : public GreenCard
{
  public:
    Follower(string);
};

class Footsoldier :public Follower
{
  private:
    int cost = 0;
    int attack_bonus = 2;
    int defence_bonus = 0;
    int minimum_honour = 1;
    int effect_bonus = 1;
    int effect_cost = 2;
  public:
    Footsoldier(string s) : Follower(s){};
};

class Archer :public Follower
{
  private:
    int cost = 0;
    int attack_bonus = 0;
    int defence_bonus = 2;
    int minimum_honour = 1;
    int effect_bonus = 1;
    int effect_cost = 2;
  public:
    Archer(string s) : Follower(s){};
};

class Cavalry :public Follower
{
  private:
    int cost = 3;
    int attack_bonus = 4;
    int defence_bonus = 2;
    int minimum_honour = 3;
    int effect_bonus = 3;
    int effect_cost = 4;
  public:
    Cavalry(string s) : Follower(s){};
};

class Bushido :public Follower
{
  private:
    int cost = 8;
    int attack_bonus = 8;
    int defence_bonus = 8;
    int minimum_honour = 6;
    int effect_bonus = 3;
    int effect_cost = 8;
  public:
    Bushido(string s) : Follower(s){};
};

class Sieger :public Follower
{
  private:
    int cost = 5;
    int attack_bonus = 3;
    int defence_bonus = 3;
    int minimum_honour = 2;
    int effect_bonus = 2;
    int effect_cost = 3;
  public:
    Sieger(string s) : Follower(s){};
};

class Atakebune :public Follower
{
  private:
    int cost = 3;
    int attack_bonus = 2;
    int defence_bonus = 4;
    int minimum_honour = 3;
    int effect_bonus = 3;
    int effect_cost = 4;
    public:
        Atakebune(string s) : Follower(s){};
};

#endif //CPP_PROJECT__FOLLOWER_H_

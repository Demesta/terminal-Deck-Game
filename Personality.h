#ifndef CPP_PROJECT__PERSONALITY_H_
#define CPP_PROJECT__PERSONALITY_H_

#include "BlackCard.h"

class Personality : public BlackCard
{
  private:
    int attack;
    int name;
    int defence;
    int honour;
    bool isDead;

  public:
    Personality(string);
    ~Personality();
};

class Attacker :public Personality
{
  private:
    int cost = 5;
    int attack = 3;
    int defence = 2;
    int honour = 2;
  public:
    Attacker(string s) : Personality(s){};
};

class Defender :public Personality
{
  private:
    int cost = 5;
    int attack = 2;
    int defence = 3;
    int honour = 2;
  public:
    Defender(string s) : Personality(s){};
};

class Champion :public Personality
{
  private:
    int cost = 30;
    int attack = 20;
    int defence = 20;
    int honour = 12;
  public:
    Champion(string s) : Personality(s){};
};

class Chancellor :public Personality
{
  private:
    int cost = 15;
    int attack = 5;
    int defence = 10;
    int honour = 8;
  public:
    Chancellor(string s) : Personality(s){};
};

class Shogun :public Personality
{
  private:
    int cost = 15;
    int attack = 10;
    int defence = 5;
    int honour = 8;
  public:
    Shogun(string s) : Personality(s){};
};



#endif //CPP_PROJECT__PERSONALITY_H_

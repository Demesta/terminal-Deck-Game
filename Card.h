#ifndef ASKISI1C___CPP_PROJECT_CARD_H_
#define ASKISI1C___CPP_PROJECT_CARD_H_

#include <string>
using namespace std;

class Card
{
  private:
    string name;
  public:
    void SetName(const string &name);
  private:
    int cost;
    bool isTrapped;

  public:
    Card(string);
};




#endif //ASKISI1C___CPP_PROJECT_CARD_H_

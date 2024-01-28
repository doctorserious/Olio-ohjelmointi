#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"

class ItalianChef : public Chef {
public:
  ItalianChef(string, int, int);
  string getName();
  void makePasta(int, int);

protected:
  int water;
  int flour;
};

#endif // ITALIANCHEF_H

#ifndef CHEF_H
#define CHEF_H
#include <iostream>
using namespace std;

class Chef {
public:
  Chef(string);
  ~Chef();
  void makeSalad(void);
  void makeSoup(void);

protected:
  string name;
};

#endif // CHEF_H

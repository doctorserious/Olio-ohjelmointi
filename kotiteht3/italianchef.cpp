#include "italianchef.h"

ItalianChef::ItalianChef(string newName, int flour, int water) : Chef(newName) {
  cout << "Chef " << name << " konstruktori" << endl;
}

string ItalianChef::getName() { return name; }

void ItalianChef::makePasta(int flour, int water) {
  cout << "Chef " << name << " makes pasta with special recipe" << endl;
  cout << "Chef " << name << " uses flour = " << flour << endl;
  cout << "Chef " << name << " uses water = " << water << endl;
}

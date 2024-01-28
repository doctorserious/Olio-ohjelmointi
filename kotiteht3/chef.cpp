#include "chef.h"

Chef::Chef(string newName) {
  name = newName;
  cout << "Kokki " << name << " konstruktori" << endl;
}

Chef::~Chef() { cout << "Kokki " << name << " destruktori" << endl; }

void Chef::makeSalad() {
  cout << "Kokki " << name << " tekee salaattia" << endl;
}

void Chef::makeSoup() { cout << "Kokki " << name << " kokkaa keittoa" << endl; }

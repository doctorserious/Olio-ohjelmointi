#include "italianchef.h"

int main() {
  Chef chef1("Chef Gordon Ramsay");
  chef1.makeSalad();
  chef1.makeSoup();

  Chef chef2("Chef Anthony Bourdain");
  chef2.makeSalad();
  chef2.makeSoup();

  ItalianChef objectChef4("Mario", 250, 100);
  objectChef4.makePasta(250, 100);

  return 0;
}

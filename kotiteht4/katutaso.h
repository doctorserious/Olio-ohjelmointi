#ifndef KATUTASO_H
#define KATUTASO_H
#include "kerros.h"

class Katutaso : public Kerros {

public:

  Katutaso()
    {
      //std::cout << "Katutaso luotu" << std::endl; //katutaso konstruktori
  }

  void maaritaAsunnot();

  double laskeKulutus(double perusKulutus) override; //kulutuksen lasku

};
#endif // KATUTASO_H

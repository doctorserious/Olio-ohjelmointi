#ifndef KERROSTALO_H
#define KERROSTALO_H

#include "katutaso.h"
#include "kerros.h"

class Kerrostalo {

private:

  Katutaso ensimmainen; //kerrokset
  Kerros toinen;
  Kerros kolmas;
  Kerros neljas;
  Kerros viides;

public:

  Kerrostalo()
    {
      //std::cout << "Kerrostalo luotu" << std::endl; //kerrostalo konstruktori
    }

  void KerrostalonMaaritus(); //erillinen kerrostalon määritys

  double laskeKulutus(double perusKulutus); //kulutuksen lasku

};
#endif // KERROSTALO_H

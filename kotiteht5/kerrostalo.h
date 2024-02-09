#ifndef KERROSTALO_H
#define KERROSTALO_H

#include "katutaso.h"
#include "kerros.h"

class Kerrostalo
{
private:
  Katutaso *eka;
  Kerros *toka;
  Kerros *kolmas;
  Kerros *neljas;
  Kerros *viides;

public:
  Kerrostalo() {
      cout << "Kerrostalo luotu(5.krs)" << endl;

      eka = new Katutaso;
      toka = new Kerros;
      kolmas = new Kerros;
      neljas = new Kerros;
      viides = new Kerros;
  }
  ~Kerrostalo() {
      delete eka;
      delete toka;
      delete kolmas;
      delete neljas;
      delete viides;
  }

  void KerrostalonMaaritus();
  double laskeKulutus(double perusKulutus);
};

#endif // KERROSTALO_H

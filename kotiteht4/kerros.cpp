#include "kerros.h"

void Kerros::maaritaAsunnot() //kerroksen asuntojen määritys
{
  as1.maarita(2, 100);
  as2.maarita(2, 100);
  as3.maarita(2, 100);
  as4.maarita(2, 100);

  std::cout << "Kerros maaritettu" << std::endl;

}

double Kerros::laskeKulutus(double perusKulutus) //kulutuksen lasku

{

  return as1.laskeKulutus(perusKulutus) + as2.laskeKulutus(perusKulutus) + as3.laskeKulutus(perusKulutus) + as4.laskeKulutus(perusKulutus);

}

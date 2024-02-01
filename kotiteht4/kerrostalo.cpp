#include "kerrostalo.h"

void Kerrostalo::KerrostalonMaaritus()
{

  std::cout << "Maaritellaan koko kerrostalon kaikki asunnot" << std::endl; //kerrostalon asuntojen määrittely

  ensimmainen.maaritaAsunnot(); //objektit
  toinen.maaritaAsunnot();
  kolmas.maaritaAsunnot();
  neljas.maaritaAsunnot();
  viides.maaritaAsunnot();

  std::cout << "Kerrostalo luotu" << std::endl; //kerrostalo konstruktori

}
double Kerrostalo::laskeKulutus(double perusKulutus) //kerrostalon kulutuksen lasku

{
  return ensimmainen.laskeKulutus(perusKulutus) + toinen.laskeKulutus(perusKulutus) + kolmas.laskeKulutus(perusKulutus)+ neljas.laskeKulutus(perusKulutus)+viides.laskeKulutus(perusKulutus) ;
}

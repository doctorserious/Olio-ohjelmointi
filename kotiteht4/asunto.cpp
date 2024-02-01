#include "asunto.h"

void Asunto::maarita(int asukkaat, int pintaAla) //asunnon määritys
{
  asukasMaara = asukkaat;

  neliot = pintaAla;

  std::cout << "Asunto maaritetty: asukkaita= " << asukasMaara << " nelioita= " << neliot << std::endl;

}

double Asunto::laskeKulutus(double perusKulutus) //kulutuksen lasku

{
  return perusKulutus * neliot;
}


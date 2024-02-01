#ifndef ASUNTO_H
#define ASUNTO_H
#include <iostream>

using namespace std;

class Asunto {

public:

  int asukasMaara; //muuttujat
  int neliot;

  Asunto()
  {
      std::cout << "Asunto luotu" << std::endl; //konstruktori
  }

  void maarita(int asukkaat, int pintaAla); //asunnon maaritys

  virtual double laskeKulutus(double perusKulutus); //kulutuksen lasku

};
#endif // ASUNTO_H

#ifndef KERROS_H
#define KERROS_H

#include "asunto.h"
#include <iostream>

using namespace std;

class Kerros {

public:

  Asunto as1; //4 asuntoa per kerros
  Asunto as2;
  Asunto as3;
  Asunto as4;

  Kerros()
  {
     // std::cout << "Kerros luotu" << std::endl; //kerros konstruktori
  }
  void maaritaAsunnot();

  virtual double laskeKulutus(double perusKulutus); //kulutuksen lasku

};

#endif // KERROS_H

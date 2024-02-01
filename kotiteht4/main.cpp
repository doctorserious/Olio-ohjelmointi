#include <iostream>
#include "kerrostalo.h"

using namespace std;

int main()
{

 Kerrostalo kerrostalo; //kerrostalo objekti,

 kerrostalo.KerrostalonMaaritus(); //määrittely

 std::cout << "Koko Kerrostalon kulutus on = " << kerrostalo.laskeKulutus(2) << std::endl;
 return 0;

}

#include "katutaso.h"

void Katutaso::maaritaAsunnot() //katutason asuntojen määritys
{
    as1.maarita(2, 100);
    as2.maarita(2, 100);

    std::cout << "Katutaso maaritettu" << std::endl; //katutason konstruktori

}

double Katutaso::laskeKulutus(double perusKulutus) //kulutuksen lasku

{
    return as1.laskeKulutus(perusKulutus) + as2.laskeKulutus(perusKulutus);
}

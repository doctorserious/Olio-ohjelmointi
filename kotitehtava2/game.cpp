#include "game.h" //header tiedoston include

Arvauspeli::Arvauspeli(int mNum) //konstruktori
{
    maxNum = mNum;
    srand(time(0)); //random luku ajasta
    ArvottuNum = 1 + rand() % (maxNum - 1 + 1); //vaihteluväli
    cout << "numero on valilla 1 - " << maxNum << endl;
    cout << "arvaa numero" << endl;
    cin >> arvaus;
    Arvaukset++; //lisää arvausten määrään joka yrityksellä
}

void Arvauspeli::playGame() //peli, käytännössä sama kuin aikaisemmassa tehtävässä
{
    while (arvaus != ArvottuNum)
    {
        if (arvaus > ArvottuNum)
            cout << "\n" << arvaus << " on liian iso numero, kokeile uudestaan. ";
        else
            cout << "\n" << arvaus << " on liian pieni, kokeile uudestaan. ";

        cin >> arvaus;
        Arvaukset++;
        }
        cout << "onnittelut, sait oikean numeron, se oli " << ArvottuNum << endl;
        cout << "siihen meni "<<Arvaukset << " yritysta." << endl;
    }


Arvauspeli::~Arvauspeli() //dekonstruktori
{

}

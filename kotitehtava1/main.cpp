#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int game(); //prototyyppi, ei ihan esimerkin mukainen, mutta tein tuon maxnum:n kysymisen myös funktion sisälle.
//main kutsuu ainoastaan game functiota, jossa tapahtuu kaikki tarvittava...

int main()
{
    game(); //funktion kutsu, ei muuta.
}

int game() //arvauspeli
{
    int numero, arvaus, yritykset = 0; //muuttujien määrittely
    int maxnum; //vaihteluvälin isoimman numeron muuttuja jota kysytään ennen arpomista.

    cout << "Kuinka iso on arvottavan numeron vaihteluvali 1-xxx? syota vaihteluvalin suurin numero:\n\n";
    cin >> maxnum; //kysytään käyttäjältä

    srand(time(0));//arpoo satunnaisia numeroita, seedin voi valita jos laittaa omavalintaisen numeron time(0) tilalle
    numero = rand() % maxnum + 1;// varsinainen numeron generointi (maxnum kysytään ennen pelin alkua,moduluksesta saadaan range 1-n)

    cout << "Arvaa arvottu numero\n\n";

    do //do while loop- rakenteella saadaan vertailu suoritettua, switch case voisi myös ehkä toimia?
    {
        cout << "Syota arvaamasi numero : ";
        cin >> arvaus; //kysytään input arvaus
        yritykset++; //lisätään yritysten määrään per arvaus, lopussa tulostetaan monta arvausta tarvittiin...

        if (arvaus > numero) //jos isompi tulostetaan...
            cout << "Luku on pienempi!\n";
        else if (arvaus < numero) //jos pienempi tulostetaan...
            cout << "Luku on isompi!\n";
        else //muussa tapauksessa... voisi periaatteessa tehdä vielä erillisen määrittelyn jos arvaus ei ole maxnum:n rangella ollenkaan tai vaikka negatiivinen...
            cout << "\nOikein arvattu! se vaati " << yritykset << " arvausta!\n"; //tulostaa yritysten määrän
    } while (arvaus != numero); //looppi pyörii kunnes oikea numero arvataan.

    return 0; //nollaus
}

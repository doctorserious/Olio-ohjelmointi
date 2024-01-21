#include "game.h" //headerin include
#include <iostream>
using namespace std;

int main()
{
    int maxNum; //piti määritellä uudelleen, ei toiminut vaikka oli headerissa...
    char uudestaan = '0'; //muuttuja pelin uudelleen käynnistymämistä varten

    do { //loopissa pelin aloitus ja kysymys jos halutaan pelata uudestaan, kutsuu siis game.cpp
        cout << "pelataan pelia numeron arvaamis pelia, kuinka iso vaihteluvali? "<<endl;
        cin >> maxNum; //kysytään max vväli
        Arvauspeli game = Arvauspeli(maxNum); //asetetaan se
        game.playGame(); //aloitetaan peli
        cout << "haluatko pelata uudestaan y/n ? \n" << endl; //jonka jälkeen kysytään halutaanko pelata uudestaan
        cin >> uudestaan; //jos käyttäjä kirjoittaa y alkaa alusta, jos muuta niin loppuu
    } while (towlower(uudestaan == 'y'));

    system("pause"); //loppu
    return 0;
}

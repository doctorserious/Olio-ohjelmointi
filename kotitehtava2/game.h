#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <ctime> //randomia varten
using namespace std;

class Arvauspeli //pelin luokka
{
private: //privamuuttujat
    int maxNum;
    int arvaus;
    int ArvottuNum;
    int Arvaukset=0;
public: //julkiset, itse pelin käynnistys ja konstruktori ja dekonstruktori
    Arvauspeli(int mNum);
    void playGame();
    ~Arvauspeli();
};

#endif // GAME_H

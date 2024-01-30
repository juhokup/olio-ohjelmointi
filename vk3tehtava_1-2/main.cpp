//  1.Laadi UML-kaavioiden mukaiset luokat Chef ja
//    siitä peritty luokka ItalianChef.

//  2.Toteuta luokan Chef-runko niin,
//    että jäsenfunktiot mukaan lukien
//    konstruktori ja destruktori tulostavat debug tietoa ruudulle.
//    Konstruktorissa annetaan parametrina olion nimi.
//    Luo luokasta kaksi oliota ohjelman main-funktiossa
//    ja käytä molempien olioiden kumpaakin jäsenfunktiota.

#include "chef.h"
#include "italianchef.h"

int main()
{
    Chef Gordon("Gordon Ramsey");
    Gordon.makeSalad();
    Gordon.makeSoup();

    Chef Anthony("Anthony Bourdain");
    Anthony.makeSalad();
    Anthony.makeSoup();

    return 0;
}

//  1.Laadi UML-kaavioiden mukaiset luokat Chef ja
//    siitä peritty luokka ItalianChef.

//  2.Toteuta luokan Chef-runko niin,
//    että jäsenfunktiot mukaan lukien
//    konstruktori ja destruktori tulostavat debug tietoa ruudulle.
//    Konstruktorissa annetaan parametrina olion nimi.
//    Luo luokasta kaksi oliota ohjelman main-funktiossa
//    ja käytä molempien olioiden kumpaakin jäsenfunktiota.


#include "Chef.h"
#include "ItalianChef.h"

int main() {
    Chef jyrki("Jyrki");
    jyrki.makeSalad();
    jyrki.makeSoup();

    ItalianChef mario("Mario");
    mario.makeSalad();
    mario.makePasta();

    return 0;
}

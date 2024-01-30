// 3. Laadi luokka ItalianChef, joka perii Chef-luokan UML-kaaviossa kuvatusti.
//    Lisää ItalianChef-luokkaan jäsenfunktio getName(),
//    joka palauttaa kokin nimen.
//    Luokkaan on lisätty pastan tekemiseen
//    tarvittava jäsenfunktio makePasta().
//    Luo kaksi kokkia (oliot Chef ja ItalianChef)
//    ja laita heidät tekemään ruokaa
//    (eli tulosta ruudulle) niin,
//    että saadaan salaattia, keittoa ja pastaa.


#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    Chef Chef("Jyrki");
    ItalianChef ItalianChef("Mario");
    Chef.makeSalad();
    ItalianChef.makePasta();
    Chef.makeSoup();

    return 0;
}

// 1. Aloita toteuttaminen lisäämällä Qt Creatorin projektiin
// C++ luokka Asunto ja toteuta se luokkakaavion mukaisesti.
// Testaa heti tämän luokan toiminta luomalla siitä olio main.cpp tiedostosta.
// Alla olevassa esimerkissä Asunto luokan konstruktoriin
// ja määritä metodiin on lisätty debug tietojen tulostusta.
// Huomaa, että testauksen helpottamiseksi
// asunnot kannattaa määritellä samalla tunnetulla tavalla.
// Alla olevassa esimerkissä (ja jatkossakin)
// asunnossa on aina asukkaita 2 kpl ja asunnon neliomäärä 100.

#include <iostream>
using namespace std;
#include "asunto.h"

int main() {
    Asunto asunto;
    asunto.maarita(2,100);
    cout<<"asunnon kulutus, kun hinta = 1 on "<<asunto.laskeKulutus(1)<<endl;
    return 0;
}

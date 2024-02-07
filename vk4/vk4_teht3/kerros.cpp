#include "Kerros.h"


void Kerros::maaritaAsunnot() {
    as1.maarita(2, 100);
    as2.maarita(2, 100);
    as3.maarita(2, 100);
    as4.maarita(2, 100);
}

double Kerros::laskeKulutus(double perusKulutus) {
    return as1.laskeKulutus(perusKulutus) + as2.laskeKulutus(perusKulutus) +
           as3.laskeKulutus(perusKulutus) + as4.laskeKulutus(perusKulutus);
}

Kerros::Kerros(){
    cout << "---- Kerros luotu ----" <<endl<< endl;

}

Kerros::~Kerros()
{
    //cout <<endl<< "---- Kerros destructor ----" << endl;
}

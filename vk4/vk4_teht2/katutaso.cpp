#include "Katutaso.h"



void Katutaso::maaritaAsunnot() {
    cout << "---- Maaritetaan 2kpl katutason asuntoja ----" << endl;

    as1.maarita(2, 100);
    as2.maarita(2, 100);
}

double Katutaso::laskeKulutus(double perusKulutus) {
    return as1.laskeKulutus(perusKulutus) + as2.laskeKulutus(perusKulutus);
}


Katutaso::Katutaso(){
    cout << "---- Katutaso luotu ----" <<endl<< endl;
}

Katutaso::~Katutaso()
{
    //cout <<endl<< "---- Katutaso destructor ----" << endl;

}

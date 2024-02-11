#include "Kerros.h"


void Kerros::maaritaAsunnot() {
    as1->maarita(2, 100);
    as2->maarita(2, 100);
    as3->maarita(2, 100);
    as4->maarita(2, 100);
}

Kerros::Kerros(){
    as1=new Asunto;
    as2=new Asunto;
    as3=new Asunto;
    as4=new Asunto;
    cout << "---- Kerros luotu ----" <<endl<< endl;

}

Kerros::~Kerros()
{
    //cout <<endl<< "---- Kerros destructor ----" << endl;
    delete as1;
    delete as2;
    delete as3;
    delete as4;

}

double Kerros::laskeKulutus(double perusKulutus) {
    return as1->laskeKulutus(perusKulutus) + as2->laskeKulutus(perusKulutus) +
           as3->laskeKulutus(perusKulutus) + as4->laskeKulutus(perusKulutus);
}

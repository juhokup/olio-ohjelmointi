#include "Kerros.h"

void Kerros::maaritaAsunnot() {

    //osoittimet osoittavat Asunto-olion maarita funktiota parametreilla 2 ja 100
    as1->maarita(2, 100);
    as2->maarita(2, 100);
    as3->maarita(2, 100);
    as4->maarita(2, 100);
}

Kerros::Kerros(){

    //Alustetaan jäsenmuuttujat as1-as4 osoittamaan uusiin
    //Asunto-olion ilmentymiin,
    //jotka on luotu dynaamisesti muistista new-avainsanan avulla.
    as1=new Asunto;
    as2=new Asunto;
    as3=new Asunto;
    as4=new Asunto;
    cout << "---- Kerros luotu ----" <<endl<< endl;

}

Kerros::~Kerros()
{
    //cout <<endl<< "---- Kerros destructor ----" << endl;

    //poistetaan osoittimien dynaamisesti varaamat muistit
    delete as1;
    delete as2;
    delete as3;
    delete as4;

}

double Kerros::laskeKulutus(double perusKulutus) {
    return as1->laskeKulutus(perusKulutus) + as2->laskeKulutus(perusKulutus) +
           as3->laskeKulutus(perusKulutus) + as4->laskeKulutus(perusKulutus);
}

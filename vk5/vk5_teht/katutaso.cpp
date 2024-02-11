#include "Katutaso.h"

void Katutaso::maaritaAsunnot() {
    as1->maarita(2, 100);
    as2->maarita(2, 100);
}


Katutaso::Katutaso(){
    as1=new Asunto;
    as2=new Asunto;
    cout << "---- Katutaso luotu ----" <<endl<< endl;
}

Katutaso::~Katutaso()
{
    //cout <<endl<< "---- Katutaso destructor ----" << endl;
    delete as1;
    delete as2;
}

double Katutaso::laskeKulutus(double perusKulutus) {
    return as1->laskeKulutus(perusKulutus) + as2->laskeKulutus(perusKulutus);
}

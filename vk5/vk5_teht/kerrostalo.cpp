#include "Kerrostalo.h"

Kerrostalo::Kerrostalo() {
    cout <<endl<< "*****************Kerrostalo luotu***********************"<<endl<<endl;
    eka = new Katutaso;
    toka = new Kerros;
    kolmas = new Kerros;
    neljas = new Kerros;

}

Kerrostalo::~Kerrostalo()
{
    //cout <<endl<< "*****************Kerrostalo destructor***********************"<<endl;
    delete eka;
    delete toka;
    delete kolmas;
    delete neljas;
}

void Kerrostalo::maaritellaanAsunnot() {

    cout << "Maaritellaan koko kerrostalon kaikki asunnot:" <<endl;

    cout <<endl<< "Maaritellaan 2kpl katutason asuntoja:" << endl;
    eka->maaritaAsunnot();

    for (int laskuri=0; laskuri<3; laskuri++){
        cout <<endl<< "Maaritetaan 4kpl "<<laskuri+1<<". kerroksen asuntoja:" << endl;
        if (laskuri==0){
            toka->maaritaAsunnot();
        }
        else if (laskuri==1) {
            kolmas->maaritaAsunnot();
        }
        else{
            neljas->maaritaAsunnot();
        }

    }

    cout <<endl<<"Kerrostalon kokonaiskulutus = " << laskeKulutus(2) << endl;
}

double Kerrostalo::laskeKulutus(double perusKulutus) {
    return
        eka->laskeKulutus(perusKulutus) +
        toka->laskeKulutus(perusKulutus) +
        kolmas->laskeKulutus(perusKulutus) +
        neljas->laskeKulutus(perusKulutus)
        ;
}

// 2. Seuraavaksi projektiin kannattaa lisätä kerros ja katutasoluokat.
//    Kun luokat on ohjelmoitu, voit testata luomalla katutason luokan main.cpp tiedostossa.
//    Ohjelman toiminta voisi olla jotain alla olevan kaltaista.
//    Muista toteuttaa kerroksen maarita metodi virtuaalisena,
//    jotta voit ylikirjoittaa sen katutason perivässä luokassa.
//    Pohdi myös miksi perityn metodin muuttaminen oli välttämätöntä katutason luokassa.

#include "Katutaso.h"
#include "kerros.h"

#include <iostream>
using namespace std;

int main() {
    Kerros asunnotKerros;
    Katutaso asunnotKatutaso;
    asunnotKatutaso.maaritaAsunnot();
    asunnotKerros.maaritaAsunnot();
    int katu, kerros;

    katu=asunnotKatutaso.laskeKulutus(1);
    kerros=asunnotKerros.laskeKulutus(1);
    cout<<"Katutason ja perityn kerroksen kulutus, kun hinta = 1 on "<<katu+kerros<<endl;
    return 0;
}

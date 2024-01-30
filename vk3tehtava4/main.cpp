// 4. Muuta ItalianChef-luokkaa niin,
//    että jäsenmuuttukiksi tulee
//    salaisen (isoäidiltä perityn)
//    pastareseptin ainesten eli
//    jauhojen ja veden määrät.
//    Muuta konstruktori niin,
//    että se ottaa oman salaisen reseptin
//    ainesmäärät parametreina.



#include <iostream>
#include "chef.h"
#include "italianchef.h"

int main()
{
    Chef Chef("Jyrki");
    Chef.makeSalad();
    Chef.makeSoup();
    ItalianChef ItalianChef("Mario", 100, 250);
    int jauho = ItalianChef.getFlour();
    int vesi = ItalianChef.getWater();
    ItalianChef.makePasta(jauho,vesi);

    return 0;
}

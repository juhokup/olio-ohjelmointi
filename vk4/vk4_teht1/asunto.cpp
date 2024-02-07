#include "Asunto.h"

Asunto::Asunto(){
    cout << "asunto luotu" << endl;
}

Asunto::~Asunto()
{

}

void Asunto::maarita(int a, int n) {
    asukasMaara = a;
    neliot = n;
    cout << "Asunto maaritetty: Asukkaita = " << asukasMaara << " nelioita = " << neliot << endl;
}

double Asunto::laskeKulutus(double perusKulutus) {
    return perusKulutus * (asukasMaara*neliot);
}

#ifndef KATUTASO_H
#define KATUTASO_H
#include <iostream>
using namespace std;
#include "asunto.h"
#include "kerros.h"


//class Katutaso{
class Katutaso : public Kerros {
public:
    Katutaso();
    ~Katutaso();

    void maaritaAsunnot();
    double laskeKulutus(double);

private:
    Asunto *as1;
    Asunto *as2;

};

#endif

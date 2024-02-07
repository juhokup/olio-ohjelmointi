#ifndef KERROSTALO_H
#define KERROSTALO_H
#include <iostream>
using namespace std;
#include "katutaso.h"
#include "kerros.h"

class Kerrostalo {

public:
    Kerrostalo();
    ~Kerrostalo();

    void maaritellaanAsunnot();

    double laskeKulutus(double);

private:
    Katutaso eka;
    Kerros toka;
    Kerros kolmas;
    Kerros neljas;
};

#endif

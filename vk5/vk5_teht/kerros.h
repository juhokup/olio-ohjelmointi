#ifndef KERROS_H
#define KERROS_H
#include <iostream>
using namespace std;
#include "asunto.h"

class Kerros {
public:

    Kerros();
    ~Kerros();

    void maaritaAsunnot();
    double laskeKulutus(double);

private:
    Asunto *as1;
    Asunto *as2;
    Asunto *as3;
    Asunto *as4;
};

#endif

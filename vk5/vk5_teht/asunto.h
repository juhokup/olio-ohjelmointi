//asunto.h

#ifndef ASUNTO_H
#define ASUNTO_H
#include <iostream>
using namespace std;

class Asunto {
public:
    Asunto();
    virtual ~Asunto();

    void maarita(int,int);
    virtual double laskeKulutus(double);

    int asukasMaara;
    int neliot;
};

#endif

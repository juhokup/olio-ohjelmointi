#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"
#include <iostream>
using namespace std;

class ItalianChef: public Chef{
public:

    ItalianChef(string, int, int);
    ~ItalianChef();

    string getName();

    int getWater() const;
    int getFlour() const;

    void makePasta(int,int);

private:
    int water,flour;


};

#endif // ITALIANCHEFT_H

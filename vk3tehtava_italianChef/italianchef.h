#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "Chef.h"
#include <iostream>
using namespace std;

class ItalianChef : public Chef {
public:
    ItalianChef(std::string chefName);
    string getName();
    void makePasta();
};

#endif

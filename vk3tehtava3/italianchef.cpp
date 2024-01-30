#include "italianchef.h"

ItalianChef::ItalianChef(string cook): Chef(cook){
    cout << "Chef " << name << " konstruktori" << endl;
}

ItalianChef::~ItalianChef(){
//    cout << "Chef " << name << " destruktori" << endl;
}

string ItalianChef::getName(){
    return name;
}

void ItalianChef::makePasta(){
    cout << "Chef " << getName() << " makes pasta" << endl;
}


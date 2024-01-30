#include "italianchef.h"


ItalianChef::ItalianChef(string n, int w, int f):Chef(n){
    name = n;
    water = w;
    flour = f;
    cout << "Chef " << name << " konstruktori"<< endl;
}

ItalianChef::~ItalianChef(){
    //cout << "Chef " << name << " destruktori"<< endl;
}

string ItalianChef::getName(){
    return name;
}

void ItalianChef::makePasta(int j, int w){
    cout << "Chef " << getName() << " makes pasta with special recipe"<<endl;
    cout << "Chef " << getName() << " uses flour = "<< j<<endl;
    cout << "Chef " << getName() << " uses water = "<< w<<endl;

}

int ItalianChef::getWater() const
{
    return water;
}

int ItalianChef::getFlour() const
{
    return flour;
}


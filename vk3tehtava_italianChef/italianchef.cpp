#include "ItalianChef.h"

ItalianChef::ItalianChef(std::string chefName) : Chef(chefName) {
    std::cout << "ItalianChef " << getName() << " constructor" << std::endl;
}

ItalianChef::ItalianChef(const ItalianChef& other) : Chef(other) {
    std::cout << "ItalianChef " << getName() << " copy constructor" << std::endl;
}

string ItalianChef::getName() {
    return "Chef: " + Chef::getName();
}
// Destructorin määrittelyä ei tarvita, ellei luokalla ole erityisiä resursseja

void ItalianChef::makePasta() {
    std::cout << getName() << " makes pasta" << std::endl;
}

#include "Chef.h"

Chef::Chef(std::string chefName) : name(chefName) {
    std::cout << "Chef " << name << " constructor" << std::endl;
}

Chef::~Chef() {
    std::cout << "Chef " << name << " destructor" << std::endl;
}

void Chef::makeSalad() {
    std::cout << "Chef " << name << " makes salad" << std::endl;
}

void Chef::makeSoup() {
    std::cout << "Chef " << name << " makes soup" << std::endl;
}

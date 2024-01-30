#include <iostream>
#include <string>

using namespace std;

// Yläluokka Chef
class Chef {
public:
    // Parametrillinen konstruktori asettaa kokille nimen
    Chef(string name) : name(name) {}

    // Setter-funktio asettaa kokin nimen
    void setName(string newName) {
       mario = newName;
    }

    // Getter-funktio palauttaa kokin nimen
    string getName() {
        return mario;
    }

    // Funktio valmistaa salaatin
    void makeSalad() {
        cout << name << " is making a salad." << endl;
    }

    // Funktio valmistaa keiton
    void makeSoup() {
        cout << name << " is making soup." << endl;
    }

private:
    string name, mario; // Kokin nimi (private, jotta se ei ole suoraan käytettävissä)
};

// Ala luokka ItalianChef, perii Chef-luokan ominaisuudet
class ItalianChef : public Chef {
public:
    // Parametrillinen konstruktori asettaa italian kokin nimen periytetystä luokasta
    ItalianChef(string name) : Chef(name) {}

    // Funktio valmistaa pastan, käyttää perittyä getName-funktiota
    void makePasta() {
        cout << getName() << " is making pasta." << endl;
    }

    // ItalianChef-luokan oma getName-toiminto, palauttaa "Italian" lisättynä kokin nimeen
    string getName() {
        return "Italian " + Chef::getName();
    }
};

int main() {
    // Luodaan Chef-olio ja asetetaan nimi
    Chef chef("Jyrki");
    Chef italianchef("");
    italianchef.setName("Mario");
    chef.makeSalad();
    chef.makeSoup();

    // Asetetaan uusi nimi Chef-oliolle

    ItalianChef(getName());

    // Luodaan ItalianChef-olio ja kutsutaan erilaisia toimintoja
    ItalianChef italianChef("Chef");
    italianChef.makeSalad();  // Periytetty toiminto
    italianChef.makeSoup();   // Periytetty toiminto
    italianChef.makePasta();  // ItalianChef-luokan oma toiminto

    return 0;
}

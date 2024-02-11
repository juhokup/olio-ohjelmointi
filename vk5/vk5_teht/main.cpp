//1. Muuta kotitehtävän 4 kerrostalo tehtävä
//   käyttämään pointtereita olioihin.
//   Nythän as1,..,as4, eka, toka,kolmas
//   ovat kaikki globaalista muistista
//   tai pinosta varattavia olioita
//   (ellei sitten main.cpp:ssä kerrostaloa varata heapista,
//   jolloin koko kerrostalon vaatima tila varataan heapista.)

//2. Muuta myös main.cpp siten,
//   että sielläkin kerrostalo varataan heapista eikä pinosta.

#include "Kerrostalo.h"

int main() {

    //luodaan Kerrostalo oliolle osoitin
    Kerrostalo * pointerKerrostalo;

    //Varataan Kerrostalo oliolle muistia heap-muistialueelta
    pointerKerrostalo = new Kerrostalo;

    //kutsutaan funktiota johon luotu pointteri osoittaa
    pointerKerrostalo->maaritellaanAsunnot();

    //poistetaan Kerrostalo olio heap-muistista
    delete pointerKerrostalo;

    //Asetetaan pointerKerrostalo nulliksi
    //jolloin se ei enää osoita mihinkään muistiin
    pointerKerrostalo=nullptr;

    return 0;
}


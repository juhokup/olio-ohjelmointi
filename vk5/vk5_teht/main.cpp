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

    Kerrostalo * pointerKerrostalo;
    pointerKerrostalo = new Kerrostalo;
    pointerKerrostalo->maaritellaanAsunnot();

    delete pointerKerrostalo;
    pointerKerrostalo=nullptr;

    return 0;
}


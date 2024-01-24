//Ohjekuvassa käytettiin "Game gameObject(10);"
//Tätä käytetään, jos halutaan valmiiksi määrätä maxNumber-arvo.
//Tein pelin aluksi tuolla toteutuksella, mutta muotoilin niin,
//että pelaajalta kysytään mikä numero halutaan asettaa
//korkeimmaksi mahdolliseksi arvoksi "arpomakoneeseen".
//Näin pelaaja itse saa vaikuttaa pelin pituuteen.

#include "Game.h"

int main() {

    Game gameObject;
    gameObject.play();
    return 0;
}

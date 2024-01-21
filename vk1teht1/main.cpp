#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    srand(time(0)); // Alustetaan satunnaisgeneraattori ajan perusteella

    const int num = 20; // Suurin arvattava luku
    const int satunnaisluku = rand() % num + 1; // Arvotaan luku väliltä 1-20
    int arvaus = 0;

    cout << "Tervetuloa peliin! Arvaa luku valilta 1-20"<< endl;

    while (arvaus != satunnaisluku) {
        cout << "Arvaa luku: ";
        cin >> arvaus;

        if (arvaus > satunnaisluku) {
            cout << "Luku on pienempi." << endl;
        } else if (arvaus < satunnaisluku) {
            cout << "Luku on suurempi." << endl;
        } else {
            cout << "Onneksi olkoon! Arvasit oikein!" << endl;
        }
    }
    return 0;
}

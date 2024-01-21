#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game(int maxnum);

int main() {

    srand(time(0)); // Alustetaan satunnaisgeneraattori ajan perusteella

    const int num = 100; // Korkein arvattava luku
    const int maxnum = rand() % num + 1; // Arvotaan luku väliltä 1-num

    cout << "Tervetuloa peliin! Arvaa luku valilta 1-"<< maxnum << "." << endl;

    int arvaukset = game(maxnum);

    cout << "Onneksi olkoon! Arvasit oikein!" << endl;
    cout << "Arvausten maara: " << arvaukset << endl;

    return 0;
}

int game(int maxnum){
    const int satunnaisluku = rand() % maxnum + 1; // Arvotaan luku väliltä 1-maxnum
    int arvaus = 0;
    int arvauksienMaara = 0;

    while (arvaus != satunnaisluku) {
        cout << "Arvaa luku: ";
        cin >> arvaus;
        arvauksienMaara++;

        if (arvaus > satunnaisluku) {
            cout << "Luku on pienempi." << endl;
        } else if (arvaus < satunnaisluku) {
            cout << "Luku on suurempi." << endl;
        }
    }
    return arvauksienMaara;
}

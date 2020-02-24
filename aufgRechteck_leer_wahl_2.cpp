/*
Gesucht: Struktogramm, Programm
Aufgabe 2: Das Programm von Aufgabe 1 sol so erweitert werden, dass vom Nutzer 
festgelegt werden kann, ob das Rechteck gefült oder leer ist.
Beispiel für die Ausgabe:
Bitte Hoehe eingeben: 5
Bitte Breite eingeben: 10
gefuellt [j/n]? j
x x x x x x x x x x
x x x x x x x x x x
x x x x x x x x x x
x x x x x x x x x x
x x x x x x x x x x
Gesucht: Struktogramm, Programm
*/

#include <iostream>

using namespace std;

int main() {
    int h,w;
    cout << "Hoehe: ";
    cin >> h;
    cout << "Breite: ";
    cin >> w;
    char filled = 0;
    for (;filled != 'j' && filled != 'n'; cin >> filled) {
        cout << "gefuellt [j/n]? ";
    };
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (filled == 'j' || i == 0 || i == h - 1 || j == 0 || j == w - 1) {
                cout << "*";
            } else {
                cout << " ";
            };
        };
        cout << endl;
    };
};

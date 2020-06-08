/*
Aufgabe 1: Entwickeln Sie ein C++-Programm, das aus ‘x‘-Zeichen ein leeres 
Rechteck zeichnet, nachdem die Werte für Höhe und Breite eingegeben worden sind.
Beispiel für die Ausgabe:
Bitte Hoehe eingeben: 5
Bitte Breite eingeben: 10
x x x x x x x x x x
x                 x 
x                 x 
x                 x 
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
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (i == 0 || i == h - 1 || j == 0 || j == w - 1) {
                cout << "*";
            } else {
                cout << " ";
            };
        };
        cout << endl;
    };
};

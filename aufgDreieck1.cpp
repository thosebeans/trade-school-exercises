/*
Aufgabe: Entwickeln Sie ein C++-Programm, das aus X-Zeichen ein gleichschenk-
liges Dreieck gemäß dem abgebildeten Muster zeichnet, nachdem der Wert für seine 
Höhe eingegeben worden ist.
Beispiel für die Ausgabe:
Bitte Hoehe eingeben: 4
x
x x
x x x
x x x x
Gesucht: Struktogramm, Programm
*/

#include <iostream>

using namespace std;

int main() {
    for (int i = 1; i <= 4; i++) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        };
        cout << endl;
    };
};

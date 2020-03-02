/*
Aufgabe Maximum-Suche:
Erzeugen Sie ein Feld mit 5 ganzen Zufallszahlen aus dem Bereich 0 bis 99 und
geben Sie die Werte mit Nummerierung auf dem Bildschirm aus.
Geben Sie anschließend die größte Zahl und ihre Position im Feld aus.

Die Ausgabe des
Programms soll genau
dem nebenstehenden
Beispiel entsprechen.
(Hinweis: Die Zahlenwerte
sind hier frei erfunden!)

Wert:  20 78 89 38 48
Index: 0  1  2  3  4

Der groesste Wert ist: 89
und steht an Position: 2
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int arr[5];
    for (int i = 0; i < 5; i++) {
        arr[i] = rand() % 100;
    };
    cout << "Wert:";
    for (int i = 0; i < 5; i++) {
        cout << '\t' << arr[i];
    };
    cout << endl;
    cout << "Index:";
    for (int i = 0; i < 5; i++) {
        cout << '\t' << i;
    };
    cout << endl;
    int ndx = 0;
    for (int i = 0; i < 5; i++) {
        if (arr[i] > arr[ndx]) {
            ndx = i;
        };
    };
    cout << "Der groesste Wert ist:" << '\t' << arr[ndx] << endl;
    cout << "und steht an Position:" << '\t' << ndx << endl;
};

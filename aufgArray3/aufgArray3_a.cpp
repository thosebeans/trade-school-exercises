/*
Aufgabe Arrays
a)
Entwickeln Sie ein Programm, das 5 eingegebene Float-Werte in einem Feld 
speichert und anschließend ihre Summe sowie den prozentualen Anteil jedes Wertes
auf dem Bildschirm ausgibt.
b)
Verändern Sie das Programm so, dass die Anzahl der Werte (max. 100) zu Beginn 
vom Nutzer festgelegt werden kann.
c)
Verändern Sie das Programm so, dass eine vorher nicht festgelegte Anzahl von 
Werten (max. 100) eingegeben werden kann, bis der Nutzer eine Null eingibt.
ges.: Programm 
*/

#include <iostream>

using namespace std;

int main() {
    float val[100];
    float sum = 0;
    for (int i = 0; i < 5; i++) {
        cout << "Wert " << (i+1) << ": ";
        cin >> val[i];
        sum = sum + val[i];
    };
    cout << "Summe: " << sum << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Prozentualer Anteil: Wert " << (i+1) << ": " << ((val[i] / sum) * 100) << "%" << endl;
    };
};

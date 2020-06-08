/*
b)
Verändern Sie das Programm so, dass die Anzahl der Werte (max. 100) zu Beginn 
vom Nutzer festgelegt werden kann.
*/

#include <iostream>

using namespace std;

int main() {
    float val[100];
    int max;
    cout << "Anzahl Werte: ";
    cin >> max;
    float sum = 0;
    for (int i = 0; i < max; i++) {
        cout << "Wert " << (i+1) << ": ";
        cin >> val[i];
        sum = sum + val[i];
    };
    cout << "Summe: " << sum << endl;
    for (int i = 0; i < max; i++) {
        cout << "Prozentualer Anteil: Wert " << (i+1) << ": " << ((val[i] / sum) * 100) << "%" << endl;
    };
}

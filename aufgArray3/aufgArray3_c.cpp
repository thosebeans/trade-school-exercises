/*
c)
Verändern Sie das Programm so, dass eine vorher nicht festgelegte Anzahl von 
Werten (max. 100) eingegeben werden kann, bis der Nutzer eine Null eingibt.
*/

#include <iostream>

using namespace std;

int main() {
    float val[100];
    int valnum = 0;
    float sum = 0;
    for (int i = 0; i < 100; i++) {
        cout << "Wert " << (i+1) << ": ";
        cin >> val[i];
        if (val[i] == 0) {
            break;
        };
        valnum++;
        sum = sum + val[i];
    };
    cout << "Summe: " << sum << endl;
    for (int i = 0; i < valnum; i++) {
        cout << "Prozentualer Anteil: Wert " << (i+1) << ": " << ((val[i] / sum) * 100) << "%" << endl;
    };
}

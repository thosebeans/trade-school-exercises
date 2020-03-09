/*
Von einer automatischen Messeinrichtung wurde die Außentemperatur an einem Wintertag
zu jeder vollen Stunde gemessen und die erhaltenen Werte in der Datei „aufTemperatur1-3.dat“
gespeichert.
Aufgabe 1: Ermitteln Sie die höchste und die niedrigste Temperatur einschließlich dem
Zeitpunkt, an dem diese auftraten, sowie das Tagesmittel.
Die Ergebnisse sind
gemäß der neben-
stehenden Abbildung
auszugeben:

Auswertung Temperaturdaten:

Minimum: -2.6 Grad Celsius um 6.00 Uhr
Maximum: 5.1 Grad Celsius um 16.00 Uhr

Tagesmittel: 0.9875 Grad Celsius
*/
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    float arr[24];
    float sum = 0;
    int max = 0;
    int min = 0;

    ifstream fin("aufTemperatur1-3.dat");

    for (int i = 0; i < 24; i++) {
        fin >> arr[i];
        sum += arr[i];
        if (arr[i] > arr[max]) {
            max = i;
        };
        if (arr[i] < arr[min]) {
            min = i;
        };
    };

    cout << "Auswertung Temperaturdaten:" << endl
         << endl
         << "Minimum:\t" << arr[min] << " Grad Celsius um " << min << ".00 Uhr" << endl
         << "Maximum:\t" << arr[max] << " Grad Celsius um " << min << ".00 Uhr" << endl
         << endl
         << "Tagesmittel: " << (sum/24) << " Grad Celsius" << endl;
};

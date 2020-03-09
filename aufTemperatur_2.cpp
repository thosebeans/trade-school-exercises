/*
Ermitteln Sie außerdem den Zeitpunkt des stärksten Temperatur-Anstiegs.

Auswertung Temperaturdaten:

Minimum: -2.6 Grad Celsius um 6.00 Uhr
Maximum: 5.1 Grad Celsius um 16.00 Uhr

Tagesmittel: 0.9875 Grad Celsius

Der staerkste Anstieg trat zwischen 12 und 13 Uhr auf.
*/
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    float arr[24];
    float sum = 0;
    int max = 0;
    int min = 0;
    int rise = 0;

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
        if (i+1 < 24) {
            if (arr[i + 1] - arr[i] > arr[rise + 1] - arr[rise]) {
                rise = i;
            };
        };
    };

    cout << "Auswertung Temperaturdaten:" << endl
         << endl
         << "Minimum:\t" << arr[min] << " Grad Celsius um " << min << ".00 Uhr" << endl
         << "Maximum:\t" << arr[max] << " Grad Celsius um " << min << ".00 Uhr" << endl
         << endl
         << "Tagesmittel: " << (sum/24) << " Grad Celsius" << endl
         << endl
         << "Der staerkste Anstieg trat zwischen " << rise << " und " << (rise + 1) << " Uhr auf." << endl;
};

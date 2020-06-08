/*
Temperaturverlauf:

Grad
Celsius
*/
#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main() {
    int arr[24];

    ifstream fin("aufTemperatur1-3.dat");

    for (int i = 0; i < 24; i++) {
        float f;
        fin >> f;
        arr[i] = static_cast<int>(round(f * 2));
    };

    cout << "Temperaturverlauf:" << endl
         << endl
         << "Grad" << endl
         << "Celsius" << endl;

    for (int i = 11; i > -12; i--) {
        if (i % 2 != 0) {
            cout << (i > 0 ? " " : "") << (i/2);
        } else {
            cout << " ";
        };
        cout << " ";
        for (int j = 0; j < 24; j++) {
            cout << (arr[j] == i ? "o" : " ") << "  ";
        };
        cout << endl;
    };
    cout << "   1  2  3  4  5  6  7  8  9  10 11 12 13 14 15 16 17 18 19 20 21 22 23 Uhr" << endl;
};

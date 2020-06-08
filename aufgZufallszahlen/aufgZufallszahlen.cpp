#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int arr[100];

    cout << "Reihe 1: 0..99" << endl;
    for (int i = 0; i < 100; i++) {
        arr[i] = rand() % 100;
        cout << arr[i] << "  ";
    };
    cout << endl << endl;

    cout << "Reihe 2: 1..100" << endl;
    for (int i = 0; i < 100; i++) {
        int r = 0;
        for (; r == 0; r = rand() % 101) {};
        arr[i] = r;
        cout << arr[i] << "  ";
    };
    cout << endl << endl;
};

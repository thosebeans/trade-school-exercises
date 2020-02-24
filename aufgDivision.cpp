/*
Aufgabe:
Schreiben Sie ein C++-Programm, das folgende Aktionen genau in der angegebenen Reihenfolge 
ausführt:
1. Eingabe von 2 ganzen Zahlen
2. Ausgabe des Ergebnisses der Gleitkommadivision dieser Zahlen
3. Ausgabe des Ergebnisses der Ganzzahldivision dieser Zahlen
Die Ausgabe des 
Programms soll genau 
Bitte 2 ganze Zahlen eingeben:
dem nebenstehenden 
Zahl1: 5
Beispiel entsprechen
Zahl2: 3
(Nutzereingaben fett 
Gleitkomma: 5 / 3 = 1.66667
dargestellt)
Ganzzahl:   5 / 3 = 1 Rest 2
*/

#include <iostream>

using namespace std;

int main() {
    cout << "Bitte 2 ganze Zahlen eingeben:" << endl;
    int a,b;
    cout << "Zahl1: ";
    cin >> a;
    cout << "Zahl2: ";
    cin >> b;
    cout << "Gleitkomma: " << a << " / " << b << " = " << static_cast<float>(a)/static_cast<float>(b) << endl;
    cout << "Ganzzahl:   " << a << " / " << b << " = " << a/b << " Rest " << a%b << endl;
};

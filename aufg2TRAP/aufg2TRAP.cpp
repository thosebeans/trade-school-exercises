/*
Aufgabe: Entwickeln Sie ein C++-Programm, das folgende Aktionen ausführt:
Vom Nutzer sollen 2 ganze Zahlen eingegeben werden.
Zuerst soll getestet werden, ob erste Zahl größer oder gleich der zweiten Zahl ist. Ist
dies nicht der Fall, soll das Programm mit der Meldung „Die zweite Zahl ist größer.“ 
beendet werden.
Traf die erste Bedingung zu, soll als nächstes getestet werden, ob beide Zahlen 
ohne Rest teilbar sind (also ob der mittels Modulo berechnete Rest Null ist). Falls 
nicht, soll das Programm mit der Meldung „Zahlen sind nicht ohne Rest teilbar.“ 
beendet werden.
Traf die zweite Bedingung zu, soll schließlich noch getestet werden, ob beide 
Zahlen gleich sind. Ist dies der Fall, soll das Programm mit der Meldung „Zahlen 
sind gleich“, oder anderenfalls mit der Meldung „Zahlen sind ohne Rest teilbar.“ 
beendet werden.
ges.: Struktogramm, Programm
*/

#include <iostream>

using namespace std;

int main() {
    int a,b;
    cout << "Zahl 1: ";
    cin >> a;
    cout << "Zahl 2: ";
    cin >> b;
    if (b > a) {
        cout << "Die zweite Zahl ist größer." << endl;
        return 0;
    };
    if (a % b != 0) {
        cout << "Zahlen sind nicht ohne Rest teilbar." << endl;
        return 0;
    };
    if (a == b) {
        cout << "Zahlen sind gleich." << endl;
    } else {
        cout << "Zahlen sind ohne Rest teilbar." << endl;
    };
    return 0;
};

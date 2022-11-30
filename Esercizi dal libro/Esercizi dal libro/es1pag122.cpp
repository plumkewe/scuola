#include <iostream>

using namespace std;

//  Creato: 30/11/22
//  Da: swampkewe

void crescente (int a, int b) {

    if (a > b)
        cout << b << " " << a;
    else
        cout << a << " " << b;
}


int main() {
    setlocale(LC_ALL, "italian");

    int a, b;

    cout << "inserisci i due numeri: ";
    cin >> a >> b;

    crescente(a, b);

    return 0;
}

//  Scrivi un algoritmo e relativo codice in C++ che, dati in input due numeri, li scriva in ordine crescente.
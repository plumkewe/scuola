#include <iostream>

using namespace std;

//  Creato: 30/11/22
//  Da: swampkewe

void Crescente (int a, int b) {

    if (a > b)
        cout << b << " " << a;
    else
        cout << a << " " << b;
}


int main() {
    setlocale(LC_ALL, "italian");

    int a = 0;
    int b = 0;

    cout << "inserisci i due numeri: ";
    cin  >> a >> b;

    Crescente (a, b);

    return 0;
}

//  Scrivi un algoritmo e relativo codice in C++ che, dati in input due numeri, li scriva in ordine crescente.
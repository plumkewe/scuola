#include <iostream>

using namespace std;

//  Creato: 30/11/22
//  Da: swampkewe

void pariodispari (int a) {

    a % 2 == 0 ? cout << "Il numero è pari" : cout << "Il numero non è pari";


}

int main() {
    setlocale(LC_ALL, "italian");

    int a;

    cout << "Inserisci un numero: ";
    cin >> a;

    pariodispari(a);


    return 0;
}

// crivi un algoritmo e relativo codice C++ che, dato in input un numero, stabilisca se è pari o dispari.
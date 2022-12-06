#include <iostream>

using namespace std;

//  esercizio 33

void numeripari(int fino_a) {

    for (int i = 0; i < fino_a; ++i){

        if (i % 2 == 0) {
            cout << i << " ";
        }

    }

}

int main() {
    setlocale(LC_ALL, "italian");

    numeripari(100);


	return 0;
}

//  Scrivi un algoritmo e relativo codice C++ che
//  visualizzi i primi 100 numeri pari.
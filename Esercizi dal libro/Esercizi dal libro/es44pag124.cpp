#include <iostream>

using namespace std;

//  esercizio 44 pagina 124

void MultipliTre();


int main() {

    MultipliTre();


    return 0;
}

void MultipliTre()
{
    for (int i = 10; i < 100; i++)
        
        if (i % 3 == 0)
        cout << i << " ";
}

//  Scrivi un algoritmo e relativo codice C++ che
//  visualizzi tutti i numeri da 10 a 100 multipli di 3
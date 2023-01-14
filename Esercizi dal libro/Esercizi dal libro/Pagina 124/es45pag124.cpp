#include <iostream>

using namespace std;

//  Esercizio 45 pagina 124

void MultipliTreCinque();


int main() {

    MultipliTreCinque();


    return 0;
}

void MultipliTreCinque()
{    
    for (int i = 10; i < 100; i ++)
        
        if ((i % 3 == 0) || (i % 5 == 0))
        cout << i << " ";
}

//  Scrivi un algoritmo e relativo codice C++ che
//  visualizzi tutti i numeri da 10 a 100 multipli di 3 e 5
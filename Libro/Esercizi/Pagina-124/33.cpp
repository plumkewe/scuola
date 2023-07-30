#include <iostream>

using namespace std;

//  Esercizio 33 pagina 124

void PariNumeri(int fino_a);


int main()
{
    setlocale(LC_ALL, "italian");

    PariNumeri(100);


    return 0;
}

void PariNumeri(int fino_a)
{
    for (int i = 0; i < fino_a; ++i)
        
        (i % 2 == 0) ? cout << i : cout << " ";
}

//  Scrivi un algoritmo e relativo codice C++ che
//  visualizzi i primi 100 numeri pari.
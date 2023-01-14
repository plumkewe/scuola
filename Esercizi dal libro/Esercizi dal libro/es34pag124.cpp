#include <iostream>

using namespace std;

//  Esercizio 34 pagina 124


int main()
{
    setlocale(LC_ALL, "italian");
    
    int numeroQuanti = 0;

    cout << "Inserisci un numero: ";
    cin  >> numeroQuanti;


    for (int i = 0; i < numeroQuanti; ++i)
        
        (i % 2 == 0) ? cout << i : cout << " ";


    return 0;
}

//  Generalizza l'esercizio precedente facendolo
//  operare su N numeri.
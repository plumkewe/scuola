#include <iostream>

using namespace std;

//  Esercizio 36 pagina 124


int main()
{
    setlocale(LC_ALL, "italian");

    int numeroQuanti    = 0;
    int numero          = 0;
    
    int sommaDispari    = 0;

    cout << "Quanti: ";
    cin  >> numeroQuanti;


    for (int i = 0; i < numeroQuanti; i++)
    {
        cout << "Inserisci un numero: ";
        cin  >> numero;
        
        while (numero > 100)
        {
                cout << "! Numero non valido, inserisci un numero <100: ";
                cin  >> numero;
        }
        
        if (numero % 2 == 1)
            sommaDispari += numero;
        
    }

   cout << "\nLa somma dei soli numeri dispari è pari a: " << sommaDispari << endl;


    return 0;
}

//  Scrivi un algoritmo e relativo codice C++ che
//  legga N numeri interi (con N < 100) e calcoli la somma dei soli numeri dispari.
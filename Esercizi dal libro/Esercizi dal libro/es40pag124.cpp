#include <iostream>

using namespace std;

//  Esercizio 40 pagina 124


int main() {
    setlocale(LC_ALL, "italian");

    int numeroRicerca       = 0;
    int numeroQuanti        = 0;
    
    int contatoreUguali     = 0;
    int contatoreMinori     = 0;
    int contatoreMaggiori   = 0;

    cout << "Inserisci un numero: ";
    cin  >> numeroRicerca;

    cout << "Quanti: ";
    cin  >> numeroQuanti;


    for (int i = 1; i <= numeroQuanti; i++) {
        
        if (numeroRicerca < i)
            contatoreMinori++;
        
        if (numeroRicerca == i)
            contatoreUguali++;
        
        if (numeroRicerca > i)
            contatoreMaggiori++;
        
    }
    
    cout << "\nNumeri uguali al tuo: "      << contatoreUguali << endl;
    cout << "\nNumeri minori del tuo: "     << contatoreMinori << endl;
    cout << "\nNumeri maggiori del tuo: "   << contatoreMaggiori << endl;


    return 0;
}

//  Scrivi un algoritmo e relativo codice C++ che, dati in input N numeri interi e un numero X,
//  a. quanti numeri sono maggiori di X;
//  b. quanti sono minori di X:
//  c. quanti sono uguali a X.
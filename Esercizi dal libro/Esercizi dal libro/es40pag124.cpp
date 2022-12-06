#include <iostream>

using namespace std;

//  esercizio 40, con while

int uguali(int il_numero, int tra_quanti){ // un pò inutile ma vabbé

    int uguali = 0;

    for (int i = 1; i <= tra_quanti; ++i) {

        if (il_numero == i) {
            uguali++;
        }

    }


    return uguali;
}

int minori(int il_numero, int tra_quanti){

    int minori = 0;

    for (int i = 1; i <= tra_quanti; ++i) {

        if (il_numero > i) {
            minori++;
        }

    }


    return minori;
}

int maggiori(int il_numero, int tra_quanti){

    int maggiori = 0;

    for (int i = 1; i <= tra_quanti; ++i) {

        if (il_numero < i) {
            maggiori++;
        }

    }


    return maggiori;
}



int main() {
    setlocale(LC_ALL, "italian");
	
	int iNumero, iQuanti;

	cout << "Sarò in grado di stabilire quanti numeri sono maggiori minori o uguali al tuo numero: ";
	
	cin >> iNumero;
	
	cout << "Inserisci tra quanti numeri lo vuoi cercare: ";
	cin >> iQuanti;

	cout << "\nNumeri che sono uguali al tuo numero " << iNumero << " sono: " << uguali(iNumero, iQuanti);
    cout << "\nNumeri che sono maggiori del tuo numero sono: " << maggiori(iNumero, iQuanti);
    cout << "\nNumeri che sono minori del tuo numero sono: " << minori(iNumero, iQuanti);
	
}

//  Scrivi un algoritmo e relativo codice C++ che, dati in input N numeri interi e un numero X,
//  a. quanti numeri sono maggiori di X;
//  b. quanti sono minori di X:
//  c. quanti sono uguali a X.
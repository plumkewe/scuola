#include <iostream>

using namespace std;

//  esercizio 35

void numeridispari(int fino_a) {

    for (int i = (fino_a - 1); i > 0; --i){

        if (i % 2 == 1) {
            cout << i << " ";
        }

    }

}


int main() {
    setlocale(LC_ALL, "italian");

	int iNumero;
	
	cout << "Inserisci un numero e io ti dirò quanti numeri dispari lo perseguitano: ";
	cin >> iNumero;
	
	cout << "\nil tuo numero " << iNumero << " viene perseguitato da seguenti numeri dispari: ";

    numeridispari(iNumero);
	

	return 0;
}

//  Scrivi un algoritmo e relativo codice C++ che
//  visualizzi i primi N numeri dispari.
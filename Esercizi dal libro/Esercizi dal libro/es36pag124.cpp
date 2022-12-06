#include <iostream>

using namespace std;

//  esercizio 36

int sommanumeridispari(int fino_a) {

    int somma = 0;

    for (int i = (fino_a - 1); i > 0; --i){

        if (i % 2 == 1) {
            somma += i;
        }

    }

    return somma;

}


int main() {
    setlocale(LC_ALL, "italian");
	
	int iNumero;

    cout << "Inserisci un numero minore di 100 e io ti farò la somma dei SOLI numeri dispari: ";
    cin >> iNumero;

    while (iNumero > 100){

        cout << "[!] Devi inserire un numeri che sia minore di 100: ";
        cin >> iNumero;

    }

   cout << "\nLa somma è pari a: " << sommanumeridispari(iNumero);

	
	return 0;
}

//  Scrivi un algoritmo e relativo codice C++ che
//  legga N numeri interi (con N < 100) e calcoli la somma dei soli numeri dispari.
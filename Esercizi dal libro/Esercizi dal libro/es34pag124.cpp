#include <iostream>

using namespace std;

//  esercizio 34

void numeripari(int dal_numero) {

    for (int i = (dal_numero - 1); i > 0; --i){

        if (i % 2 == 0) {
            cout << i << " ";
        }

    }

}

int main() {
    setlocale(LC_ALL, "italian");
	
    int iNumero;
	
	cout << "inserisci un numero e io ti dirò quanti numeri pari lo perseguitano: ";
	cin >> iNumero;
	
	cout << "\nIl tuo numero " << iNumero << " viene perseguitato da seguenti numeri pari: ";

    numeripari(iNumero);


	return 0;
}

//  Generalizza l'esercizio precedente facendolo
//  operare su N numeri.
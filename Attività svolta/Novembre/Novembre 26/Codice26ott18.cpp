#include <iostream>
#include <algorithm>

using namespace std;

//  non sono soddisfatto di come l'ho fatto ma daltronde il comando non richedeva la verificazione dei doppioni... vabbé.


int main() {
	setlocale(LC_ALL, "italian");

    int aPrimo[5],
        sQuanti = sizeof(aPrimo)/sizeof(aPrimo[0]),
        aSecondo[sQuanti],
        aTerzo[sQuanti * 2],
        sUnione = 0;

    for (int i = 0; i < sQuanti; ++i, ++sUnione) {

        cout << "Inserisci il " << i + 1 << " numero: ";
        cin >> aPrimo[i];

        aTerzo[sUnione] = aPrimo[i];

        if (i == sQuanti - 1) {

            cout << "\nBene hai inserito 5 numeri ora ne dovrai inserire altri 5\n";

            for (int j = 0; j < sQuanti; ++j, ++sUnione) {

                cout << "Inserisci un'altro numero (" << j + 1 << "): ";
                cin >> aSecondo[j];

                aTerzo[sUnione] = aSecondo[j];

            }

        }

    }

    sort(aTerzo, aTerzo + sQuanti * 2);

    cout << "\nStampo il terzo array con dei valori ordinati:\n";

    for (int i = 0; i < sQuanti * 2; ++i) {

        cout << aTerzo[i] << " ";

    }
	
	return 0;
}

//  Riempire un array con 5 elementi inseriti dall’utente. Leggere due array di interi di 5
//  posizioni ognuno dei due già ordinato in ordine crescente, fonderli in un nuovo array che
//  dovrà essere anch’esso ordinato con ordine crescente.
//  Ad esempio array1 0,2,3,7,8 array2 1,4,5,9,12 array fuso 0,1,2,3,4,5,7,8,9,12.
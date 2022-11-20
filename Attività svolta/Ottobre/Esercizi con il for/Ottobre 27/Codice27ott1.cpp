#include <iostream>

using namespace std;



int main() {
	setlocale(LC_ALL, "italian"); //  per poter usare gli accenti
	
	short int i = 0;
	int oSomma, iNumero = 0;
	
	cout << "Inserisci un numero e io calcolerò solo i numeri pari tra 0 e n (n compreso)\n"
		 << "inserisci il numero n: ";
	cin >> iNumero;
	
	if (iNumero < 0) {
		iNumero -= iNumero + iNumero;
	}
	
	for (short int i = 0; i <= iNumero; ++ i) {
		if (i % 2 == 0) {
			oSomma += i;
		}
	}
	
	cout << "\nLa somma dei numeri compresi tra 0 e " << iNumero << " è pari a " << oSomma;
	
	return 0;
}
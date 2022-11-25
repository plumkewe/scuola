#include <iostream>

using namespace std;

//  questo esercizio non è stato modificato, vuol dire che è ugual al come lo avevo fatto tanto tempo fa, molto semplice non ha bisogno delle spiegazioni!


int main() {
	setlocale(LC_ALL, "italian");  //  per poter utilizzare gli accenti

	int iNumero;
	
	cout << "Bene, sarò in grado di stabilire se il tuo numero è pari o dispari..." << "\n" << "Inserisci un numero: ";
	cin >> iNumero;
	
	
	if (iNumero % 2 == 0) {
		cout << "\nOh, il tuo numero è pari, ho indovinato ?";
	}
	
	else {
		cout << "\nHmm... pare che il tuo numero sia dispari, ho indovinato ?";
	}
	
	return 0;
}
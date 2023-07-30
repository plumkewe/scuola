#include <iostream>

using namespace std;

//  è un esercizio talmente semplice che inutile che lo spieghi

int main() {
	setlocale(LC_ALL, "italian"); //  per poter utilizzare gli accenti

	int iNumero, oRISULTATO, i = 0;
	
	cout << "hey la, sarò in grado di sommare i tuoi 20 numeri\n";
	
	for (int i = 1; i < 21; i ++) {
		
		cout << "inserisci il tuo " << i << " numero: ";
		cin >> iNumero; // mi piacerebbe sapere se è possibile fare un cin in linea dei 20 numeri senza fare cin >> a, b, c...
		oRISULTATO += iNumero;
	}
	
	cout << "\nBene, la somma dei tuoi 20 numeri è pari a " << oRISULTATO;

	
	return 0;
}
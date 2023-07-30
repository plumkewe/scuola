#include <iostream>

using namespace std;

//  un esercizio semplice non ce bisogno di spiegarlo

int main() {
	setlocale(LC_ALL, "italian"); //  per poter utilizzare gli accenti
	
	int iNumero, oSomma = 0;
	
	cout << "Inserisci un numero intero (diverso dal 0) e io ti dirò la somma dei numero da 0 al tuo\n"
		 << "inserisci un numero: ";
	cin >> iNumero;
	
	while (iNumero == 0) {
		cout << "\n[!] Dai avevo detto diverso dal zero guarda cosa mi tocca fare scrivere altre righe inutili... riprova su...\n"
			 << "inserisci un numero: ";
		cin >> iNumero;
	}
	
	
	for (short int i = iNumero; i >= 0; -- i) {
		oSomma += i;
	}
	
	cout << "\nla somme da 0 al tuo numero (" << iNumero << ") fa " << oSomma;
	


	return 0;
}
#include <iostream>

using namespace std;

//  questo esercizio non è stato modificato, vuol dire che è ugual al come lo avevo fatto tanto tempo fa, molto semplice non ha bisogno delle spiegazioni!

int main() {
	setlocale(LC_ALL, "italian");  //  per poter utilizzare gli accenti
	
	int iNumero1, iNumero2;
	
	cout << "Questo programmino sarà in grado di stampare i tuoi due numeri in ordine crescente\n";
	
	cout << "Inserisci il tuo primo numero: "; 
	cin >> iNumero1;
	
	cout << "Bene, ora inserisci un'altro numero: ";
	cin >> iNumero2;
	
	if (iNumero1 < iNumero2) {
		cout << "\nStampo i tuoi numeri in ordine crescente... " << iNumero1 << " , " << iNumero2;
	}
	
	else {
		
		if (iNumero1 > iNumero2) {
			cout << "\nStampo i tuoi numeri in ordine crescente... " << iNumero2 << " , " << iNumero1;
			
		}
		
		else {
			cout << "\nOh wow pare che i tuoi numeri siano uguali... fa niente riavvia il programma e riprova";
		
		}
	
	}
	
	return 0;
}
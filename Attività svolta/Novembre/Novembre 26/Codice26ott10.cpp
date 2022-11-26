#include <iostream>

using namespace std;

//  


int main() {
	setlocale(LC_ALL, "italian");
	
	short int aNumeri [6],
	iNumero, sMaggiori = 1,
	sQuanti = sizeof(aNumeri)/sizeof(aNumeri[0]);
	
	for (short int unsigned i = 0; i < sQuanti; ++ i){
		
		cin >> aNumeri[i];
		
	}
	
	cout << "\nInserisci un numero: ";
	cin >> iNumero;
	
	for (short int unsigned i = 0; i < sQuanti; ++ i){
		
		if (iNumero < aNumeri[i]){
			
			++ sMaggiori;
			
		}
		
	}
	
	cout << "\nNumeri maggiori: " << sMaggiori <<
			"\nNumeri minori: " << sQuanti - sMaggiori;
	
	return 0;
}

//  Riempire un array con 6 elementi inseriti dall’utente .Leggere l’array e un ulteriore numero
//  intero e dire quanti numeri memorizzati nell’array sono inferiori e quanti superiori
//  dell’ultimo numero letto. Visualizzare a video il risultato.
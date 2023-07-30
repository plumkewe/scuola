#include <iostream>

using namespace std;

//  


int main() {
	setlocale(LC_ALL, "italian");
	
	short int aNumeri [8],
			  sQuanti = sizeof(aNumeri)/sizeof(aNumeri[0]);
	
	for (short int unsigned i = 0; i < sQuanti; ++ i){
		
		cin >> aNumeri[i];
		
		while (aNumeri[i] < 0){
			
			cout << "Riprova: ";
			cin >> aNumeri[i];
		}
		
	}
	
	for (short int unsigned i = 0; i < sQuanti; ++ i){
		
		cout << aNumeri[i] <<  " ";
		
	}
	
	
	return 0;
}

//  Riempire un array con 8 elementi inseriti dall’utente che siano maggiori di zero,
//  se viene inserito un numero che non lo è viene fatto reinserire fino a quando rispetta la
//  condizione. Stampare a video l’array.
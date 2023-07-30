#include <iostream>

using namespace std;

//  


int main() {
	setlocale(LC_ALL, "italian");
	
	short int aNumeri [5],
	oMax = 0,
	sQuanti = sizeof(aNumeri)/sizeof(aNumeri[0]);
	
	for (short int unsigned i = 0; i < sQuanti; ++ i){
		
		cin >> aNumeri[i];
		
		if (aNumeri[oMax] < aNumeri[i]){
			oMax = i;
		}
		
	}
	
	cout << "Il massimo numero è: " << aNumeri[oMax] << " ed si trova in questa posizione: " << oMax << "\n";
	
	for (short int unsigned i = 0; i < sQuanti; ++ i){
		
		cout << aNumeri[i] <<  " ";
		
	}
	
	
	return 0;
}

//  Riempire un array con 5 elementi inseriti dall’utente .Leggere l’array e dopo averlo letto
//  cercare al suo interno il massimo e scrivere il massimo e la posizione della cella in cui è
//  memorizzato. Stampare a video l’array.
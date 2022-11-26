#include <iostream>

using namespace std;

//  


int main() {
	setlocale(LC_ALL, "italian");
	
	short int aNumeri [10],
			  sSupporto = 0,
			  sQuanti = sizeof(aNumeri)/sizeof(aNumeri[0]);
	
	for (short int unsigned i = 0; i < sQuanti; ++ i){
		
		cin >> aNumeri[i];
		
	}
	
	for (short int unsigned i = 0, n = 1; n < sQuanti + 1; ++ i, ++ n){
		
		
		if (aNumeri[n] > aNumeri[i]){
			
			++ sSupporto;
		}
		
	}
	
	if (sSupporto != 10) {
		cout << "Non sono in ordine crescente";
		
		return 0;
	}
	
	cout << "Sono in ordine crescete";
	
	return 0;
}

//  Riempire un array con 10 elementi inseriti dall’utente, Leggere l’array e dire se i valori
//  memorizzati nell’array sono memorizzati in modo crescente.
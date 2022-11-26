#include <iostream>

using namespace std;

//  


int main() {
	setlocale(LC_ALL, "italian");
	
	short int aNumeri [8],
	sQuanti = sizeof(aNumeri)/sizeof(aNumeri[0]);
	
	for (short int unsigned i = 0; i < sQuanti; ++ i){
		
		cin >> aNumeri[i];
		
	}

	aNumeri[1] = 9;
	aNumeri[4] = 9;
	
	for (short int unsigned i = 0; i < sQuanti; ++ i){
		
		cout << aNumeri[i] <<  " ";
		
	}
	
	
	return 0;
}

//  Dopo aver letto e memorizzato 8 numeri in un array, memorizzare il numero 9 nelle
//  posizioni 2 e 5 e stampare a video il contenuto dell’array.
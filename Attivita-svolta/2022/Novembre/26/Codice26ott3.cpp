#include <iostream>

using namespace std;

//  


int main() {
	setlocale(LC_ALL, "italian");
	
	double aNumeri [8],
		   oSomma = 0,
		   sQuanti = sizeof(aNumeri)/sizeof(aNumeri[0]);
			
	for (short int unsigned i = 0; i < sQuanti; ++ i){
		
		cin >> aNumeri[i];
		
	}
	
	for (short int unsigned i = 0; i < sQuanti; ++ i){
		
		cout << aNumeri[i] <<  " ";
		
		oSomma += aNumeri[i];
	}
	
	cout << "\nLa media: " << oSomma/sQuanti <<
		    "\nLa somma: " << oSomma;
	
	
	return 0;
}

//  Leggere e memorizzare in un array di 8 celle, 8 numeri reali, dopo averli memorizzati
//  calcolarne la somma e la media e stampare a video il contenuto dell’array
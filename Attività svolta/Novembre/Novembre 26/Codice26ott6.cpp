#include <iostream>

using namespace std;

//  


int main() {
	setlocale(LC_ALL, "italian");
	
	short int aNumeri [11],
			  n = 0,
			  sQuanti = sizeof(aNumeri)/sizeof(aNumeri[0]);

	fill(aNumeri, aNumeri + sQuanti, 0);
		
		cin >> n;
		
		aNumeri[n] = 1;
	
	for (short int unsigned i = 1; i < sQuanti; ++ i){
		
		cout << aNumeri[i] <<  " ";
		
	}
	
	
	return 0;
}

//  Creare un array di interi con 10 posti, inserire zeri in tutte le celle: inserire da tastiera la
//  posizione in cui inserire un 1 e inserirlo nella corretta posizione dell’array. Stampare a
//  video il contenuto dell’array.
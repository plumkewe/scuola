#include <iostream>

using namespace std;

//  


int main() {
	setlocale(LC_ALL, "italian");
	
	short int unsigned aNumeri [10],
					   sQuanti = sizeof(aNumeri)/sizeof(aNumeri[0]);
	
	
	for (short int unsigned i = 0; i < sQuanti; ++ i){
		
		aNumeri[i] = i;
	}

	for (short int unsigned i = 0; i < sQuanti; ++ i){
		
		cout << aNumeri[i] << " ";
	}
	
	
	return 0;
}

//  Memorizzare in un array di dieci posizioni i primi dieci numeri naturali e stampare a video il
//  contenuto dell’array.
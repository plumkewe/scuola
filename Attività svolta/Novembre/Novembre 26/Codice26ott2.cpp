#include <iostream>

using namespace std;

//  


int main() {
	setlocale(LC_ALL, "italian");
	
	short int unsigned aNumeri [10],
					   sQuanti = sizeof(aNumeri)/sizeof(aNumeri[0]);
	
	fill(aNumeri, aNumeri + sQuanti, 3);
	
	
	for (short int unsigned i = 0; i < sQuanti; ++ i){
		
		cout << aNumeri[i] << " ";
	}
	
	
	return 0;
}

//  Memorizzare in un array di dieci posizioni il numero 3 in tutte le posizioni e stampare a
//  video il contenuto dell’array
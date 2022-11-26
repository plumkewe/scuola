#include <iostream>

using namespace std;

//  


int main() {
	setlocale(LC_ALL, "italian");
	
	short int aNumeri [7],
			  oZero = 0,
			  sQuanti = sizeof(aNumeri)/sizeof(aNumeri[0]);
	
	for (short int unsigned i = 0; i < sQuanti; ++ i){
		
		cin >> aNumeri[i];
		
		if (aNumeri[i] == 0) {
			
			++ oZero;
		}
	
	}
	
	if (oZero <! 0) {
		
		cout << "\nNon ci sono zeri nel array";
		
		return 0;
	}
	
	cout << "\nCi sono: " << oZero << " zeri nel array";

	
	return 0;
}

//  Leggere e memorizzare in un array sette numeri, dopo averli letti contare quante volte è
//  stato memorizzato lo zero e stampare a video il risultato.
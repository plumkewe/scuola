#include <iostream>

using namespace std;

//  


int main() {
	setlocale(LC_ALL, "italian");
	
	int aArray[10];
	int conta = 0;
	
	for (int i = 0; i < 10; ++ i) {
		
		cout << "Inserisci il tuo " << i + 1 << " numero: ";
		cin >> aArray[i];
		
		aArray[i] % 2 != 0 ? conta++ : 0;
		
	}
	
	cout << "\nSono " << conta << " gli elementi dispari in questo array";
	
	
	return 0;
}

//  Realizzare un programma in linguaggio C++ che acquisisca da tastiera un array di 10. Il programma deve
//  contare quanti elementi dell’array sono dispari.
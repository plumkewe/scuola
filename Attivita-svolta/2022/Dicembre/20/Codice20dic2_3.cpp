#include <iostream>

using namespace std;

//  potevo usare le funzioni ma deh


int main() {
	setlocale(LC_ALL, "italian");
	
	int aArray[10];
	int supporto = 0;
	
	for (int i = 0; i < 10; ++ i) {
		
		cout << "Inserisci il tuo " << i + 1 << " numero: ";
		cin >> aArray[i];
		
	}
	
	cout << "\nArray prima di cambiamento: ";
	
	for (int i = 0; i < 10; ++i) {
		
		cout << aArray[i] << " ";
		
	}
	
	for (int i = 0, j = 9; i < 5; ++i, j--) {
		
		supporto = aArray[i];
		aArray[i] = aArray[j];
		aArray[j] = supporto;
		
	
	}
	
	cout << "\nArray dopo il cambiamento: ";
	
	for (int i = 0; i < 10; ++i) {
		
		cout << aArray[i] << " ";
		
	}
	
	return 0;
}

//  Realizzare un programma in linguaggio C++ che acquisisca da tastiera un array di 10 elementi, inverta i sui
//  elementi e poi visualizzi a video il risultato.
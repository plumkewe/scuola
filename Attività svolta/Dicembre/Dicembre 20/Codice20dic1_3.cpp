#include <iostream>

using namespace std;

//  


int main() {
	setlocale(LC_ALL, "italian");
	
	int aArray[10];
	int max = 0;
	int maxposizione = 0;
	int supporto = 0;
	
	for (int i = 0; i < 10; ++ i) {
		
		cout << "Inserisci il tuo " << i + 1 << " numero: ";
		cin >> aArray[i];
		
		if (aArray[i] > max) {
			
			max = aArray[i];
			maxposizione = i;
			
		}
		
	}
	
	cout << "Il numero massimo è " << max << " e si trova nella seguente indice " << maxposizione << '\n';
	
	supporto = aArray[9];
	aArray[9] = max;
	aArray[maxposizione] = supporto;
	
	for (int i = 0; i < 10; ++ i) {
		
		cout << aArray[i] << " ";
		
	}
	
	
	return 0;
}

//  Realizzare un programma in linguaggio C++ che acquisisca da tastiera un array di 10 elementi, calcoli il
//  massimo e la posizione in cui si trova. Visualizzare a video il massimo e la sua posizione.
//  Poi scambi di posto il massimo con l’ultimo elemento dell’array e stampi a video l’array
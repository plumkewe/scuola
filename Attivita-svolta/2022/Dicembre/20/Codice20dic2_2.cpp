#include <iostream>

using namespace std;

//  


int main() {
	setlocale(LC_ALL, "italian");
	
	int aArray[10];
	int max = 0;
	int min = aArray[0];
	
	float media = 0;
	
	for (int i = 0; i < 10; ++ i) {
		
		cout << "Inserisci il tuo " << i + 1 << " numero: ";
		cin >> aArray[i];
		
		if (aArray[i] > max) {
			
			max = aArray[i];
			
		}
		
		
		if (min > aArray[i]) {
			
			min = aArray[i];
			
		}
		
		media += aArray[i];
		
	}
	
	media = media / 10;
	
	cout << "\nLa media è pari a: " << media;
	cout << "\nIl valore massimo è: " << max;
	cout << "\nIl valore minimo è: " << min;
	
	
	return 0;
}

//  Realizzare un programma in linguaggio C++ che acquisisca da tastiera un array di 10 elementi e calcoli e
//  visualizzi come output il massimo, il minimo e la media degli elementi dell’array
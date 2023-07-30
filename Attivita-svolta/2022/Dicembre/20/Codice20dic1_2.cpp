#include <iostream>

using namespace std;

//  


int main() {
	setlocale(LC_ALL, "italian");
	
	int aArray[10];
	int somma = 0;
	
	for (int i = 0; i < 10; ++ i) {
		
		cout << "Inserisci il tuo " << i + 1 << " numero: ";
		cin >> aArray[i];
		
		aArray[i] % 2 == 0 ? somma += aArray[i] : 0;
		
	}
	
	cout << "\nLa somma dei soli numeri interi è pari a: " << somma;
	
	return 0;
}

//  Realizzare un programma in linguaggio C++ che acquisisca da tastiera un array di 10 elementi e calcoli la
//  somma dei numeri pari memorizzati all’interno dell’array e visualizzi a video il risultato.
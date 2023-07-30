#include <iostream>

using namespace std;

//  


int lafunzione (int, int);

int main() {
	setlocale(LC_ALL, "italian");
	
	int base = 0, potenza = 0;
	
	cout << "Inserisci la base della potenza: ";
	cin >> base;
	
	cout << "alla: ";
	cin >> potenza;
	
	
	cout << "Fa: " << lafunzione(base, potenza);
	
	
	return 0;
}

int lafunzione (int numero, int n) {
	
	int risultato = numero;
	
	for (int i = 1; i < n; ++i) {
		
		risultato = risultato * numero;
		
	}
	
	
	return risultato;
}

//  Realizza una funzione che calcoli la potenza
//  n-esima con una base data.
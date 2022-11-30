#include <iostream>

using namespace std;

//  

int ottienidimensione (void);
void caricamento (int [], int);


int main() {
	setlocale(LC_ALL, "italian");
	
	int v[10];
	int numelementi;
	
	numelementi = ottienidimensione();
	caricamento (v, numelementi);
	
	for (int i = 0; i < numelementi; i++) {
		
		cout << v[i] << '\n';

	}
	
	
	return 0;
}

int ottienidimensione () {
	
	int dim;
	
	do {
		
		cout << "Inserisci il numero di elementi ";
		cin >> dim;
		
	} while ((dim <= 0) || (dim >= 10));
	
	
	return dim;
}

void caricamento (int vet[], int n) {
	
	int i;
	
	for (i = 0; i < n; i++) {
		
		cout << "Inserisci il " << i + 1 << " elemento ";
		cin >> vet[i];
		
	}

}

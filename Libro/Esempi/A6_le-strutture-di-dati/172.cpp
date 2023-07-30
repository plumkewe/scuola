#include <iostream>

using namespace std;

//  


int ottieniDimensione (void);
void caricamento (int [], int);
void trovaMaxMin (int[], int, int &, int &);

int main() {
	setlocale(LC_ALL, "italian");
	
	int v[100];
	int numElementi, indiceMassimo = 0, indiceMinimo = 0;
	
	numElementi = ottieniDimensione();
	caricamento (v, numElementi);
	trovaMaxMin (v, numElementi, indiceMassimo, indiceMinimo);
	
	cout << "La componente massima si trova in posizione " << indiceMassimo+ 1 << '\n';
	cout << "La componente minima si trova in posizione " << indiceMinimo + 1 << '\n';
	
	
	return 0;
}

int ottieniDimensione () {
	
	int dim;
	
	do {
		
		cout << "Inserisci il numero di elementi: ";
		cin >> dim;
		
	} while ((dim <= 0) || (dim >= 100));
	
	
	return dim;
}

void caricamento (int vet[], int n) {
	
	int i;
	
	for (i = 0; i < n; ++i) {
		
		cout << "Inserisci il numero: " << i + 1 << " elemento";
		cin >> vet[i];
		
	}
	
}

void trovaMaxMin (int vet[], int n, int &indiceMax, int &indiceMin) {
	
	int i;
	
	for (i = 0; i < n; ++i) {
		
		if (vet[i] > vet[indiceMax]) {
			
			indiceMax = i;
			
		}
		
		if (vet[i] < vet[indiceMax]) {
			
			indiceMin = i;
		}
		
	}
	
}
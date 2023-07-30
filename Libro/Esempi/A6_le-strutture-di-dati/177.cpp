#include <iostream>

using namespace std;

//  

void caricamento (int [], int);
void shiftSinistro (int [], int);
void shiftDestro (int [], int);
void stampa (int [], int);

int main() {
	setlocale(LC_ALL, "italian");
	
	int v[10];

	caricamento(v, 10);
	shiftSinistro(v, 10);
	
	cout << "Shift sinistro" << '\n';
	stampa(v, 10);
	
	shiftDestro(v, 10);
	cout << "Shift destro" << '\n';
	stampa(v, 10);

	
	return 0;
}

void caricamento (int vet[], int n) {
	
	int i;
	
	for (i = 0; i < n; ++i) {
		
		cout << "Inserisci il " << i + 1 << " elemento ";
		cin >> vet[i];
	}
	
}

void shiftSinistro (int vet[], int n) {
	
	int i;
	
	for (i = 0; i < n - 1; ++i)
		vet[i] = vet[i + 1];
	
}

void shiftDestro (int vet[], int n) {
	
	int i;
	
	for (i = n - 1; i > 0; --i)
		vet[i] = vet[i - 1];
	
}

void stampa (int vet[], int n) {
	
	int i;
	
	for (int i = 0; i < n; ++i)
		cout << vet[i] << '\n';
	
}
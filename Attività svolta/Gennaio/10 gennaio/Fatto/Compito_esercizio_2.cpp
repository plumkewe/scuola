#include <iostream>

using namespace std;

int riempire (int nome_array[], int i, const int lunghezza)
{
	if (i == lunghezza)
		return 0;
	
	cout << "Inserisci il numero " << i + 1 << ": ";
	cin >> nome_array[i];
	i ++;

	
	return riempire (nome_array, i, lunghezza);
};


int main() {
	
	int numeri[20];
	int somma = 0;
	
	riempire (numeri, 0, 20);
	
	
	for (int i = 0; i < 20; i++)
		somma += numeri[i];
		
	int minimo = numeri[0];
	
	for (int i = 0; i < 20; i++)
	
		if (minimo > numeri[i])
			minimo = numeri[i];
		
	
	cout << "La somma dell'array: " << somma << endl;
	cout << "Il valore minimo: " << minimo << endl;
	
	
	cin.get();
}

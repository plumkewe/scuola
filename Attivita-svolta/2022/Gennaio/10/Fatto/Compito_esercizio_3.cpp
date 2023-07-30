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

void stampa (const int nome_array[], const int lunghezza) 
{
	for (int i = 0; i < lunghezza; i++)
		cout << nome_array[i] << " ";
		
};

int main() {
	
	int numeri[10];
	int doppio_numeri[10];
	
	
	riempire (numeri, 0, 10);
	
	for (int i = 0; i < 10; i++)
		doppio_numeri[i] = numeri[i] * 2; //  lol avevo sbagliato pensando che il doppio a*a (vabbè)
	
	cout << endl;
	
	cout << "Array prima: ";
	stampa (numeri, 10);
	
	cout << endl;
	
	cout << "Array dopo: ";
	stampa (doppio_numeri, 10);
	
	
	cin.get();
}

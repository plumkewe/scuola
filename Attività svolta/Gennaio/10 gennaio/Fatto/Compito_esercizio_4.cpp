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
	
	int numeri[10];
	int contatore = 0;
	int somma = 0;
	
	float media = 0.0f;
	
	riempire (numeri, 0, 10);
	
	for (int i = 0; i < 10; i++)
		somma += numeri[i];
	
	
	media = somma / 10;
	
	for (int i = 0; i < 10; i++)
		if (numeri[i] >= media)
			contatore ++;
			
	cout << "\nIn totale " << contatore << " numeri sono maggiori o uguali alla media (" << media << ")";
	
	
	cin.get();
}




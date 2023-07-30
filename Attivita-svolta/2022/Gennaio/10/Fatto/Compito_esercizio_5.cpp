#include <iostream>

using namespace std;

int riempire (int nome_array[], int i, const int lunghezza)
{
	
	if (i == lunghezza)
		return 0;
	
	cout << "Inserisci il " << i + 1 << " numero del codice a barre: ";
	cin >> nome_array[i];
	i ++;

	
	return riempire (nome_array, i, lunghezza);
};

int main() {
	
	int codice_barre[12];
	int somma = 0;
	int resto = 0;
	
	riempire (codice_barre, 0, 12);
	
	
	for (int i = 0; i < 12; i++) {
		
		if (codice_barre[i] % 3 == 0)
			codice_barre[i] = codice_barre[i] * 3;
			
		if (codice_barre[i] % 2 == 0)
			codice_barre[i] = codice_barre[i] * 1;
		
		somma += codice_barre[i];
		
	}
	
	resto = somma / 10;
	
	codice_barre[11] = resto;
	
	
	cout << "\nIl Codice: \n";
	
	for (int i = 0; i < 12; i++)
		cout << codice_barre[i];
		
	cout << "\nCifra di controllo: " << resto;
	
	
	cin.get();
}

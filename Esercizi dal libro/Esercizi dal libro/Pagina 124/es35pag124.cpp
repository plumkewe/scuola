#include <iostream>

using namespace std;

//  Esercizio 35 pagina 124

void DispariNumero (int da_numero);


int main()
{
	setlocale(LC_ALL, "italian");

	int numero = 0;
	
	cout << "Inserisci un numero: ";
	cin  >> numero;

	DispariNumero(numero);
	

	return 0;
}

void DispariNumero (int da_numero)
{
	for (int i = (da_numero - 1); i > 0; --i)
		
		if (i % 2 == 1)
		cout << i << " ";
}

//  Scrivi un algoritmo e relativo codice C++ che
//  visualizzi i primi N numeri dispari.
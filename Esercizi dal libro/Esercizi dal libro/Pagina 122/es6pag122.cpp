#include <iostream>

using namespace std;

//  Esercizio 6 pagina 122

enum multiplo {
	
	kSi_lo_e = 0
	
};

int main()
{
	setlocale(LC_ALL, "italian");
	
	int numero 	 		= 0;
	int multiplo 		= 0;
	int multiplicazione = 0;
	
	cout << "Inserisci il numero: ";
	cin  >> numero;
	
	cout << "Inserisci il multiplo per verificare: ";
	cin  >> multiplo;
	
	if (numero % multiplo == kSi_lo_e) {
		
		multiplicazione = numero / multiplo;
		
		cout << "\nIl numero " << numero << " è un multiplo di " << multiplo << "\t (" << multiplicazione << " * " << multiplo << ")" << endl;
		
	} else
		cout << "\nIl numero " << numero << " non è un multiplo di " << multiplo << endl;
	
	
	return 0;
}
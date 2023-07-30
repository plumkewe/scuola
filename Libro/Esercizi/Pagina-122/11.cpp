#include <iostream>

using namespace std;

//  Esercizio 11 pagina 122


int main()
{
	setlocale(LC_ALL, "italian");
	
	float spesa			= 0.0f;
	float somma_spesa 	= 0.0f;
	
	cout << "Inserisci il totale della spesa: ";
	cin  >> spesa;
	
	
	if (spesa <= 0) {
		cout << "\nNon hai acquistato niente!" << endl;
		
		return 0;
	}
	
	else {
		if ((spesa < 100) && (spesa > 50)) {
			somma_spesa = spesa - spesa * 0.20;
		}
		if ((spesa < 50)) {
			somma_spesa = spesa - spesa * 0.10;
		}
		if ((spesa > 100)) {
			somma_spesa = spesa - spesa * 0.30;
		}
		
	}
	
	cout << "\nApplicando uno sconto dovrai pagare: " << somma_spesa << " euro" << endl;
	
	
	return 0;
}
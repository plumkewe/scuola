#include <iostream>

using namespace std;

//  Esercizio 12 pagina 122


enum mesi : short int {
	
	gennaio = 1,
	febbraio,
	marzo,
	aprile,
	maggio,
	giugno,
	luglio,
	agosto,
	settembre,
	ottobre,
	novembre,
	dicembre
	
};


int main() {
	setlocale(LC_ALL, "italian"); //  per poter usare gli accenti
	
	short int mese			= 0;
	short int meseGiorni	= 0;
	
	cout << "Inserisci il mese: ";
	cin  >> mese;
	
	
	switch (mese) {
		
		case novembre: case aprile: case giugno: case settembre:
			
			meseGiorni = 30;
			break;
		
		case gennaio: case marzo: case maggio: case luglio: case agosto: case ottobre: case dicembre:
			
			meseGiorni = 31;
			break;
		
		case febbraio:
			
			meseGiorni = 28;
			break;
		
		
		default:
			cout << "\nMese non valido" << endl;
			return 0;
	}
	
	cout << "\nIl mese ha " << meseGiorni << " giorni" << endl;
	
	
	return 0;
}
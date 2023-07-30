#include <iostream>

using namespace std;

//  esercizio 3
//  forse ci saranno dei errori di ortografia 

int main() {
	
	float oSconto, iCosto;
	int iQuanti = 0;
	 
	cout << "lo sconto purtroppo e' terminato ma in base a quanti biglietti acquisterai applicheremmo uno sconto\n*inserisci il prezzo del biglietto* ";
	cin >> iCosto;
	
	cout << "\ninserisci la quantita dei biglietti che vuoi acquistare\n*inserisci un numero intero* ";
	cin >> iQuanti;
	
	iCosto = iCosto * iQuanti;
	
	if (iQuanti > 0 && iQuanti <= 4){
		
		cout << "\n\npurtroppo acquistando soltando (" << iQuanti << ") biglietti non hai diritto a nessun sconto e quindi dovrai pagare EURO" << iCosto;
		
	}
	
	else {
		
		if (iQuanti >= 5 && iQuanti <= 8) {
			oSconto = iCosto - (iCosto / 100 * 5);
			
			cout << "\n\naquistando (" << iQuanti << ") biglietti hai diritto a uno sconto pari a 5% e dovrai pagare (sconti inclusi) EURO" << oSconto;
			
			
		}
		
		else {
			oSconto = iCosto - (iCosto / 100 * 10);
			cout << "\n\naquistando (" << iQuanti << ") biglietti hai diritto a uno sconto pari 10% e dovrai pagare (sconti inclusi) EURO" << oSconto;
		}
	
	}
	
	return 0;
}


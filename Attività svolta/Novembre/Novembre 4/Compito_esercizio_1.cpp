#include <iostream>

using namespace std;

//  esercizio 1

int main() {
	
	float oSconto, iCosto;
	
	cout << "hey, siamo un nuovo cinema che per festeggiare la nostra appertura applichiamo uno sconto del 10% sul costo del biglietto\n*inserisci il costo del biglietto* EURO";
	cin >> iCosto;
	
	while (iCosto < 0) {
		cout << "[!] a quanto pare hai commesso un errore, inserisci il prezzo unaltra volta EURO";
		cin >> iCosto;
	}
	
	oSconto = iCosto - (iCosto / 100 * 10);
	
	cout << "\n\nil costo del tuo biglietto con lo sconto applicao e' pari a EURO" << oSconto;
	
	
	
	return 0;
}

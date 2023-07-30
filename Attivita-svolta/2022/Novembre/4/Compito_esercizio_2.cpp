#include <iostream>

using namespace std;

//  esercizio 2
//  forse ci saranno dei errori di ortografia

int main() {
	
	float oSconto, iCosto;
	int iEta = 0;
	
	cout << "hey, siamo un nuovo cinema che per festeggiare la nostra appertura applichiamo uno sconto del 10% sul costo del biglietto solo alle persone che hanno leta minore o pari a 18 anni\n*inserisci il costo del biglietto* EURO";
	cin >> iCosto;
	
	cout << "\nci serve sapere anche la tua eta per verificare se hai i requisiti per lo sconto\n*inserisci eta* ";
	cin >> iEta;
	
	while (iCosto < 0 || iEta < 1) {
		if (iCosto < 1) {
			cout << "[!] a quanto pare hai commesso un errore, inserisci il prezzo unaltra volta EURO";
			cin >> iCosto;
			
		}
		if (iEta < 1) {
			cout << "[!] a quanto pare hai commesso un errore, inserisci leta  unaltra volta ";
			cin >> iEta;
		}
	}
	
	oSconto = iCosto;
	
	if (iEta <= 18){
		
		oSconto = iCosto - (iCosto / 100 * 10);
		cout << "\n\nhai sodisfato i requisiti e abbiamo applicato lo sconto dovrai pagare (con lo sconto incluso) EURO" << oSconto;
		return 0;
		
	}
	
	
	cout << "\n\nnon hai sodisfato i requisiti e quindi dovrai pagareo EURO" << oSconto;
	
	
	
	return 0;
}


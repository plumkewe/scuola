#include <iostream>

using namespace std;

//  un codice abbastanza semplice, nulla da spiegare

int main() {
	setlocale(LC_ALL, "italian"); //  per poter utilizzare gli accenti
	
	float iPrezzo, oSconto, oTotale = 0;
	short int i, iProdotti = 0;
	
	cout << "Sarò in grado di calcolare il totale della tua spesa applicando uno sconto ai prodotti che superano i 100€\n"
		 << "inserisci quanti prodotti hai intenzione di acquistare: ";
	cin >> iProdotti;
	
	while (iProdotti < 0) {
		
		cout << "\n[!] a quanto pare hai comesso un errore non proucoparti, inserisci nuovamente il numero dei prodotti che hai intensione di acquistare: ";
		cin >> iProdotti;
		
	}
	
	if (iProdotti == 0) {
		cout << "\nbeh... fa niente, speriamo di NON rivederti la prossima volta, addio!";
		return 0;
	}
	
	cout << "\n";
	
	
	for (short int i = 1; i < iProdotti + 1; ++ i) {
		
		cout << "inserisci il prezzo del tuo " << i << " prodotto €";
		cin >> iPrezzo;
		
		if (iPrezzo <= 0) {
			
			cout << "\n[!] a quanto pare hai comesso un errore non proucoparti, continua a inserire i tuoi prodotti\n\n";
			i --;
			oTotale -= iPrezzo;
			
		}
		
		if (iPrezzo > 50) {
			
			oSconto = (iPrezzo * 0.25);
			iPrezzo = iPrezzo - oSconto;
			
		}
		
		oTotale += iPrezzo;
	}
	
	cout << "\nil totale della spesa è pari a €" << oTotale << " sconti inclusi, alla prossima";
	
	
	return 0;
}

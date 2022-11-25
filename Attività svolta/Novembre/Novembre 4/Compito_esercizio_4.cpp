#include <iostream>

using namespace std;

//  esercizio 4

int main() {
	
	float iAltezza, sAltezzamese, oAltezzafinale = 0;
	int iMesi, i = 0;
	
	cout << "saro' in grado di calcolare altezza finale della tua pianta partendo dalla altezza iniziale e il numero dei mesi trascorsi\n*inserisci altezza* ";
	cin >> iAltezza;
	
	cout << "\ninsersci i mesi trascorsi\n*inserisci un numero intero* ";
	cin >> iMesi;
	
	cout << "\n";
	
	while (iMesi < 1 || iAltezza < 1){
	
		if (iAltezza < 1) {
			cout << "[!] a quanto pare hai commesso un errore, inserisci altezza un'altra volta ";
			cin >> iAltezza;
			
		}
		
		if (iMesi < 1) {
			cout << "[!] a quanto pare hai commesso un errore, inserisci i mesi trascorsi un'altra volta ";
			cin >> iMesi;
			
		}
		
	}
	
	
	for (int i = 1; i <= iMesi; ++ i) {
		
		oAltezzafinale = iAltezza + sAltezzamese;
		sAltezzamese = oAltezzafinale / 2;
		
	}
	
	cout << "\n\naltezza finale della tua pianta è pari a " << oAltezzafinale;
	
	
	return 0;
}

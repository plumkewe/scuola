#include <iostream>

using namespace std;

//  esercizio 5, è parzialmente sbagliato. Fatto un po cosi perchè non avevo tanto tempo poi lambiente di lavoro nella scuola è quello che è

int main() {
	
	float iAltezza, oAltezzafinale = 0;
	int iMesi, i = 2;
	
	cout << "inserisci l'altezza della pianta iniziale, la sua altezza al primo mese\n*inserisci un numero* ";
	cin >> iAltezza;
	
	cout << "\nper quanti mesi vuoi tracciare la crescita della tua pianta\n*inserisci un numero intero e positivo* ";
	cin >> iMesi;
	
	cout << "\n";
	
	while (iMesi < 1 || iAltezza <= 0){
		
		if (iMesi < 1) {
			
			cout << "[!] a quanto pare hai commesso un errore, inserisci il numero dei mesi un'altra volta ";
			cin >> iMesi;
			
		}
		
		if (iAltezza < 1) {
			
			cout << "[!] a quanto pare hai commesso un errore, inserisci altezza iniziale un'altra volta ";
			cin >> iAltezza;
			
		}
		
	}
	
	oAltezzafinale = iAltezza;
	
	for (int i = 2; i <= iMesi; ++ i) {
		
		cout << "di quanto Ë cresciuta la pianta al " << i << " mese? ";
		cin >> iAltezza;
		
		while (iAltezza <= 0) {
			cout << "[!] la tua pianta non puo' crescere all'interno, inserisci di quanto e cresciuta la tua pianta al " << i << " mese "; 
			cin >> iAltezza;
		}
		
		oAltezzafinale += iAltezza;
		
	}
	
	cout << "\n\nl'altezza della tua pianta dopo il tracciamento Ë pari a " << oAltezzafinale;
	
	
	return 0;
}

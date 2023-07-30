#include <iostream>
#include <string> //  per la costante di tipo stringa

using namespace std;

//  è un codice molto chiaro quindi non ha bisogni di spigazioni 

int main() {
	setlocale(LC_ALL, "italian");
	
	short int oSELEZIONE;
	
	double iCOSTO;
	
	const string oDIGITA = "Digita il numero corrispondente alla scelta: "; //  costante di tipo string per non riscrivere tante volte la stessa cosa
	
	
	cout  << "1. [Borse]  2. [Accessori]\n" << oDIGITA;
	cin >> oSELEZIONE;
	
	
	
	if (oSELEZIONE <= 0 || oSELEZIONE > 2) {
		cout << "mi dispiace, sono disponibili soltanto due tipologie dei oggetti";
	}
	else {
		if (oSELEZIONE == 1) {
			
			cout << "\nQuanto ti è costato? €";
			cin >> iCOSTO;
			
			if (iCOSTO <= 0) {cout << "non regaliamo le borse...";
				return 0;
			}
			
			cout << "\n1. [Borsa generica]  2. [Borsa in pelle]\n" << oDIGITA ;
			cin >> oSELEZIONE;
			
			float oSCONTO10 = iCOSTO - (iCOSTO * 0.10);
			float oSCONTO20 = iCOSTO - (iCOSTO * 0.20);
			
			switch (oSELEZIONE) {
				case 1: cout << "\nWoW una borsa particolare... dovrai pagare €" << oSCONTO10; 
					break;
				case 2: cout << "\nQuesta borsa piacerà anche a CF, dovrai pagare soltanto €" << oSCONTO20;
					break;
				
				default: cout << "\n[!] Non abbiamo le borse liquide, riavvia il programma e riprova";
			}
		}
		
		else {
			if (oSELEZIONE == 2) {
				
				cout << "\nQuanto ti è costato? €";
				cin >> iCOSTO;
				
				if (iCOSTO <= 0) {cout << "non regaliamo accessori gratis..."; 
					return 0;
				}
				
				cout << "1. [Accesorio generico]  2. [Acceosorio in stoffa]\n" << oDIGITA ;
				cin >> oSELEZIONE;
				
				float oSCONTO25 = iCOSTO - (iCOSTO * 0.25); //  formule fuori per la comodita 
				float oSCONTO15 = iCOSTO - (iCOSTO * 0.15);
				
				switch (oSELEZIONE) {
					case 1: cout << "\nBella scelta... dovrai pagare €" << oSCONTO15;
						break;
					case 2: cout << "\nOh bene, hai deciso di acquistare un accesero in stoffa... dovrai pagare €" << oSCONTO25;
						break;
					
					default: cout << "\nI nostri accessori non sono F-A-K-E riavvia il programma e riprova";
				}
			}
		}
	}
	
	
	return 0;
}
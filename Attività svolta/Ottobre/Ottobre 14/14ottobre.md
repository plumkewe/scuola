# :closed_book: <br /> 14 ottobre 2022

###### Esercizio 1:

Scrivi un alaoritmo e relativo codice C++ che, dato in input il numero corrispondente al mese del anno, visualizzi il numero di giorni di cui l'anno è composto

###### Svolgimento:


```cpp
#include <iostream>
#include <string> //  per la costante di tipo string

using namespace std;

enum mesi : int { //  una lista di variabili che a loro volta nascondono
					//  dei valori
	
	gennaio = 1, febbraio, marzo, aprile,
	maggio, giugno, luglio, agosto,
	settembre, ottobre, novembre, dicembre
	
};


int main() {
	setlocale(LC_ALL, "italian"); //  per poter usare gli accenti
	
	short int che_mese = 0; //  dichiarazione della variabile per la condizione nel switch
	
	const string ha_giorni { "Questo mese ha " };
	
	cout << "Inserisci il numero che sarà equivalente al mese: "; //  spiegazione e richiesta
	cin >> che_mese;
	
	
	switch (che_mese) { //  switch che come case ha i "mesi"
		
		case novembre:
		case aprile:
		case giugno:
		case settembre:
			cout << "\n" << ha_giorni << 30 << " giorni";
			break;
		
		case gennaio:
		case marzo:
		case maggio:
		case luglio:
		case agosto:
		case ottobre:
		case dicembre:
			cout << "\n" << ha_giorni << 31 << " giorni";
			break;
		
		case febbraio: 
			cout << "\n" << ha_giorni << 28 << " giorni";
			break;
		
		default: cout << "[!] L'anno ha soltanto 12 mesi, riavvia il programma"; //  errore
	}
	
	
	return 0;
}
```



###### Esercizio 2:

Un negozio decide di applicare uno sconto del 10% su tutte le borse e del 15% sugli accessori. Inoltre, sulle borse in pelle lo sconto è del 20% e sugli accessori in stoffa il 25%. Realizzare un algoritmo che, introdotto il tipo (borsa o accessorio), la finitura (pelle o stoffa) e il prezzo da listino, determini il prezzo scontato.

###### Svolgimento:

```cpp
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
```

`! c'eranno altri esercizi ma li avevo già fatto e postato ([rettangolo](https://github.com/plumkewe/scuola/blob/main/Attivit%C3%A0%20svolta/Ottobre/Ottobre%207/Codice7ott2.cpp) e [calcolatrice](https://github.com/plumkewe/scuola/blob/main/Attivit%C3%A0%20svolta/Ottobre/Ottobre%207/Codice7ott3.cpp))`
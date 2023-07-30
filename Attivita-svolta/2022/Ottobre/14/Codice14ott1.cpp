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
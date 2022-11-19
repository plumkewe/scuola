#include <iostream>
#include <string> //  per la costante di tipo string

using namespace std;


int main() {
	setlocale(LC_ALL, "italian"); //  per poter usare gli accenti
	
	short int iMese; //  dichiarazione della variabile per la condizione nel switch
	
	const string oMESEHA = "questo mese ha ";
	
	cout << "Questo programmino sarà in grado di dirti quanti giorni ha uno dei 12 mesi\n" //  spiegazione e richiesta
		 << "inserisci il mese, es 12 = dicembre: ";
	cin >> iMese;
	
//	gennaio 1, marzo3, maggio5, luglio7, agosto8, ottobre10, dicembre12 (31)
//	novembre11, aprile4, giugno6, settembre9 (30)
//	febbraio2 (28)
	
	switch (iMese) { //  switch che come case ha i "mesi"
		case 11: case 4: case 6: case 9: cout << "\n" << oMESEHA << 30 << "giorni";
			break;
		case 1: case 3: case 5: case 7: case 8: case 10: case 12: cout << "\n" << oMESEHA << 31 << "giorni"; //  tutti i mesi nei cui i giorni sono pari a 31
			break;
		case 2: cout << "\n" << oMESEHA << 28 << "giorni";
			break;
		
		default: cout << "[!] l'anno ha soltanto 12 mesi, riavvia il programma"; //  errore
	}
	
	return 0;
}
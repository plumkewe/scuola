#include <iostream>
#include <iomanip> //  per manipulare output (R45-50)

using namespace std;

//  esercizio vacanza

int main() {
	setlocale(LC_ALL, "italian"); //  per pottee utilzizare gli accenti
	

	short int iDurata, iNumeroPasti;
	double iTassaDiSoggiorno, iCostoHotel, iCostoXpasto, oCalcoloGiorni, oCalcoloPasti, oTotale; //  dichiarazione di diverse variabili di tipo double 
	
	
	cout << "==== Costo delle Vacanze ====\n";
	
	cout << "\nQuanti giorni durerà la tua prossima vacanza ?\n"
		 << "inserisci il numero dei giorni: ";
		cin >> iDurata;
	
	cout << "\nOkay, e quanto pagherai per un giorno del Hotel ?\n" 
		 << "inserisci il costo di un singolo giorno €";
		cin >> iCostoHotel;
	
	cout << "\nBene, bene... e quanti pasti si svolgeranno ?"
		 << "\n" << "inserisci il numero dei pasti: ";
		cin >> iNumeroPasti;
	
	cout << "\ne quanto costerà un singolo pasto ?"
		 << "\ninserisci il costo del singolo pasto €";
		cin >> iCostoXpasto;
	
	
	cout << "\n...\n" 
		 << "Oh WoW, nel Hotel che stai per visitare ce una tassa di soggiorno da pagare..."
		 << "\ninserisci il costo della tassa €"; 
	cin >> iTassaDiSoggiorno;
		
	oCalcoloGiorni = iDurata * iCostoHotel; //  calcoli fuori per una questione di comodita
	oCalcoloPasti = iNumeroPasti * iCostoXpasto;
	oTotale = oCalcoloPasti + oCalcoloGiorni + iTassaDiSoggiorno;
	
	
	cout << setprecision(2) << fixed;
	
	cout << "\n=====[Fattura]=====";
	cout << "\nGiorni:" << setw(8) << "€" << oCalcoloGiorni; //  '\n' sta per newline, setw in poche parole sposta output di un tot caratteri vuoti (sono indicati tra le parantesi)
	cout << "\nPasti:" << setw(9) << "€" << oCalcoloPasti;
	cout << "\nTassa:" << setw(9) << "€" << iTassaDiSoggiorno;
	cout << "\nTOTALE:" << setw(8) << "€" << oTotale;
	cout << "\n===================";


return 0;
	
}
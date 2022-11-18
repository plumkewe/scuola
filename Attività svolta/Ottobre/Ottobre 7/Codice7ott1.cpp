#include <iostream>
#include <string> //  per stampare lo stesso testo
#include <iomanip> //  per manipolare cout di double (fare scrivere soltanto i decimi)

using namespace std;


int main() {
	setlocale(LC_ALL, "italian"); //  per pottee utilzizare gli accenti
	
	double iSommaSpesa;
	
	
	cout << "Benvenuto nella bottega di Nook, in occasione della mia assenza applichiamo uno sconto speciale... maggiore è il tuo totale, maggiore è lo sconto! Si-si...\n\n"
		 << "inserisci il totale della tua spesa €";
	cin >> iSommaSpesa;
	
	double cSCONTO50 = iSommaSpesa - iSommaSpesa * 0.10; //  calcoli fuori per comodita
	double cSCONTO99 = iSommaSpesa - iSommaSpesa * 0.20;
	double cSCONTO101 = iSommaSpesa - iSommaSpesa * 0.30;
	
	const string oScontrino = "Facendo tutti i calcoli... e applicando lo sconto... dovrai pagare €"; //  costante di tipo string, per non scrivere lo stesso testo più e più volte... 

	cout << setprecision(2) << fixed; //  non fa nient'altro che limitare il double ai decimi (2)
	
	if (iSommaSpesa <= 0) { //  se il totale della spesa sarà uguale o minore (numero negativo) di 0 verrà stampato un avviso
		cout << "\n[!] uh... a quanto pare non hai acquistato niente, riavvia il programma e riprova";
	
		return 0; //  per fermare il programma
	}
	
	else {
		if (iSommaSpesa > 100) {cout << "\n" << oScontrino << cSCONTO101;}
		
		else {
			if (iSommaSpesa >= 50 && iSommaSpesa <= 100) {cout << "\n" << oScontrino << cSCONTO99;} //  un range && sta per and (e) letteralmente vorrebbe dire se limporto della spessa è maggiore o uguale a 50 ed è minore o uguale a 100
			
			else {cout << "\n" << oScontrino << cSCONTO50;}
		}
	}
	
	cout << "\n\n" << "Grazie per aver visitato la mia bottega, spero che i tuoi articoli ti piacciono... alla prossima";
	
	return 0;
}
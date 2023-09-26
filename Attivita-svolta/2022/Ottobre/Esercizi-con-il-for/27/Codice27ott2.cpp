#include <iostream>

using namespace std;

//  esercizio semplice, non ce niente da spiegare

int main() {
	setlocale(LC_ALL, "italian"); //  per poter usare gli accenti
	
	short int i = 1;
	double iVoto, sSomma, oMedia, iQuanti, sSu = 0;
	
	cout << "Sarò in grado di calcolare la media dei n voti che inserirai\n"
		 << "inserisci il numero n di voti che vuoi inserire: ";
	cin >> iQuanti;
	cout << "\n";
	
	while (iQuanti <= 0) {
		cout << "[!] a quanto pare hai commeso un errore, inserisci nuovamente su quanti voti vuoi calcolare la media: ";
		cin >> iQuanti;
		cout << "\n";
	}
	
	for (short int i = 1; i <= iQuanti; ++ i) {
		
		cout << "inserisci il tuo " << i << " voto ";
		cin >> iVoto;
	
		if (iVoto >= 6) {
			
			sSomma += iVoto;
			oMedia ++;
			sSu ++;
			
		}
	}
	
	oMedia = sSomma / oMedia;
	
	cout << "\nLa media dei voti che sono >= 6 è pari a " << oMedia << " e soltanto " << sSu << "/" << iQuanti << " voti aveva soddisfatto il criterio"; //  non è previsto nessun errore in caso in cui nessun numero soddisfi il requsiti, quindi il risultato può essere anomalo
	
	return 0;
}
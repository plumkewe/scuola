# :closed_book: <br /> 27 ottobre 2022

###### Esercizio 1:

Scrivere un programma in linguaggio C++ che, preso in input un numero n, calcoli la somma dei soli numeri pari compresi tra 0 e n

###### Svolgimento:

```cpp
#include <iostream>

using namespace std;



int main() {
	setlocale(LC_ALL, "italian"); //  per poter usare gli accenti
	
	short int i = 0;
	int oSomma, iNumero = 0;
	
	cout << "Inserisci un numero e io calcolerò solo i numeri pari tra 0 e n (n compreso)\n"
	<< "inserisci il numero n: ";
	cin >> iNumero;
	
	if (iNumero < 0) {
		iNumero -= iNumero + iNumero;
	}
	
	for (short int i = 0; i <= iNumero; ++ i) {
		if (i % 2 == 0) {
			oSomma += i;
		}
	}
	
	cout << "\nLa somma dei numeri compresi tra 0 e " << iNumero << " è pari a " << oSomma;
	
	return 0;
}
```



###### Esercizio 2:

Scrivere un programma in linguaggio C++ che, preso in input il numero n il di voti di cui si vuole calcolare la media,  si chieda l’inserimento da tastiera di n numeri e si calcoli la media dei soli voti >= 6

###### Svolgimento:

```cpp
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
```
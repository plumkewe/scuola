# :closed_book: <br /> 30 settembre 2022

###### Esercizio 1:

Realizzare un programma in linguaggio C++ per calcolare il totale di una spesa di n prodotti (il numero di prodotti deve essere inserito da tastiera). Il prezzo di ogni prodotto deve essere inserito separatamente, Tenere conto che al costo del prodotto viene applicato il 25 % di sconto nel caso in cui il prezzo superi i 50 euro.

###### Svolgimento:


```cpp
#include <iostream>

using namespace std;

//  un codice abbastanza semplice, nulla da spiegare

int main() {
	setlocale(LC_ALL, "italian"); //  per poter utilizzare gli accenti
	
	float iPrezzo, oSconto, oTotale = 0;
	short int i, iProdotti = 0;
	
	cout << "Sarò in grado di calcolare il totale della tua spesa applicando uno sconto ai prodotti che superano i 100€\n"
	<< "inserisci quanti prodotti hai intenzione di acquistare: ";
	cin >> iProdotti;
	
	while (iProdotti < 0) {
		
		cout << "\n[!] a quanto pare hai comesso un errore non proucoparti, inserisci nuovamente il numero dei prodotti che hai intensione di acquistare: ";
		cin >> iProdotti;
		
	}
	
	if (iProdotti == 0) {
		cout << "\nbeh... fa niente, speriamo di NON rivederti la prossima volta, addio!";
		return 0;
	}
	
	cout << "\n";
	
	
	for (short int i = 1; i < iProdotti + 1; ++ i) {
		
		cout << "inserisci il prezzo del tuo " << i << " prodotto €";
		cin >> iPrezzo;
		
		if (iPrezzo <= 0) {
			
			cout << "\n[!] a quanto pare hai comesso un errore non proucoparti, continua a inserire i tuoi prodotti\n\n";
			i --;
			oTotale -= iPrezzo;
			
		}
		
		if (iPrezzo > 50) {
			
			oSconto = (iPrezzo * 0.25);
			iPrezzo = iPrezzo - oSconto;
			
		}
		
		oTotale += iPrezzo;
	}
	
	cout << "\nil totale della spesa è pari a €" << oTotale << " sconti inclusi, alla prossima";
	
	
	return 0;
}
```



###### Esercizio 2:

Realizzare un programma in linguaggio C++ che dato un numero inserito da tastiera, visualizzi un quadrato di * della grandezza indicata. Esempio: se inserisco il numero 5 da tastiera deve essere visualizzato:

###### Svolgimento:

```cpp
#include <iostream>

using namespace std;


int main() {
	setlocale(LC_ALL, "italian"); //  per poter utilizzare gli accenti
	
	int iXY = 1, i = 1;
	
	
	cout << "Inserisci un lato del quadrato\n"
	<< "inserisci un numero intero: ";
	cin >> iXY;
	
	if (iXY < 0) {
		iXY -= iXY + iXY; //  una furbizia per trasformare il numero negativo in positivo
	}
	
	cout << "\n"; 
	
	for (int i = 1; i <= iXY; ++ i) { //  nasted for
		
		for (int j = 1; j <= iXY; ++ j) {
			cout << "*";
		}
		
		cout << "\n";
		
	}
	
	cout << "\nta-da-da-mmm";
	
	
	return 0;
}
```



###### Esercizio 3:

Realizzare un programma in linguaggio C++ che dato un numero inserito da tastiera, visualizzi un triangolo di * della grandezza indicata. Esempio: se inserisco il numero 5 da tastiera deve essere visualizzato:

###### Svolgimento:

```cpp
#include <iostream>

using namespace std;


int main() {
	setlocale(LC_ALL, "italian"); //  per poter utilizzare gli accenti
	
	int iAltezza = 0;
	
	cout << "Quanto vuoi far grande la tua metà della piramide?\n"
	<< "inserisci un numero intero e possibilmente positivo: ";
	cin >> iAltezza;
	
	cout << "\n";
	
	if (iAltezza < 0) {
		iAltezza -= iAltezza + iAltezza; //  una furbizia per trasformare il numero negativo in positivo
	}
	
	else {
		
		for (short int i = 1; i <= iAltezza; ++ i) { //  nasted for loop, dificile da spiegare, fai una ricerca
			
			for (short int j = 1; j <= i ; ++ j) {
				cout << "*";
			}
			
			cout << "\n";
			
		}
		
		cout << "\nbeh la metà di una piramide...";
	}
	
	return 0;
}
```



###### Esercizio 4:

Realizzare un programma in linguaggio C++ che, dato un numero num inserito da tastiera, calcoli la somma dei numeri da 0 a num

###### Svolgimento:

```cpp
#include <iostream>

using namespace std;

//  un esercizio semplice non ce bisogno di spiegarlo

int main() {
	setlocale(LC_ALL, "italian"); //  per poter utilizzare gli accenti
	
	int iNumero, oSomma = 0;
	
	cout << "Inserisci un numero intero (diverso dal 0) e io ti dirò la somma dei numero da 0 al tuo\n"
	<< "inserisci un numero: ";
	cin >> iNumero;
	
	while (iNumero == 0) {
		cout << "\n[!] Dai avevo detto diverso dal zero guarda cosa mi tocca fare scrivere altre righe inutili... riprova su...\n"
		<< "inserisci un numero: ";
		cin >> iNumero;
	}
	
	
	for (short int i = iNumero; i >= 0; -- i) {
		oSomma += i;
	}
	
	cout << "\nla somme da 0 al tuo numero (" << iNumero << ") fa " << oSomma;
	
	
	
	return 0;
}
```
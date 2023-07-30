# :closed_book: <br /> 1 ottobre 2022

###### Esercizio 1:

Scrivi un algoritmo e relativo codice C++ che, dati in input due numeri, li scriva in ordine crescente.

###### Svolgimento:


```cpp
#include <iostream>

using namespace std;

//  questo esercizio non è stato modificato, vuol dire che è ugual al come lo avevo fatto tanto tempo fa, molto semplice non ha bisogno delle spiegazioni!

int main() {
	setlocale(LC_ALL, "italian");  //  per poter utilizzare gli accenti
	
	int iNumero1, iNumero2;
	
	cout << "Questo programmino sarà in grado di stampare i tuoi due numeri in ordine crescente\n";
	
	cout << "Inserisci il tuo primo numero: "; 
	cin >> iNumero1;
	
	cout << "Bene, ora inserisci un'altro numero: ";
	cin >> iNumero2;
	
	if (iNumero1 < iNumero2) {
		cout << "\nStampo i tuoi numeri in ordine crescente... " << iNumero1 << " , " << iNumero2;
	}
	
	else {
		
		if (iNumero1 > iNumero2) {
			cout << "\nStampo i tuoi numeri in ordine crescente... " << iNumero2 << " , " << iNumero1;
			
		}
		
		else {
			cout << "\nOh wow pare che i tuoi numeri siano uguali... fa niente riavvia il programma e riprova";
			
		}
		
	}
	
	return 0;
}
```



###### Esercizio 2:

Scrivi un algoritmo e relativo codice C++ che, dato in input un numero, stabilisca se è pari o dispari.

###### Svolgimento:

```cpp
#include <iostream>

using namespace std;

//  questo esercizio non è stato modificato, vuol dire che è ugual al come lo avevo fatto tanto tempo fa, molto semplice non ha bisogno delle spiegazioni!


int main() {
	setlocale(LC_ALL, "italian");  //  per poter utilizzare gli accenti
	
	int iNumero;
	
	cout << "Bene, sarò in grado di stabilire se il tuo numero è pari o dispari..." << "\n" << "Inserisci un numero: ";
	cin >> iNumero;
	
	
	if (iNumero % 2 == 0) {
		cout << "\nOh, il tuo numero è pari, ho indovinato ?";
	}
	
	else {
		cout << "\nHmm... pare che il tuo numero sia dispari, ho indovinato ?";
	}
	
	return 0;
}
```



###### Esercizio 3:

Un'agenzia di viaggi deve organizzare dei bus per portare i clienti a un concerto rock. Realizzare un algoritmo che calcoli il prezzo del biglietto tenendo presente che nel biglietto incide solo il costo al chilometro ma calcolato in modo differente.

• Se il percorso non supera i 100 km il costo al chilometro è a 0,3 euro.
• Se il percorso è tra 100 e 500 km il costo al chilometro è 0,25 euro.
• Se il percorso supera i 500 km il costo al chilometro è 0,15 euro.

###### Svolgimento:

```cpp
#include <iostream>
#include <iomanip> //  per limitare il double e stampare solo i decimi

using namespace std;


int main() {
	setlocale(LC_ALL, "italian");  //  per poter utilizzare gli accenti
	
	double iKm;
	
	cout << "Inserisci la distanza in km: ";
	
	cin >> iKm;
	
	
	//	anche se inutile, ma magari in un secondo piano uno vorrebbe cambiarle... le ho messe fuorix
	
	const double cTARIFA100 = 0.3;
	const double cTARIFA501 = 0.15;
	const double cTARIFA400 = 0.25;
	
	//	Se il percorso non supera i 100 km il costo al chilometro e a 0,3 euro.
	//	Se il percorso è tra 100 e 500 km il costo al chilometro è 0,25 euro.
	//	Se il percorso supera i 500 km il costo al chilometro è 0,15 euro.
	
	cout << setprecision(2) << fixed;  //  per fermare il double ai decimi
	
	if (iKm < 0) {
		cout << "\n[!] Purtroppo non puoi andare nel purgatorio di Dante... riavvia il programma e inserisci un percorso valido";
	}
	
	else {
		
		if (iKm >= 100 & iKm <= 500) {
			cout << "\nIl biglietto costerà €" << iKm * cTARIFA400;
		}
		
		else {
			
			if (iKm > 500) {
				cout << "\nIl biglietto costerà €" << iKm * cTARIFA501;
			}
			
			else {
				cout << "\nIl biglietto costerà €" << iKm * cTARIFA100;
			}
			
		}
		
	}
	
	return 0;
}
```
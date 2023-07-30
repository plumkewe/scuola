# :closed_book: <br /> 18 ottobre 2022

###### Esercizio 1:

Scrivere un programma in C++  visualizza  il doppio dei numeri da 0 a 10

###### Svolgimento:


```cpp
#include <iostream>

using namespace std;

//  esercizio molto semplice e chiaro

int main() {
	setlocale(LC_ALL, "italian"); //  per poter utilizzare gli accenti
	
	for (int i = 0; i < 11; i ++){
		
		if (i == 0){
			cout << "il doppio di 0 è 0, <(' .' )> caspita"; //  giusto per 
		}
		
		else {
			cout << "\nil doppio di " << i << " è " << i * 2;
		}
		
	}
	
	return 0;
}
```



###### Esercizio 2:

Scrivere un programma in C++ che prende in input 20 numeri di cui calcola la somma e visualizza a video il risultato

###### Svolgimento:

```cpp
#include <iostream>

using namespace std;

//  è un esercizio talmente semplice che inutile che lo spieghi

int main() {
	setlocale(LC_ALL, "italian"); //  per poter utilizzare gli accenti
	
	int iNumero, oRISULTATO, i = 0;
	
	cout << "hey la, sarò in grado di sommare i tuoi 20 numeri\n";
	
	for (int i = 1; i < 21; i ++) {
		
		cout << "inserisci il tuo " << i << " numero: ";
		cin >> iNumero; // mi piacerebbe sapere se è possibile fare un cin in linea dei 20 numeri senza fare cin >> a, b, c...
		oRISULTATO += iNumero;
	}
	
	cout << "\nBene, la somma dei tuoi 20 numeri è pari a " << oRISULTATO;
	
	
	return 0;
}
```



###### Esercizio 3:

Scrivere un programma in C++ che prende in input 10 numeri positivi e calcola e visualizza il massimo

###### Svolgimento:

```cpp
#include <iostream>

using namespace std;


int main() {
	setlocale(LC_ALL, "italian"); //  per poter utilizzare gli accenti
	
	int oMassimo, iNumero, i = 0;
	
	cout << "Grüezi, sarò in grado selezionare il numero più grande tra i 10 che inserirai, mi raccomando devono essere numeri naturali e positivi!\n";
	
	for (int i = 1; i < 11; ++ i) { //  si poteva fare un contatore separato solo per stampare "inserisci il tuo n numero, ma visto che si poteva unire perchè non farlo? (bisognerebbe comunque evitare e fare un contatore separato)
		
		cout << "inserisci il tuo " << i << " numero: ";
		cin >> iNumero;
		
		if (iNumero < 0){
			cout << "\naccettiamo solo numeri naturali e positivi, riavvia il programma e riprova";
			return 0;
		}
		
		else {
			if (iNumero > oMassimo) { //  per trovare il massimo si utilizza questa specie di "loop" che sarebbe letteralmente: se il numero è più grande del numero massimo allora il numero prenderà il suo posto 
				oMassimo = iNumero;
			}
		}
		
	}
	
	cout << "\ntra tutti i numeri che hai inserito il numero più grande è " << oMassimo;
	
	
	return 0;
}
```
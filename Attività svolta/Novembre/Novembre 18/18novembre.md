# :closed_book: <br /> 18 novembre 2022

###### Esercizio 1:

Scrivere un programma C++ che crei un vettore di 8 elementi, permetta l’inserimento nel vettore di valori inseriti da tastiera. Si calcoli il massimo, il minimo e la media dei valori presenti nel vettore e li visualizzi a video.

###### Svolgimento:


```cpp
#include <iostream>
#include <algorithm> //  serve per il sort
#include <iomanip> //  serve per manipolare il cin (R30-31, 42)

using namespace std;

//  Richiedi 9 numeri, e in seguito stampa il maggiore e il minore di essi.
//  Versione 0.2 ++ media 
//  Questo esercizio è stato preso dal mio GitHub e modificato


int main() {
	setlocale(LC_ALL, "italian"); //  serve per poter utilizzare gli accenti 
	
	int aNumeri[9], //  creiamo un array di tipo int e con "9 elementi"
	sQuanti = sizeof(aNumeri)/sizeof(aNumeri[0]); //  troviamo quanti elementi sono nel array
	
	double sSomma, oMedia = 0;
	
	cout << "sarò in grado di stabilire il più grande e il più piccolo numero tra i 10 che inserirai\n\n"; //  una piccola spiegazione di ciò che farà il programma (per utente) e poi va da capo ("\n\n")
	
	for (int i = 0, n = 1; i < sQuanti; ++ i, ++ n) { //  loop per richiedere i numeri, incremento i per spostarsi nel array e n per stampare "inserisci il x numero"
		
		cout << "inserisci il " << n << " numero: ";
		
		while (!(cin >> aNumeri[i])) { //  serve per evitare un errore, il codice verrà eseguito quando in cin verrà ricevuto un valore che non sia int (valore del nostro array)
			
			cout << "[!] Il valore devessere del tipo int, riprova: "; //  messaggio per indicare che ce un errore 
			
			cin.clear(); //  sostanzialmente serve per pulire l'errore (che non dovrà essere più grande di 222), e di seguito andrà da capo ('\n')
			cin.ignore(222, '\n');
		}
		
		sSomma += aNumeri[i]; //  += per fare la somma nel mentre si aggiungono gli elementi nel'array
		
	}
	
	oMedia = sSomma / sQuanti; //  faccio la media su numeri sommati dividento per la loro quantita (9)
	
	sort(aNumeri, aNumeri + sQuanti); //  sort(da, a) anumeri + sQuanti rapresentanto l'ultimo contenuto del array. aNumeri rapresenta il primo contenuto del array facendo cosi un "range da a". gli elementi verranno ordinati in modo crescente (dal più piccolo al più grande.
	
	cout << setprecision(2) << fixed; //  limitiamo il double per stampare solo i decimi x.00
	
	cout << '\n'<< "il numero più piccolo è " << aNumeri[0] << " e il numero più grande è " << aNumeri[sQuanti - 1] << " la media dei numeri è pari a " << oMedia; //  stampa il primo (0) elemento/numero presente nel array, che dopo ordinamento è diventato più piccolo (aNumeri[0]) e l'ultimo che è quello più grande (aNumeri[sQuanti - 1])
	
	return 0;
}
```



###### Esercizio 2:

Scrivere un programma C++ che crei un vettore di 20 elementi, permetta l’inserimento nel vettore di valori inseriti da tastiera. Dopo avere inserito gli elementi nell’array, si permette di inserire da tastiera due valori a e b: si contino quanti elementi dell’array hanno un valore compreso tra a e b, estremi compresi.

###### Svolgimento:

```cpp
#include <iostream>
#include <iomanip> //  serve per manipolare il cin (R28-29)

using namespace std;

//  Richiedi 20 numei e stabilisci un range che vada da 'a' a 'b' e scrivi quanti numeri si trovano in quel range.
//  Versione 0.0 


int main() {
	setlocale(LC_ALL, "italian"); //  serve per poter utilizzare gli accenti 
	
	int aNumeri[20], //  creiamo un array di tipo int e con "20 elementi"
	a, b, sCambiare, oContatore = 0,
	sQuanti = sizeof(aNumeri)/sizeof(aNumeri[0]); //  troviamo quanti elementi sono nel array
	
	
	cout << "sarò in grado di dirti numeri sono compresi tra i numeri che inserirai dopo\n\n"; //  una piccola spiegazione di ciò che farà il programma (per utente) e poi va da capo ("\n\n")
	
	for (int i = 0, n = 1; i < sQuanti; ++ i, ++ n) { //  loop per richiedere i numeri, incremento i per spostarsi nel array e n per stampare "inserisci il x numero"
		
		cout << "inserisci il " << n << " numero: ";
		
		while (!(cin >> aNumeri[i])) { //  serve per evitare un errore, il codice verrà eseguito quando in cin verrà ricevuto un valore che non sia int (valore del nostro array)
			
			cout << "[!] Il valore devessere del tipo int, riprova: "; //  messaggio per indicare che ce un errore 
			
			cin.clear(); //  sostanzialmente serve per pulire l'errore (che non dovrà essere più grande di 222), e di seguito andrà da capo ('\n')
			cin.ignore(222, '\n');
		}
		
	}
	
	cout << "\ninserisci il primo numero per creare il range: ";
	cin >> a; //  non sapendo ancora fare delle funzioni personalizzate di alto livello non ho incluso il codice del errore (while) un'altra volta se no il codice sarebbe chilometrico
	
	cout << "inserisci il secondo numero per creare il range: ";
	cin >> b;
	
	if (a > b) { //  giusto per, prevenire dei errori, cambiare il valore del a in caso esso sia più grande del b
		sCambiare = b;
		b = a;
		a = sCambiare;
		
	}
	
	for (int j = 0; j < sQuanti; ++ j) {
		
		if (aNumeri[j] >= a && aNumeri[j] <= b) {
			
			++ oContatore;
		}
		
	}
	
	cout << '\n' << "sono " << oContatore << " gli numeri compresi nel range (" << a << "-" << b << ")";
	
	return 0;
}
```



###### Esercizio 3:

Scrivere un programma C++ che crei un vettore di 9 elementi, permetta l’inserimento nel vettore di valori inseriti da tastiera. Il programma deve creare un secondo array di 9 elementi e inserire in ogni posizione il doppio del valori corrispondenti del primo array.

###### Svolgimento:

```cpp
#include <iostream>
#include <iomanip> //  serve per manipolare il cin (R28-29)

using namespace std;

//  Richiedi 9 numeri salvali nel 2 array moltiplicandoli per 2, e in seguito stampa il doppio di essi.
//  Versione 0.0

int main() {
	setlocale(LC_ALL, "italian"); //  serve per poter utilizzare gli accenti 
	
	int aNumeri[9], //  creiamo un array di tipo int e con "9 elementi"
	sQuanti = sizeof(aNumeri)/sizeof(aNumeri[0]), //  troviamo quanti elementi sono nel array
	aNumeridop[sQuanti];
	
	
	cout << "sarò in grado di dirti numeri sono compresi tra i numeri che inserirai dopo\n\n"; //  una piccola spiegazione di ciò che farà il programma (per utente) e poi va da capo ("\n\n")
	
	for (int i = 0, n = 1; i < sQuanti; ++ i, ++ n) { //  loop per richiedere i numeri, incremento i per spostarsi nel array e n per stampare "inserisci il x numero"
		
		cout << "inserisci il " << n << " numero: ";
		
		while (!(cin >> aNumeri[i])) { //  serve per evitare un errore, il codice verrà eseguito quando in cin verrà ricevuto un valore che non sia int (valore del nostro array)
			
			cout << "[!] Il valore devessere del tipo int, riprova: "; //  messaggio per indicare che ce un errore 
			
			cin.clear(); //  sostanzialmente serve per pulire l'errore (che non dovrà essere più grande di 222), e di seguito andrà da capo ('\n')
			cin.ignore(222, '\n');
		}
		
		aNumeridop[i] = aNumeri[i] * 2; //  assegno i valori al secondo array facendo il primo * 2
		
	}
	
	cout << '\n';
	
	for (int i = 0; i < sQuanti; ++ i) { //  un loop per stampare il secondo array che ha i valori del primo * 2
		
		cout << aNumeridop[i] << " ";
		
	}
	
	return 0;
}
```



###### Esercizio 4:

Scrivere un programma C++ che crei un vettore di 8 elementi inizializzato con valori casuali da 0 a 9 (utilizzare la funzione rand(), vedi esempio di esercizio svolto che si trova nella Classroom). Leggere poi un valore da tastiera e poi, scorrendo l’array, individuare gli elementi dell’array che contengono il valore uguale a quello inserito e stampare a video la posizione di tali elementi.

###### Svolgimento:

```cpp
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

//  Riempi l'array con dei valori casuali e poi richiedi un numero e se il numero è presente nel array stampa la sua posizione (nel array)
//  Versione 0.0


int main() {
	setlocale(LC_ALL, "italian"); //  serve per poter utilizzare gli accenti 
	
	int aNumericasuali[9], //  creiamo un array di tipo int e con "9 elementi"
	iNumero, sContatore = 0,
	sQuanti = sizeof(aNumericasuali)/sizeof(aNumericasuali[0]); //  troviamo quanti elementi sono nel array
	
	cout << "sarò in grado di moltiplicare i numeri che hai inserito e stamparli insieme \n\n"; //  una piccola spiegazione di ciò che farà il programma (per utente) e poi va da capo ("\n\n")
	
	srand(time(NULL));
	
	for (int i = 0; i < sQuanti; ++ i) { //  per riempire l'array con numeri casuali
		aNumericasuali[i] = rand()%10;
		
	}
	
	cin >> iNumero;
	
	cout << '\n';
	
	for (int i = 0; i < 9; ++ i) { //  un loop per scorrere gli elementi nei array
		
		if (aNumericasuali[i] == iNumero) { //  se la condizione è soddisfata stampa la posizione
			
			cout << i << " ";
			++ sContatore; //  per tenere traccia dei quanti elementi sono uguali al numero inserito 
		}
		
	}
	
	if (sContatore == 0) { //  nel caso non ci sia nessun numero
		cout << "[!] nessun elemento nel array corrisponde al tuo numero (" << iNumero << ") inserito";
	}
	
	return 0;
}
```
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
		
	
	cout << "sarò in grado di moltiplicare i numeri che hai inserito e stamparli insieme \n\n"; //  una piccola spiegazione di ciò che farà il programma (per utente) e poi va da capo ("\n\n")
	
	for (int i = 0, n = 1; i < sQuanti; ++ i, ++ n) { //  loop per richiedere i numeri, incremento i per spostarsi nel array e n per stampare "inserisci il x numero"
		
		cout << "inserisci il " << n << " numero: ";
		
		while (!(cin >> aNumeri[i])) { //  serve per evitare un errore, il codice verrà eseguito quando in cin verrà ricevuto un valore che non sia int (valore del nostro array)
			
			cout << "[!] Il valore devessere del tipo int, riprova: "; //  messaggio per indicare che ce un errore 
			
			cin.clear(); //  sostanzialmente serve per pulire l'errore (che non dovrà essere più grande di 222), e di seguito andrà da capo ('\n')
			cin.ignore(222, '\n');
		}
		
		aNumeridop[i] = aNumeri[i] * 2; //  alla fine il loop di sotto svolgerebbe la stessa funzione del primo perchè si troverebbe nel loop anche esso. perciò si può evitare.
		
//		for (int j = 0; j < sQuanti; ++ j) { //  creo un'altro loop che ha funzione di assegnare i valori al secondo array facendo il primo * 2
//			
//			aNumeridop[j] = aNumeri[j] * 2;
//
//		}

	}
	
	cout << '\n';
	
	for (int i = 0; i < sQuanti; ++ i) { //  un loop per stampare il secondo array che ha i valori del primo * 2
		
		cout << aNumeridop[i] << " ";
		
	}
	
	return 0;
}
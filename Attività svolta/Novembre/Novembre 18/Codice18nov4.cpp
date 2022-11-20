#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

// 


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
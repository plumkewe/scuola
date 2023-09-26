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
#include <iostream>

using namespace std;

//

void riempire (int, int[10]);

int main() {
	setlocale(LC_ALL, "italian");
	
	int aArray[10];
	int num1 = 0;
	int num2 = 0;
	int supporto = 0;
	int contatore = 0;
	
	riempire(10, aArray);

	cout << "\nInserisci un numero: ";
	cin >> num1;
	
	cout << "Inserisci un numero: ";
	cin >> num2;
	
	if (num1 > num2) {
		
		supporto = num1;
		num1 = num2;
		num2 = supporto;
		
	}
	
	for (int i = 0; i < 10; ++ i) {
		
		if ((aArray[i] >= num1) && (aArray[i] <= num2)) {
		
			contatore ++;
		}
		
	}
	
	cout << "\nSono " << contatore << " i numeri compresi tra (" << num1 << " e " << num2 << ")";
	
	return 0;
}


void riempire (int lunghezza, int aArray[10]) {
	
	for (int lunghezza = 0; lunghezza < 10; ++ lunghezza) {
		
		cout << "Inserisci il tuo " << lunghezza + 1 << " numero: ";
		cin >> aArray[lunghezza];
		
	}
	
}

//  Realizzare un programma in linguaggio C++ che acquisisca da tastiera un array di 10 elementi e legga da
//  tastiera due numeri che rappresentano un valore minimo ed un valore massimo. Il proramma deve contare
//  quanti elementi dell’array sono compresi tra il valore massimo ed il valore minimo (estremi compresi) e
//  deve visualizzare a video il risultato
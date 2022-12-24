#include <iostream>

using namespace std;

//

void riempire (int, int[10]);
void scegliere (int, int[10], int[10], int[10]);
void stampare (int, int[10]);


int main() {
	setlocale(LC_ALL, "italian");
	
	int aArray[10];
	int aArray2[10];
	int aArray3[10];
	
	cout << "Primo array:\n";
	riempire(10, aArray);
	
	cout << "\nSecondo array:\n";
	riempire(10, aArray2);
	
	scegliere(10, aArray, aArray2, aArray3);
	
	cout << "\nRisultato:\n";
	stampare(10, aArray3);
	
	
	return 0;
}

void riempire (int lunghezza, int aArray[10]) {
	
	for (int lunghezza = 0; lunghezza < 10; ++ lunghezza) {
		
		cout << "Inserisci il tuo " << lunghezza + 1 << " numero: ";
		cin >> aArray[lunghezza];
		
	}
	
}

void scegliere (int lunghezza, int aArray[10], int aArray2[10], int aArray3[10]) {
	
	for (int lunghezza = 0; lunghezza < 10; ++ lunghezza) {
		
		if (aArray[lunghezza] >= aArray2[lunghezza])
			aArray3[lunghezza] = aArray[lunghezza];
		
		else
			aArray3[lunghezza] = aArray2[lunghezza];	
	}
	
	
}

void stampare (int lunghezza, int aArray[10]) {
	
	for (int lunghezza = 0; lunghezza < 10; ++ lunghezza) {
		
		cout << aArray[lunghezza] << " ";
		
	}
	
}


//  Realizzare un programma in linguaggio C++ che acquisisca da tastiera due array di 10, ne confronti le
//  posizioni corrispondenti e in un terzo array ne memorizzi gli elementi di valore minore di ogni confronto.
//  Stampare a video il terzo vettore.
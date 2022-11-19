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
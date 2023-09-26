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
#include <iostream>

using namespace std;

//  


int main() {
	setlocale(LC_ALL, "italian");
	
	int i, somma = 0, numero;
	
	for (i = 1; i <= 5; i++) {
		
		cout << "Inserite il " << i << " numero: ";
		cin >> numero;
		
		somma += numero;
	
	}
	
	cout << "La somma è " << somma;
	
	return 0;
}
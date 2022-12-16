#include <iostream>

using namespace std;

//  


int main() {
	setlocale(LC_ALL, "italian");
	
	
	int valori [200];
	int i, input, numeri = 0;
	int somma;
	double media;
	
	do {
		
		cout << "Inserire il numero " << numeri + 1 << ": ";
		cin >> input;
		
		if ((input > 0) && (input < 1000)) {
			
			valori [numeri ++] = input;
			
		}
		
	} while (input !=-1);
	
	somma = 0;
	
	for (i = 0; i < numeri; ++i)
		somma += valori[i];
		
	media = (double)somma/numeri;
	
	
	cout << "Numero valori inseriti: " << numeri << '\n';
	cout << "Somma: " << somma << " media: " << media;
	
	
	return 0;
}
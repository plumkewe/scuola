#include <iostream>

using namespace std;

//  

float calcola (void);
int pesi = 5;

int main() {
	setlocale(LC_ALL, "italian");
	
	float media;
	
	media = calcola() / pesi;
	
	cout << "La media corrisponde a: " << media;
	

	return 0;
}

float calcola() {
	
	int i;
	float peso, pesototale = 0;
	
	for (i = 0; i < pesi; i++) {
		
		cout << "Inserisci il peso: ";
		cin >> peso;
		
		pesototale += peso;
		
	}
	
	return pesototale;
	
}
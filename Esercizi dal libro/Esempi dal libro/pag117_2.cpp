#include <iostream>
#include <math.h>

using namespace std;

//  


int main() {
	setlocale(LC_ALL, "italian");
	
	int i, a, max = 0, somma = 0;
	float r;
	
	for (i = 0; i < 5; i++) {
		
		cout << "Inserisci il numero " << i + 1 << ": ";
		cin >> a;
		
		if (max < a)
			
			max = a;
	
	somma += a;
	
	}
	
	r = somma / 5.0;
	
	cout << "Il valore massimo è: " << max << '\n';
	cout << "La radice quadrata della somma è: " << sqrt(somma) << '\n';
	cout << "La media è: " << r;
	
	
	return 0;
}
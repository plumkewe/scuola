#include <iostream>

using namespace std;

//  


int main() {
	setlocale(LC_ALL, "italian");
	
	int r;
	float circ;
	
	r -= 1;
	
	while ((r < 0) || (r > 32767)) {
		
		cout << "Inserisci la misura del raggio: ";
		cin >> r;
		
		if ((r < 0) || (r > 32767))
			
			cout << "Il valore del raggio deve essere positivo e minore di 32767";
		
	}
	
	circ = 2 * 3.14 * r;
	
	cout << "Circonferenza = " << circ;
	
	
	return 0;
}
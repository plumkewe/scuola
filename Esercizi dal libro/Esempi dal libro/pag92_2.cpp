#include <iostream>

using namespace std;

//  


int main() {
	setlocale(LC_ALL, "italian");
	
	int r;
	float circ;
	
	cout << "Inserire la misura del raggio: ";
	cin >> r;
	
	if ((r >= 0) && (r <= 32767)) {
		
		circ = 2 * 3.14 * r;
		cout << "Circonferenza è " << circ;
	}
	
	else
		
		cout << "Valore del raggio non consentito";
	
	
	return 0;
}
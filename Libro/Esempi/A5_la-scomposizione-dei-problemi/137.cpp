#include <iostream>

using namespace std;

//  

int a, b;

void ordina() {
	
	int c;
	
	if (a > b) {
		
		c = a;
		a = b;
		b = c;
		
	}
	
}


int main() {
	setlocale(LC_ALL, "italian");
	
	cout << "Inserisci il primo numero: ";
	cin >> a;
	
	cout << "Inserisci il secondo numero: ";
	cin >> b;
	
	ordina();
	
	cout << "I numeri ordinati sono: " << a << " e " << b;
	
	
	return 0;
}
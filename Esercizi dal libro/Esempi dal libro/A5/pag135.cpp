#include <iostream>
#include <math.h>

using namespace std;

//  

int a, b, c;
float x1, x2, d;

void acquisisci_coefficienti() {
	
	cout << "Inserisci il valore della a: ";
	cin >> a;
	
	cout << "Inserisci il valore di b: ";
	cin >> b;
	
	cout << "Inserisci il valore della c: ";
	cin >> c;
	
}

void calcola_delda() {
	
	d = (b * b) - (4 * a * c);

}

void visualizza_soluzioni() {
	
	if (d < 0)
		cout << "Nessuna soluzione reale";
	
	else {
		
		x1 = (-b - sqrt (d)) / (2 * a);
		x2 = (-b - sqrt (d)) / (2 * a);
		
		cout << "x1 = " << x1 << " x2 = " << x2;
		
	}
	
}

void risolvi_equazioni() {
	
	if ((b == 0) && (c == 0))
		
		cout << "Equazione indeterminata";
	
	else {
		
		if (b == 0)
			cout << "Equazione è impossibile";
		
		else {
			
			x1 =- (1.0 * c) / b;
			cout << "x = " << x1 << '\n';
			
		}
	}
	
}


int main() {
	setlocale(LC_ALL, "italian");
	
	acquisisci_coefficienti();
	
	if (a != 0) {
		
		calcola_delda();
		visualizza_soluzioni();
		
	}
	
	else
		
		risolvi_equazioni();

	
	return 0;
}
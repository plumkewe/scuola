#include <iostream>

using namespace std;

//  


int main() {
	setlocale(LC_ALL, "italian");
	
	int base, altezza, perimetro, area;
	
	cout << "Inserisci la misura della base: ";
	cin >> base;
	
	cout << "Inserisci la misura dell'altezza: ";
	cin >> altezza;
	
	perimetro = 2 * (base + altezza);
	area = base * altezza;
	
	cout << "Il perimetro del rettangolo è " << perimetro << '\n';
	cout << "I'area del rettangolo è " << area;
	
	
	return 0;
}
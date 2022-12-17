#include <iostream>

using namespace std;

//  


int main() {
	setlocale(LC_ALL, "italian");
	
	int a, b, somma;
	
	cout << "Inserisci il primo numero: ";
	cin >> a;
	
	cout << "Inserisci il secondo numero: ";
	cin >> b;
	
	somma = a + b;
	
	cout << "La somma è " << somma;
	
	
	return 0;
}
#include <iostream>

using namespace std;

//  


int main() {
	setlocale(LC_ALL, "italian");
	
	int a, b, prodotto = 0;
	
	cout << "Inserisci i valori di a e b ";
	cin >> a >> b;
	
	do {
		
		prodotto += a;
		b--;
		
	} while (b != 0);
	
	cout << "Il prodotto è " << prodotto;
	
	
	return 0;
}
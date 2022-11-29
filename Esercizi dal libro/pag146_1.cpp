#include <iostream>

using namespace std;

//  

void potenza (int b, int e) {
	
	int p;
	p = 1;
	
	while (e >= 1) {
		
		p *= b;
		e--;
		
	}
	
	cout << "La potenza è " << p << '\n';
	
}

int main() {
	setlocale(LC_ALL, "italian");
	
	int a, x;
	
	cout << "Inserisci la base: ";
	cin >> a;
	
	cout << "Inserisci l'esponente: ";
	cin >> x;
	
	potenza(a, x);
	
	
	return 0;
}
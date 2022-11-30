#include <iostream>

using namespace std;

//  


int main() {
	setlocale(LC_ALL, "italian");
	
	int x, y, t;
	
	do {
		
		cout << "Inserisci due interi maggiori di zero: ";
		cin >> x >> y;
		
		
	} while ((x <= 0) || (y <= 0));
	
	while (x != y) {
		
		if (x < y) {
			
			t = x;
			x = y;
			y = t;
			
		}
		
		x = x - y;
		
	}
	
	cout << "Il massimo comune divisore è " << x;
	
	
	return 0;
}
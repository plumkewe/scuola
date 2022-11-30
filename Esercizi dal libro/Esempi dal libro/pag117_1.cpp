#include <iostream>

using namespace std;

//  


int main() {
	setlocale(LC_ALL, "italian");
	
	int i, n, k, p, s;
	
	do {
		
		cout << "Inserisci un numero n > 0: ";
		cin >> k;
		
	} while (n <= 0);
	
	do {
		
		cout << "Inserisci un altro numero k > 0: ";
		cin >> k;
		
	} while (k <= 0);
	
	s = 0;
	p = 1;
	
	for (i = 1; i <= n; i++) {
		
		p = p * k;
		s = s + p;
		
	}
	
	cout << s << '\n';
	
	
	return 0;
}
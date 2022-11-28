#include <iostream>

using namespace std;

//  


int main() {
	setlocale(LC_ALL, "italian");
	
	int n, i;
	long a, b, c;
	
	cout << "Inserisci un numero: ";
	cin >> n;
	
	a = 1;
	b = 1;
	
	cout << a << " " << b << '\n';
	
	for (i = 2; i < n; i++) {
		
		c = a + b;
		cout << c;
		
		a = b;
		b = c;
		
	}
	
	
	return 0;
}
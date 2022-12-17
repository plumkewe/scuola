#include <iostream>

using namespace std;

//  


int main() {
	setlocale(LC_ALL, "italian");
	
	int i, n, fibonacciA, fibonacciB;
	char continuo;
	
	do {
		
		do {
			
			cout << "Inserisci n ";
			cin >> n;
			
		} while (n < 0);
		
		fibonacciA = 0;
		fibonacciB = 1;
		
		for (i = 0; i < n; i++) {
			
			fibonacciB += fibonacciA;
			fibonacciA = fibonacciB - fibonacciA;
			
		}
		
		cout << "Il numero di Fibonacci n = " << n << " è " << fibonacciB << '\n';
		cout << "Continui [s/n] ";
		cin >> continuo;
		
	} while ((continuo == 's') || (continuo == 'S'));
	

	return 0;
}
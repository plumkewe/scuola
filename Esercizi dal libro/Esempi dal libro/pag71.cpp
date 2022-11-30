#include <iostream>

using namespace std;

//  


int main() {
	setlocale(LC_ALL, "italian");
	
	int i, n;
	
	i = 4;
	n = i;
	
	cout << "Valore di n all'inizio: " << n << '\n';
	
	n = i++;
	cout << "Valore di n dopo i++: " << n << '\n';
	
	n = ++i;
	cout << "Valore di n dopo un ulteriore ++i: " << n << '\n';
	
	n += i * (n-4);
	cout << "Valore finale del n: " << n;
	
	
	return 0;
}
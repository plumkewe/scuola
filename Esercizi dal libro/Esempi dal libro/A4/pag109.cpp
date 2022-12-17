#include <iostream>

using namespace std;

//  


int main() {
	setlocale(LC_ALL, "italian");
	
	int n, conta = 1;
	
	cout << "Inserisci il valore di n ";
	cin >> n;
	
	do {
		
		if (conta % 2 == 1)
			
			cout << conta << '\n';
		
		conta++;
		
	} while (conta <= n);
	
	
	return 0;
}
#include <iostream>

using namespace std;

//  


int main() {
	setlocale(LC_ALL, "italian");
	
	int n;
	
	cout << "Inserisci il numero: ";
	cin >> n;
	
	if ((n % 2) == 0)
		cout << "Il numero è divisibile per 2";
	
	else
		if ((n % 3) == 0)
		cout << "Il numero è divisibile per 3";
	
		else
			if ((n % 5) == 0)
			cout << "Il numero è divisibile per 5";
	
			else
				if ((n % 7) == 0)
				cout << "Il numero è divisibile per 7";
	
				else
					cout << "Il numero non è divisibile per 2, 3, 5, 7";
	
	
	return 0;
}
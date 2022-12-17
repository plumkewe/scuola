#include <iostream>

using namespace std;

//  


int main() {
	setlocale(LC_ALL, "italian");
	
	int a, b, c;
	float media;
	
	cout << "Inserisci il primo voto: ";
	cin >> a;
	
	cout << "Inserisci il secondo voto: ";
	cin >> b;
	
	cout << "Inserisci il terzo voto: ";
	cin >> c;
	
	if ((a >= 18) && (a <= 18) && (b <= 30) && (c >= 18) && (c <= 30)) {
		
		media = (a + b + c) / 3.0;
		cout << "Media dei valori inseriti: " << media;
		
	}
	
	
	
	return 0;
}
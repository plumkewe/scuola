#include <iostream>

using namespace std;

//  


int main() {
	setlocale(LC_ALL, "italian");
	
	int num, somma = 0, conta = 0;
	float media;
	
	cout << "Inserisci il prezzo ";
	cin >> num;
	
	while (num != 0) {
		
		somma += num;
		conta ++;
		
		cout << "Inserisci il prezzo ";
		cin >> num;
	}
	
	if (conta == 0)
		
		media = 0;
	
	else
		media = (float) somma / conta;
	
	cout << "La somma è = " << somma << '\n';
	cout << "La media è = " << media;
	
	
	return 0;
}
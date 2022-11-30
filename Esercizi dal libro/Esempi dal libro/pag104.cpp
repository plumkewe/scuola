#include <iostream>

using namespace std;

//  


int main() {
	setlocale(LC_ALL, "italian");
	
	int n, num, max, conta = 0;
	float media;
	
	cout << "Quanti articoli vuoi inserire? ";
	cin >> n;
	
	while (conta < n) {
		
		cout << "Inserisci il prezzo ";
		cin >> num;
		
		if (conta == 1)
			
			max = num;
		
		else
			if (num > max)
				
				max = num;
			
		conta ++;
		
	}
	
	cout << "Il massimo è " << max;
	
	
	return 0;
}
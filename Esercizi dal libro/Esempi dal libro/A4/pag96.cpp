#include <iostream>

using namespace std;

//  


int main() {
	setlocale(LC_ALL, "italian");
	
	int mese, anno, giornimese;
	
	cout << "Inserisci il mese (1...12) e l'anno ";
	cin >> mese >> anno;
	
	switch (mese) {
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			
			giornimese = 31;
			break;
		
		case 4: case 6: case 9: case 11:
			
			giornimese = 30;
			break;
		
		case 2:
			if ((anno % 4 == 0) && (anno != 1900))
				
				giornimese = 29;
			
			else
				
				giornimese = 28;
			break;
	}
	
	cout << "Il mese in questione ha giorni " << giornimese;
	
	
	return 0;
}
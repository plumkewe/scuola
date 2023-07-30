#include <iostream>

using namespace std;

//  


int main() {
	setlocale(LC_ALL, "italian");
	
	int giorno;
	
	cout << "Inserisci giorno: ";
	
	cin >> giorno;
	
	switch (giorno) {
		case 1: cout << "Lunedì";
		case 2: cout << "Martedì";
		case 3: cout << "Mercoledì";
		case 4: cout << "Giovedì";
		case 5: cout << "Venerdì";
		case 6: cout << "Sabato";
		case 7: cout << "Domenica";
	}
	
	
	return 0;
}
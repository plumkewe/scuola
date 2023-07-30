#include <iostream>

using namespace std;

//  esercizio molto semplice e chiaro

int main() {
	setlocale(LC_ALL, "italian"); //  per poter utilizzare gli accenti
	
	for (int i = 0; i < 11; i ++){
		
		if (i == 0){
			cout << "il doppio di 0 è 0, <(' .' )> caspita"; //  giusto per 
		}
		
		else {
			cout << "\nil doppio di " << i << " è " << i * 2;
		}
		
	}

	return 0;
}
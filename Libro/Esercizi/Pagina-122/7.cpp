#include <iostream>

using namespace std;

//  esercizio pagina 122 numero 7


int main() {
	setlocale(LC_ALL, "italian");
	
	int numero     = 0;
	int decine     = 0;
	int unita      = 0;
	int centinaia  = 0;
	
	cout << "Inserisci un numero intero minore di 1000: ";
	cin  >> numero;
	
	
	if ((numero >= 1000) || (numero < 0)) {
		
		cout << "\n[!] Non va bene!";
		
		return 0;
	}
	
	
	if (numero < 10)
		cout << "\nUnità = " << numero << endl;
	
	
	if ((numero < 100) && (numero >= 10)) {
		decine = numero / 10;
		unita  = numero - decine * 10;
		
		cout << "\nDecine = " << decine << "\tUnità = " << unita;
	}
	
	
	if ((numero < 1000) && (numero >= 100)) {
		
		centinaia 	=  numero / 100;
		decine		= (numero - centinaia * 100) / 10;
		unita 		=  numero - centinaia * 100 - decine * 10;
		
		cout << "\nCentinaia = " << centinaia << "\tDecine = " << decine << "\tUnità = " << unita;
	}
		
	
	return 0;
}
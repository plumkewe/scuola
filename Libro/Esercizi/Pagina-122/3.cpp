#include <iostream>

using namespace std;

//  Esercizio 3 pagina 122
//  Non so se è giusto


int main()
{
	setlocale(LC_ALL, "italian");
	
	int primo_num 	= 0;
	int secondo_num = 0;
	
	int somma_num	= 0;
	int max_num		= 0;
	int min_num		= 0;
	
	
	cout << "Inserisci primo numero: ";
	cin  >> primo_num;
	
	cout << "Inserisci secondo numero: ";
	cin  >> secondo_num;
	
	
	if (primo_num == secondo_num) {
		
		cout << "\nI tuoi numeri sono uguali!";
		
		return 0;
	}
	
	if (primo_num > secondo_num) {
		
		max_num = primo_num;
		min_num = secondo_num;
		
	} else {
		
		max_num = secondo_num;
		min_num = primo_num;
	}
	
	somma_num = max_num + min_num * 2;
	
	cout << "\nLa somma del numero con valore assoluto maggiore e del doppio di quello che ha il valore assoluto minore è pari a: " << somma_num << endl;
	
	
	return 0;
}
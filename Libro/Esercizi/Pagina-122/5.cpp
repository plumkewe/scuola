#include <iostream>

using namespace std;

//  Esercizio 5 pagina 122


int main()
{
	setlocale(LC_ALL, "italian");
	
	int primo_num 		= 0;
	int secondo_num 	= 0;
	int terzo_num 		= 0;
	
	int min_num 			= 0;
	int max_num			= 0;
	int diff_max_min	= 0;
	
	
	cout << "Inserisci primo numero: ";
	cin  >> primo_num;
	
	cout << "Inserisci secondo numero: ";
	cin  >> secondo_num;
	
	cout << "Inserisci terzo numero: ";
	cin  >> terzo_num;


	if ((primo_num == secondo_num) && (primo_num == terzo_num)) {
		
		cout << "\nI tuoi numeri sono uguali!";
		
		return 0;
	}

	
	if (primo_num < secondo_num) {
		
		if (primo_num < terzo_num)
			min_num = primo_num;
		
		else
			min_num = terzo_num;
		
	} else {
		
		if (secondo_num < terzo_num)
			min_num = secondo_num;
		
		else
			min_num = terzo_num;
	}

	if (primo_num > secondo_num) {
		
		if (primo_num > terzo_num)
			max_num = primo_num;
		
		else
			max_num = terzo_num;
		
	} else {
		
		if (secondo_num > terzo_num)
			max_num = secondo_num;
		
		else
			max_num = terzo_num;
	}

	diff_max_min = max_num - min_num;
	
	cout << "\nLa differenza tra il numero più grande e quello più piccolo è pari a: " << diff_max_min << endl;
	
	
	return 0;
}
#include <iostream>

using namespace std;

//  Esercizio 8 pagina 122


int main()
{
	setlocale(LC_ALL, "italian");
	
	int primo_num 	= 0;
	int secondo_num = 0;
	int terzo_num 	= 0;
	
	int uno_quad	= 0;
	int due_quad	= 0;
	int somma_quad 	= 0;
	
	
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
			uno_quad = primo_num;
		
		else
			uno_quad = terzo_num;
		
	} else {
		
		if (secondo_num < terzo_num)
			uno_quad = secondo_num;
		
		else
			uno_quad = terzo_num;
	}
	
	if (uno_quad == primo_num) {
		
		if (secondo_num < terzo_num)
			due_quad = secondo_num;
			
		else
			due_quad = terzo_num;
	
	}
	
	if (uno_quad == secondo_num) {
		
		if (primo_num < terzo_num)
			due_quad = primo_num;
			
		else
			due_quad = terzo_num;
		
	}
	
	if (uno_quad == terzo_num) {
		
		if (primo_num < secondo_num)
			due_quad = primo_num;
			
		else
			due_quad = secondo_num;
		
	}
	
	uno_quad *= uno_quad;
	due_quad *= due_quad;
	
	somma_quad = uno_quad + due_quad;
	

	cout << "\nLa somma dei quadrati di due numeri più piccoli è uguale a: " << somma_quad << endl;
	
	
	return 0;
}
#include <iostream>

using namespace std;

//  Esercizio 13 pagina 122

enum operazioni
{
	kAddizione = 1,
	kSottrazione,
	kMultiplicazione,
	kDivisione
};

int main()
{
	setlocale(LC_ALL, "italian");
	
	int primo_num 		= 0;
	int secondo_num 	= 0;
	
	int operazione_num 	= 0;
	int risultato_num	= 0;
	
	cout << "Inserisci primo numero: ";
	cin  >> primo_num;
	
	cout << "Inserisci secondo numero: ";
	cin  >> secondo_num;
	
	cout << "\nOperazione:  1. addizione, 2. sottrazione, 3. multiplicazione, 4. divisione >>";
	cin  >> operazione_num;
	
	switch (operazione_num) 
	{
		case kAddizione: {
			risultato_num = primo_num + secondo_num;
			break;
		}
		case kSottrazione: {
			risultato_num = primo_num - secondo_num;
			break;
		}
		case kMultiplicazione: {
			risultato_num = primo_num * secondo_num;
			break;
		}
		case kDivisione: {
			risultato_num = primo_num / secondo_num;
			break;
		}
		default: {
			cout << "\nOperazione non valida" << endl;
			return 0;
		}
		
	}
	
	cout << "\nIl risultato della operazione è uguale a: " << risultato_num << endl;
	
	
	return 0;
}
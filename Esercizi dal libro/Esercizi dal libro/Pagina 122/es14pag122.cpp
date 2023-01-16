#include <iostream>
#include <cmath>

using namespace std;

//  Esercizio 14 pagina 122

enum calcoli
{
	kPerimetro = 1,
	kArea,
	kDiagnonale
};


int main()
{
	setlocale(LC_ALL, "italian");
	
	int primo_lato 		= 0;
	int secondo_lato	= 0;
	
	int calcolo_rett 	= 0;
	int risultato_rett	= 0;
	
	cout << "Inserisci primo lato: ";
	cin  >> primo_lato;
	
	cout << "Inserisci secondo lato: ";
	cin  >> secondo_lato;
	
	cout << "\nCalcolo:  1. perimetro, 2. area, 3. diagnonale >>";
	cin  >> calcolo_rett;
	
	switch (calcolo_rett)
	{
		case kPerimetro: {
			risultato_rett = (primo_lato + secondo_lato) * 2;
			break;
		}
		case kArea: {
			risultato_rett = primo_lato * secondo_lato;
			break;
		}
		case kDiagnonale: {
			risultato_rett = sqrt((primo_lato * primo_lato + secondo_lato * secondo_lato));
			break;
		}
		default: {
			cout << "\nOperazione non valida" << endl;
			return 0;
		}
		
	}

	cout << "\nIl risultato della operazione è uguale a: " << risultato_rett << endl;
	
	
	return 0;
}
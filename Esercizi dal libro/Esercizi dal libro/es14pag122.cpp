#include <iostream>
#include <cmath>

using namespace std;

//  Esercizio 14 pagina 122

enum calcoli
{
	perimetro = 1,
	area,
	diagnonale
};


int main()
{
	setlocale(LC_ALL, "italian");
	
	int primoLato 		= 0;
	int secondoLato		= 0;
	
	int calcoloRett 	= 0;
	int risultatoRett	= 0;
	
	cout << "Inserisci primo lato: ";
	cin  >> primoLato;
	
	cout << "Inserisci secondo lato: ";
	cin  >> secondoLato;
	
	cout << "\nCalcolo:  1. perimetro, 2. area, 3. diagnonale >>";
	cin  >> calcoloRett;
	
	switch (calcoloRett) {
		case perimetro: ;
			
			risultatoRett = (primoLato + secondoLato) * 2;
			break;
		
		case area: ;
			
			risultatoRett = primoLato * secondoLato;
			break;
		
		case diagnonale: ;
			
			risultatoRett = sqrt((primoLato * primoLato + secondoLato * secondoLato));
			break;
		
		
		default:
			cout << "\nOperazione non valida" << endl;
			return 0;
	}

	cout << "\nIl risultato della operazione è uguale a: " << risultatoRett << endl;
	
	
	return 0;
}
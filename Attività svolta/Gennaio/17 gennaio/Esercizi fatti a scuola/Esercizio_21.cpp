#include <iostream>

using namespace std;

//  

float Sconto (float primo_prod, float second_prod)
{
	float prezzo_finale 	= primo_prod + second_prod;
	float menocaro_prod 	= 0.0f;
	
	if (primo_prod == second_prod)
		return prezzo_finale;
	
	else if (primo_prod > second_prod)
		menocaro_prod = second_prod;
	else
		menocaro_prod = primo_prod;
	
	prezzo_finale -= menocaro_prod * 0.30;
	
	
	return prezzo_finale;
}


int main()
{
	setlocale(LC_ALL, "italian");
	
	float primo_prod 	= 0.0f;
	float second_prod 	= 0.0f;
	float prezzo_finale = 0.0f;
	
	
	cout << "Inserisci il prezzo del primo prodotto: ";
	cin  >> primo_prod;
	
	cout << "Inserisci il prezzo del secondo prodotto: ";
	cin  >> second_prod;
	
	prezzo_finale = Sconto(primo_prod, second_prod);
	
	cout << "\nIl prezzo da pagare è pari a: " <<  prezzo_finale << "€" << endl;
	
	
	return 0;
}
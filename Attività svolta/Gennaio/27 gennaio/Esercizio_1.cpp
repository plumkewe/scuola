#include <iostream>
#include <string>

using namespace std;

//  

struct Libreria
{
	int    codice;
	int    pagine;
	float   costo;
	string titolo;
};


int main()
{
	setlocale(LC_ALL, "italian");
	
	Libreria libri[4];

	float costo = 0;
	
	for (int prime_i = 0; prime_i < 4; prime_i++)
	{
		cout << "Inserisci il titolo del " << prime_i + 1 << " libro: ";
		cin  >>  libri[prime_i].titolo;
		
		cout << "Quante pagine ha il libro \"" << libri[prime_i].titolo << "\": ";
		cin  >>  libri[prime_i].pagine;
		
		cout << "E il suo prezzo: ";
		cin  >>  libri[prime_i].costo;
		
		costo += libri[prime_i].costo;
		
		cout << "E alla fine inserisci il codice di questo libro: ";
		cin  >>  libri[prime_i].codice;
		
		cout << endl;
	}
	
	cout << "\nIl prezzo medio dei libri è pari a " << costo / 4  << "€" << endl;
	
	
	return 0;
}
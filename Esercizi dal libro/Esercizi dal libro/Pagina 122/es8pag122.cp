#include <iostream>

using namespace std;

//  Esercizio 8 pagina 122


int main()
{
	setlocale(LC_ALL, "italian");
	
	int primoNum 	= 0;
	int secondoNum 	= 0;
	int terzoNum 	= 0;
	
	int unoQuad		= 0;
	int dueQuad		= 0;
	int sommaQuad 	= 0;
	
	
	cout << "Inserisci primo numero: ";
	cin  >> primoNum;
	
	cout << "Inserisci secondo numero: ";
	cin  >> secondoNum;
	
	cout << "Inserisci terzo numero: ";
	cin  >> terzoNum;
	
	
	if ((primoNum == secondoNum) && (primoNum == terzoNum))
	{
		cout << "\nI tuoi numeri sono uguali!";
		
		return 0;
	}
	
	
	if (primoNum < secondoNum) {
		
		if (primoNum < terzoNum)
			unoQuad = primoNum;
		
		else
			unoQuad = terzoNum;
	}
	else
	{
		if (secondoNum < terzoNum)
			unoQuad = secondoNum;
		
		else
			unoQuad = terzoNum;
	}
	
	if (unoQuad == primoNum)
	{
		if (secondoNum < terzoNum)
		{
			dueQuad = secondoNum;
		}
		
		else
		{
			dueQuad = terzoNum;
		}
	
	}
	
	if (unoQuad == secondoNum)
	{
		if (primoNum < terzoNum)
		{
			dueQuad = primoNum;
		}
		
		else
		{
			dueQuad = terzoNum;
		}
		
	}
	
	if (unoQuad == terzoNum)
	{
		if (primoNum < secondoNum)
		{
			dueQuad = primoNum;
		}
		
		else
		{
			dueQuad = secondoNum;
		}
		
	}
	
	unoQuad *= unoQuad;
	dueQuad *= dueQuad;
	
	sommaQuad = unoQuad + dueQuad;
	

	cout << "\nLa somma dei quadrati di due numeri più piccoli è uguale a: " << sommaQuad << endl;
	
	
	return 0;
}
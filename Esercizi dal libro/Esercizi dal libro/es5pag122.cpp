#include <iostream>

using namespace std;

//  Esercizio 5 pagina 122


int main()
{
	setlocale(LC_ALL, "italian");
	
	int primoNum 	= 0;
	int secondoNum 	= 0;
	int terzoNum 	= 0;
	
	int minNum 		= 0;
	int maxNum		= 0;
	int diffMaxMin	= 0;
	
	
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
			minNum = primoNum;
		
		else
			minNum = terzoNum;
	}
	else
	{
		if (secondoNum < terzoNum)
			minNum = secondoNum;
		
		else
			minNum = terzoNum;
	}



	if (primoNum > secondoNum) {
		
		if (primoNum > terzoNum)
			maxNum = primoNum;
		
		else
			maxNum = terzoNum;
	}
	else
	{
		if (secondoNum > terzoNum)
			maxNum = secondoNum;
		
		else
			maxNum = terzoNum;
	}

	diffMaxMin = maxNum - minNum;
	
	cout << "\nLa differenza tra il numero più grande e quello più piccolo è pari a: " << diffMaxMin << endl;
	
	
	return 0;
}
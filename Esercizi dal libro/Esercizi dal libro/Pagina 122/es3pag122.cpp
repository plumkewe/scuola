#include <iostream>

using namespace std;

//  Esercizio 3 pagina 122
//  Non so se è giusto


int main()
{
	setlocale(LC_ALL, "italian");
	
	int primoNum 	= 0;
	int secondoNum 	= 0;
	
	int sommaNum	= 0;
	int maxNum		= 0;
	int minNum		= 0;
	
	
	cout << "Inserisci primo numero: ";
	cin  >> primoNum;
	
	cout << "Inserisci secondo numero: ";
	cin  >> secondoNum;
	
	
	if (primoNum == secondoNum)
	{
		cout << "\nI tuoi numeri sono uguali!";
		
		return 0;
	}
	
	if (primoNum > secondoNum)
	{
		maxNum = primoNum;
		minNum = secondoNum;
	}
	else
	{
		maxNum = secondoNum;
		minNum = primoNum;
	}
	
	sommaNum = maxNum + minNum * 2;
	
	cout << "\nLa somma del numero con valore assoluto maggiore e del doppio di quello che ha il valore assoluto minore è pari a: " << sommaNum << endl;
	
	
	return 0;
}
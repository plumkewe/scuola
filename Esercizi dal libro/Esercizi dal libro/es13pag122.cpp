#include <iostream>

using namespace std;

//  Esercizio 13 pagina 122

enum operazioni
{
	addizione = 1,
	sottrazione,
	multiplicazione,
	divisione
};

int main()
{
	setlocale(LC_ALL, "italian");
	
	int primoNum 		= 0;
	int secondoNum 		= 0;
	
	int operazioneNum 	= 0;
	int risultatoNum	= 0;
	
	cout << "Inserisci primo numero: ";
	cin  >> primoNum;
	
	cout << "Inserisci secondo numero: ";
	cin  >> secondoNum;
	
	cout << "\nOperazione:  1. addizione, 2. sottrazione, 3. multiplicazione, 4. divisione >>";
	cin  >> operazioneNum;
	
	switch (operazioneNum) {
		case addizione: ;
			
			risultatoNum = primoNum + secondoNum;
			break;
		
		case sottrazione: ;
			
			risultatoNum = primoNum - secondoNum;
			break;
		
		case multiplicazione: ;
			
			risultatoNum = primoNum * secondoNum;
			break;
		
		case divisione: ;
			
			risultatoNum = primoNum / secondoNum;
			break;
			
		default:
			cout << "\nOperazione non valida" << endl;
			return 0;
	}
	
	cout << "\nIl risultato della operazione è uguale a: " << risultatoNum << endl;
	
	
	return 0;
}
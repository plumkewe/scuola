#include <iostream>

using namespace std;


int main() 
{
	
	long int iNumero1, iNumero2;
	short int iSelezione;
	
	
	cout << "Mini calcolatrice ti da il benvenuto, sarò in grado di applicare una delle quattro operazioni ai tuoi due numeri interi inseriti !tip, puoi usare anche numeri grandi\n\n"
		 << "inserisci il tuo primo numero: ";
	cin >> iNumero1;
	
	cout << "inserisci il tuo secondo numero: ";
	cin >> iNumero2;
	
	
	cout << "\n1. [Addizione]  2. [Sottrazione]  3. [Moltiplicazione]  4. [Divisione]"
		 << "\nDigita il numero corrispondente alla operazione: ";
	cin >> iSelezione;
	
	
	switch (iSelezione) { //  switch che come la condizione ha "iSelezione" che di seguito fa scorerre tra i case
		
		case 1:
			cout << "\n" << iNumero1 << " + " << iNumero2 << " = " << iNumero1 + iNumero2; 
			break;
		case 2:
			cout << "\n" << iNumero1 << " - " << iNumero2 << " = " << iNumero1 - iNumero2;
			break;
		case 3:
			cout << "\n" << iNumero1 << " * " << iNumero2 << " = " << iNumero1 * iNumero2;
			break;
		case 4:
			cout << "\n" << iNumero1 << " : " << iNumero2 << " = " << iNumero1 / iNumero2; 
			break;
			
		default: cout << "\nhmm... hai solo 4 operazioni a disposizione... riavvia il programma e riprova"; //  in case l'utente inserisca un numero (operazione) non previsto nei case
	}
	
	
	return 0;
}
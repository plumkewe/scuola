#include <iostream>
#include <algorithm> //  serve per il sort
#include <iomanip> //  serve per manipolare il cin (R30-31, 42)

using namespace std;

//  Richiedi 9 numeri, e in seguito stampa il maggiore e il minore di essi.
//  Versione 0.2 ++ media 
//  Questo esercizio è stato preso dal mio GitHub e modificato


int main() {
	setlocale(LC_ALL, "italian"); //  serve per poter utilizzare gli accenti 
	
	int aNumeri[9], //  creiamo un array di tipo int e con "10 elementi"
		sQuanti = sizeof(aNumeri)/sizeof(aNumeri[0]); //  troviamo quanti elementi sono nel array
		
	double sSomma, oMedia = 0;
	
	cout << "sarò in grado di stabilire il più grande e il più piccolo numero tra i 10 che inserirai\n\n"; //  una piccola spiegazione di ciò che farà il programma (per utente) e poi va da capo ("\n\n")
	
	for (int i = 0, n = 1; i < sQuanti; ++ i, ++ n) { //  loop per richiedere i numeri, incremento i per spostarsi nel array e n per stampare "inserisci il x numero"
		
		cout << "inserisci il " << n << " numero: ";
		
		while (!(cin >> aNumeri[i])) { //  serve per evitare un errore, il codice verrà eseguito quando in cin verrà ricevuto un valore che non sia int (valore del nostro array)
			
			cout << "[!] Il valore devessere del tipo int, riprova: "; //  messaggio per indicare che ce un errore 
			
			cin.clear(); //  sostanzialmente serve per pulire l'errore (che non dovrà essere più grande di 222), e di seguito andrà da capo ('\n')
			cin.ignore(222, '\n');
		}
		
		sSomma += aNumeri[i]; //  += per fare la somma nel mentre si aggiungono gli elementi nel'array

	}
	
	oMedia = sSomma / sQuanti; //  faccio la media su numeri sommati dividento per la loro quantita (9)
	
	sort(aNumeri, aNumeri + sQuanti); //  sort(da, a) anumeri + sQuanti rapresentanto l'ultimo contenuto del array. aNumeri rapresenta il primo contenuto del array facendo cosi un "range da a". gli elementi verranno ordinati in modo crescente (dal più piccolo al più grande.
	
	cout << setprecision(2) << fixed; //  limitiamo il double per stampare solo i decimi x.00
	
	cout << '\n'<< "il numero più piccolo è " << aNumeri[0] << " e il numero più grande è " << aNumeri[sQuanti - 1] << " la media dei numeri è pari a " << oMedia; //  stampa il primo (0) elemento/numero presente nel array, che dopo ordinamento è diventato più piccolo (aNumeri[0]) e l'ultimo che è quello più grande (aNumeri[sQuanti - 1])
	
	return 0;
}
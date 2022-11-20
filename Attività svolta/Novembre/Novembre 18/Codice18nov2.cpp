#include <iostream>
#include <iomanip> //  serve per manipolare il cin (R28-29)

using namespace std;

//  Richiedi 20 numei e stabilisci un range che vada da 'a' a 'b' e scrivi quanti numeri si trovano in quel range.
//  Versione 0.0 


int main() {
	setlocale(LC_ALL, "italian"); //  serve per poter utilizzare gli accenti 
	
	int aNumeri[20], //  creiamo un array di tipo int e con "20 elementi"
		a, b, sCambiare, oContatore = 0,
		sQuanti = sizeof(aNumeri)/sizeof(aNumeri[0]); //  troviamo quanti elementi sono nel array
		
	
	cout << "sarò in grado di dirti numeri sono compresi tra i numeri che inserirai dopo\n\n"; //  una piccola spiegazione di ciò che farà il programma (per utente) e poi va da capo ("\n\n")
	
	for (int i = 0, n = 1; i < sQuanti; ++ i, ++ n) { //  loop per richiedere i numeri, incremento i per spostarsi nel array e n per stampare "inserisci il x numero"
		
		cout << "inserisci il " << n << " numero: ";
		
		while (!(cin >> aNumeri[i])) { //  serve per evitare un errore, il codice verrà eseguito quando in cin verrà ricevuto un valore che non sia int (valore del nostro array)
			
			cout << "[!] Il valore devessere del tipo int, riprova: "; //  messaggio per indicare che ce un errore 
			
			cin.clear(); //  sostanzialmente serve per pulire l'errore (che non dovrà essere più grande di 222), e di seguito andrà da capo ('\n')
			cin.ignore(222, '\n');
		}

	}
	
	cout << "\ninserisci il primo numero per creare il range: ";
	cin >> a; //  non sapendo ancora fare delle funzioni personalizzate di alto livello non ho incluso il codice del errore (while) un'altra volta se no il codice sarebbe chilometrico
	
	cout << "inserisci il secondo numero per creare il range: ";
	cin >> b;
	
	if (a > b) { //  giusto per, prevenire dei errori, cambiare il valore del a in caso esso sia più grande del b
		sCambiare = b;
		b = a;
		a = sCambiare;
		
	}
	
	for (int j = 0; j < sQuanti; ++ j) {
		
		if (aNumeri[j] >= a && aNumeri[j] <= b) {
			
			++ oContatore;
		}
		
	}
	
	cout << '\n' << "sono " << oContatore << " gli numeri compresi nel range (" << a << "-" << b << ")";
	
	return 0;
}
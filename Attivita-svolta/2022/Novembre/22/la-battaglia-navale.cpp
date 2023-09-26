#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

//  mini battaglia navale
//  versine 0.2


int main() {
	setlocale(LC_ALL, "italian"); //  serve per poter utilizzare gli accenti 
	
	int aTavoladagioco[21], //  creiamo un array di tipo int e con "20 elementi"
	sDove, sColpita = 0,
	sTentativo = 1,
	sQuanti = sizeof(aTavoladagioco)/sizeof(aTavoladagioco[0]), //  troviamo quanti elementi ci sono nel array
	aGiascritti[sQuanti];
	
	
	fill (aTavoladagioco, aTavoladagioco + sQuanti, 0); //  riempie l'array con il valore '0'
	
	srand(time(NULL)); //  per ottenere dei valori casuali, ai quali assegnare il valore '1' ovvero la lave è presente
	
	for (short int i = 0; i < 4; ++ i) { //  per posizionare le tre navi in tre posizioni casuali da 0 a 20
		
		aTavoladagioco[rand()%sQuanti] = 1; //  assegno al elemento casuale il valore 1 (la nave ce)
		
	}
	
	cout << "Battaglia navale (mini) ti da il benvenuto, \ndovrai indovinare dove si trovano le 3 navi. \nPuoi muoverti sul asse x. \n\nle regole sono semplici se esci dal 'range' (0-20) i tuoi tentativi diminuiranno di 2 e non di 1.\nPerdi se tutti i tentativi verranno esauriti. GG)\n"
		 << "[=] hai a disposizione 20 tentativi!\n\n"; //  spiegazione e cosi via
	
	while (sTentativo < sQuanti) { //  svolgo questo blocco di codice affinche i tentativi non supperano il (pari) 20
		
		cout << "[!] è il tuo " << sTentativo << " tentativo, secondo te dove si trova la nave? Y1 X";
		cin >> sDove;
		
		if (sDove < 0 || sDove >= sQuanti) { //  nel caso in cui se uno esce dal range dovrà pagare il doppio
			
			cout << "[!] Hai apena sprecato un colpo! per questo ti tolgo non uno ma ben due tentativi!\n";
			++ sTentativo;
			
		}
		
		if (aTavoladagioco[sDove] == 1 && aGiascritti[sColpita] != sDove) { //  verifico se nel numero che l'utente abbia inserito è presente una nave e se non vuole barare inserendo la stessa barca
			
			++ sColpita; //  incremento le navi (+1)
			cout << "[X] Complimenti hai colpito la " << sColpita << " nave\n";
			
			aGiascritti[sColpita] = sDove; //  per aggiungere al array una sorta di verifica
			
		}
		
		if (sColpita == 3) { //  una volta colpendo tutte le navi stampo che l'utente ha vinto e finisco il programma con il return 0;
			
			cout << "\n[=] Complimenti hai vinto! tutte le navi sono state abbattute!";
			return 0;
		}
		
		++ sTentativo; //  aumento il tentativo ogni volta 
	}
	
	cout << "\n[!] Hai perso a causa dei tentativi finiti!"; //  se avrà esaurito i tentativi perderà e il gioco finira qui.
	
	
	return 0;
}
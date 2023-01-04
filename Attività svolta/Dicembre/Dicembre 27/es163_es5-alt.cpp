#include <iostream>
#include <string>

using namespace std;

//  

int test (int);
void procedura (string[], int[], int[], int);
void in_ordine (string[], int[], int[], int, bool);
void stampa (string[], int);


int main() {
	
	int alfabeto [3];
	int anni[3];
	
	string nomi [3];
	
	
	procedura(nomi, alfabeto, anni, 3);
	
	
	in_ordine (nomi, alfabeto, anni, 3, true);
	cout << "\vIn ordine alfabetico: \n";
	stampa(nomi, 3);
	
	
	in_ordine (nomi, anni, anni, 3, false);
	cout << "\vIn ordine di età: \n";
	stampa(nomi, 3);
	
	
	
	return 0;
}

int test (int da_testare) {
	
	while (!(cin >> da_testare)) {
		
		cout << "[!] Inserisci un numero: ";
		
		cin.clear();
		cin.ignore(123, '\n');
	}
	
	return da_testare;
	
}

void procedura (string nomi[3], int alfabeto[3], int anni[3], int lunghezza) {
	
	string nome_persona;
	char prima_lettera;
	
	
	int eta_persona = 0;
	
	
	for (int i = 0; i < 3; i++) {
		
		cout << "Inserisci il nome della " << i + 1 << " persona: ";
		cin >> nome_persona;
		
		prima_lettera = nome_persona[0];
		alfabeto[i] = prima_lettera - 96;
		
		nomi[i] = nome_persona;
		
		cout << "Inserisci la sua età: ";
		anni[i] = test(eta_persona);
		
		cout << '\n';
		
		
	}
	
}


void in_ordine (string nomi[3], int alfabeto[3], int anni[3], int lunghezza, bool t_alfa__f_eta) {
	
	for (int i = 0; i < lunghezza - 1; i ++)
		
		for (int j = 0; j < lunghezza - 1; j ++) {
			
			if (alfabeto[j] > alfabeto[j + 1] && t_alfa__f_eta == true) {
				
				swap(nomi[j], nomi[j + 1]);
				swap(alfabeto[j], alfabeto[j + 1]);
				swap(anni[j], anni[j + 1]);
				
			}
			
			if (nomi[j] == nomi[j + 1]) {
				
				nomi[j] = nomi[j] + " (" + to_string(anni[j]) + ")";
				
			}
			
			if (anni[j] > anni[j + 1] && t_alfa__f_eta == false) {
				
				swap(nomi[j], nomi[j + 1]);
				swap(anni[j], anni[j + 1]);
				
			}
			
			
		}
	
	
}


void stampa (string nomi[3], int lunghezza) {
	
	for (int i = 0; i < lunghezza; i ++) {
		
		cout << '\t' << i + 1 << ". " << nomi[i] << '\n';
		
	}
	
	
}


//  scrivi una procedura che, richiesti in input il nome e l'età di tre
//  persone, visualizzi i dati in ordine alfabetico e in ordine di eta
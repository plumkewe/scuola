#include <iostream>
#include <string>

using namespace std;

//  

struct volo {
	
	string nomeVolo;
	string partenza;
	string destinazione;

	float durata;
	
	string passeggeri[100];
	
};

int main() {
	setlocale(LC_ALL, "italian");
	
	struct volo airfly;
	
	int i, np;
	
	cout << "Inserisci il nome del volo: ";
	cin >> airfly.nomeVolo;
	
	cout << "Inserisci aeroporto di partenza: ";
	cin >> airfly.partenza;
	
	cout << "Inserisci aeroporto di arrivo: ";
	cin >> airfly.destinazione;
	
	cout << "Inserisci tempo di percorrenza: ";
	cin >> airfly.durata;
	
	cout << "Inserisci il numero dei passeggeri: ";
	cin >> np;
	
	
	for (i = 0; i < np; ++i) {
		
		cout << "Inserisci nome del passeggero: ";
		cin >> airfly.passeggeri[i];
		
	}
	
	
	return 0;
}
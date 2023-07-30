#include <iostream>
#include <iomanip> //  per limitare il double e stampare solo i decimi

using namespace std;


int main() {
	setlocale(LC_ALL, "italian");  //  per poter utilizzare gli accenti
	
	double iKm;
	
	cout << "Inserisci la distanza in km: ";
	
	cin >> iKm;
	
	
//	anche se inutile, ma magari in un secondo piano uno vorrebbe cambiarle... le ho messe fuorix
	
	const double cTARIFA100 = 0.3;
	const double cTARIFA501 = 0.15;
	const double cTARIFA400 = 0.25;
	
//	Se il percorso non supera i 100 km il costo al chilometro e a 0,3 euro.
//	Se il percorso è tra 100 e 500 km il costo al chilometro è 0,25 euro.
//	Se il percorso supera i 500 km il costo al chilometro è 0,15 euro.
	
	cout << setprecision(2) << fixed;  //  per fermare il double ai decimi
	
	if (iKm < 0) {
		cout << "\n[!] Purtroppo non puoi andare nel purgatorio di Dante... riavvia il programma e inserisci un percorso valido";
	}
	
	else {
		
		if (iKm >= 100 & iKm <= 500) {
			cout << "\nIl biglietto costerà €" << iKm * cTARIFA400;
		}
		
		else {
			
			if (iKm > 500) {
				cout << "\nIl biglietto costerà €" << iKm * cTARIFA501;
			}
			
			else {
				cout << "\nIl biglietto costerà €" << iKm * cTARIFA100;
			}
		
		}
		
	}
	
	return 0;
}
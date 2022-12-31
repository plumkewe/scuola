#include <iostream>
#include <iomanip>

using namespace std;

//  non so se lesercizio voleva che io facessi cosi ma per me va più che bene


double area_cerchio (double);
double area_quadrato (double);

int main() {
	setlocale(LC_ALL, "italian");
	
	double numero {0};
	char scelta;
	
	cout << "Inserisci il valore: ";
	cin >> numero;
	
	if (numero < 0) {
		
		cout << "ERRORE!";
		
		
		return 0;
	}
	
	cout << "\nSi tratta di raggio o di lato? (l = lato; r = raggio) \nScegli: ";
	cin >> scelta;
	
	switch (scelta) {
		
		case 'l': case 'L':
			
			cout << "\nArea del quadrato: " << setprecision(2) << fixed << area_quadrato(numero) << "mm2";
			
			break;
			
		case 'r': case 'R':
			
			cout << "\nArea del cerchio: " << setprecision(2) << fixed << area_cerchio(numero) << "mm2";
			
			break;
			
		default:
			
			cout << "ERRORE!";
	}
	
	
	return 0;
}


double area_cerchio (double raggio) {
	
	const double PI = 3.14159;
	
	return raggio * raggio * PI;
}


double area_quadrato (double lato) {
	
	return lato * lato;
}


//  Scrivi un algoritmo e il relativo programma in C++ che, sfruttando le funzioni, permetta
//  di calcolare l'area di un cerchio o di un quadrato. L'utente inserisce un numero, dichiarando
//  se si tratta del raggio di un cerchio o del'lato di un quadrato. Se inserisce
//  un numero negativo viene visualizzato un errore, altrimenti il sistema calcola l'area in modo appropriato.
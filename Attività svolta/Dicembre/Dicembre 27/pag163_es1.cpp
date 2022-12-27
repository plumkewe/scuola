#include <iostream>

using namespace std;

//  

void asterischi (int);
int prova_banale (int);

int main() {
	setlocale(LC_ALL, "italian");
	
	int numero = 0;
	
	cout << "Inserisci un numero non maggiore di 10: ";
	numero = prova_banale (numero);
	
	asterischi (numero);
	
	
	return 0;
}

int prova_banale (int numero) {
	
	cin >> numero;
	
	while (numero > 10) {
		
		cout << "Il numero non possa essere maggiore di 10, riprova: ";
		cin >> numero;
		
	}
	
	
	return numero;
}

void asterischi (int numero) {
	
	cout << '\n';
	
	for (int i = 0; i < numero; i++) {
		
		cout << "*";
		
	}
	
	
}


//  Scrivi un algoritmo e il relativo programma in C++ 
//  composto da una procedura che riceve
//  un numero intero e visualizzi in output
//  tanti asterischi quanti sono indicati dal parametro
//  trasmesso. I numero intero non puo essere maggiore di 10.
#include <iostream>

using namespace std;

//  ho perso parecchio tempo su questo esercizio, pur per la sua semplicità mi fece sorgere molti dubbi su come funziona questo linguaggio


int main() {
	setlocale(LC_ALL, "italian");
	
	short int unsigned aNumerofibonacci [12],
			  sQuanti = sizeof(aNumerofibonacci)/sizeof(aNumerofibonacci[0]);
	
	
	for (short int unsigned i = 0; i < sQuanti; ++ i){
		
		aNumerofibonacci[i] = i;
		
		if (i >= 2) {
			aNumerofibonacci[i] = aNumerofibonacci[i-1] + aNumerofibonacci[i-2];
		}
		

	}
	
	for (short int unsigned i = 0; i < sQuanti; ++ i){
		
		cout << aNumerofibonacci[i] <<  " ";
		
	}
	
	
	return 0;
}

//  Memorizzare in un array di 12 posizioni i primi numeri della serie di Fibonacci, in cui ogni
//  numero è dato dalla somma dei DUE! precedenti e i primi due numeri sono 0 e 1.
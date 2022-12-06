#include <iostream>

using namespace std;

//  esercizio 45

void multipliditreecinque(){

    for (int i = 10; i < 100 + 1; i ++){

        if (i % 3 == 0 || i % 5 == 0){
            cout << i << " ";
        }

    }
    
    
}


int main() {
	
	multipliditreecinque();
	
	return 0;
}

//  Scrivi un algoritmo e relativo codice C++ che
//  visualizzi tutti i numeri da 10 a 100 multipli di 3 e 5
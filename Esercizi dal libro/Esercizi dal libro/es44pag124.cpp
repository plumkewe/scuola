#include <iostream>

using namespace std;

//  esercizio 44

void multipliditre(){

    for (int i = 10; i < 100; i ++){

        if (i % 3 == 0){
            cout << i << " ";
        }

    }
    
}


int main() {
	
    multipliditre();
	
	return 0;
}

//  Scrivi un algoritmo e relativo codice C++ che
//  visualizzi tutti i numeri da 10 a 100 multipli di 3
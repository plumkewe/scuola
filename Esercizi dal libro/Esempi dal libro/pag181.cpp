#include <iostream>

using namespace std;

//  


void bubbleSort (int vet[], int n) {
	
	int i, k, sup, comodo;
	bool continua = true;
	k = n;
	
	while (continua) {
	
		sup = k;
		continua = false;
		
		for (i = 0; i < sup - 1; ++i)
			if (vet [i] > vet [i + 1]) {
				
				comodo = vet[i];
				vet [i] = vet [i + 1];
				vet [i + 1] = comodo;
				continua = true;
				k = i + 1;
				
			}
	
	}
	
}
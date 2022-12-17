#include <iostream>

using namespace std;

//  

void ordinamentoIngenuo (int vet[], int n) {
	
	int i, j, comodo;
	
	for (i = 0; i < n; ++i)
		for (j = i + 1; j < n; ++j)
			if (vet[i] > vet[j]) {
				
				comodo = vet[i];
				vet[i] = vet[j];
				vet[j] = comodo;
				
			}
	
}
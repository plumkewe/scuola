#include <iostream>

using namespace std;

//  


bool ricercaBinaria (int vet[], int n, int x) {
	
	int primo, ultimo, centro;
	bool trovato;
	primo = 0;
	ultimo = n;
	trovato = false;
	
	while ((primo <= ultimo) && (!trovato)) {
		
		centro = (primo + ultimo) / 2;
		
		if (vet[centro] == x)
			trovato = true;
		
		else if (vet[centro] < x)
			primo = centro + 1;
		
		else
			ultimo = centro - 1;
		
		
	}
	
	
	return trovato;
}
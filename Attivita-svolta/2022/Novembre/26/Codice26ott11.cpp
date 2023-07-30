#include <iostream>

using namespace std;

//  


int main() {
	setlocale(LC_ALL, "italian");
	
	short int aNumeri [8],
	iNumero1, iNumero2, sCambiare, oContatore = 0,
	sQuanti = sizeof(aNumeri)/sizeof(aNumeri[0]);
	
	for (short int unsigned i = 0; i < sQuanti; ++ i){
		
		cin >> aNumeri[i];
		
	}
	
	cout << "Inserisci il primo numero del range: ";
	cin >> iNumero1;
	
	cout << "Secondo: ";
	cin >> iNumero2;
	
	if (iNumero1 > iNumero2) {
		sCambiare = iNumero2;
		iNumero2 = iNumero1;
		iNumero1 = sCambiare;
		
	}
	
	for (int j = 0; j < sQuanti; ++ j) {
		
		if (aNumeri[j] > iNumero1 && aNumeri[j] < iNumero2) {
			
			++ oContatore;
		}
		
	}
	
	cout << "\nSono " << oContatore << " gli numeri compresi nel range (" << iNumero1 << "-" << iNumero2 << ")";
	
	return 0;
}

//  Riempire un array con 8 elementi inseriti dall’utente Leggere l’array e leggere ulteriori due
//  numeri e dire quanti valori nell’array sono compresi tra questi.
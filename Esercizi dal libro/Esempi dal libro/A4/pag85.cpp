#include <iostream>

using namespace std;

//  


int main() {
	setlocale(LC_ALL, "italian");
	
	int voto;
	
	cout << "Inserisci il voto: ";
	cin >> voto;
	
	if ((voto < 0) || (voto > 30))
		cout << "Valore non corretto!";
	
	else if (voto > 20)
		cout << "Hai superato l'esame e puoi registrarlo!";
	
	else if (voto >= 16)
		cout << "Dovrai sostenere l'orale!";
	
	else 
		cout << "Mi dispiace... respinto!";
	
	return 0;
}
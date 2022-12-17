#include <iostream>
#include <string>

using namespace std;

//  

class automobile {
	
public:
	
	string marca;
	string colore;
	
	int cilindrata, marcia;
	
	
	automobile (string pMarca, string pColore, int pCilindrata);
	
	int setserbatoio (int b);
	double getserbatio ();
	
	void salimarcia();
	void scendimarica();
	void avviamotore();
	void mostrastato();
	
	
private:
	
	int serbatio;
	int capacitamax;
	bool statomotore;
	
};

automobile::automobile(string pMarca, string pColore, int pCilindrata) {
	
	marca = pMarca;
	colore = pColore;
	cilindrata = pCilindrata;
	
	statomotore = false;
	marcia = 0;
	serbatio = 0;
	capacitamax = 45;
	
}

int automobile::setserbatoio(int b) {
	
	if ((b + serbatio) <= (capacitamax)) {
		
		serbatio = serbatio + b;
		
		return 0;
		
	} else
		
		return -1;
	
}

double automobile::getserbatio() {
	
	return serbatio;
	
}

void automobile::salimarcia() {
	
	if (statomotore)
		if (marcia < 5)
			marcia ++;
	
	else
		cout << "Motore spento, cambio non attivo" << '\n';
	
}


void automobile::scendimarica() {
	
	if (statomotore)
		if (marcia > 1)
			marcia --;
		
	else 
		cout << "Motore spento, cambio non attivo" << '\n';
	
}


void automobile::avviamotore() {
	
	if (serbatio != 0)
		statomotore = true;
	
	else
		cout << "Impossibile avviare, serbatoio vuoto" << '\n';
}


void automobile::mostrastato() {
	
	cout << "Automobile: " << marcia << " " << cilindrata << " " << colore << '\n';
	
	cout << "Serbatoio: " << serbatio << " litri di carburante" << '\n';
	
	cout << "Marcia: " << marcia << '\n';
	
	if (statomotore)
		cout << "Motore accesso" << '\n';
	
	else 
		cout << "Motore spento" << '\n';
	
}



int main() {
	setlocale(LC_ALL, "italian");
	
	automobile auto1 = automobile ("Marca1", "giallo", 1200);
	
	cout << "Chiamo la funzione membro MostraStato()" << '\n';
	auto1.mostrastato();
	
	cout << "====================" << '\n';
	cout << "Chiamo la funzione membro setserbatoio()" << '\n';
	auto1.setserbatoio(5);
	
	cout << "====================" << '\n';
	cout << "Avvio il motore" << '\n';
	auto1.avviamotore();
	
	cout << "====================" << '\n';
	cout << "Chiamo la funzione membro salimarcia()" << '\n';
	auto1.salimarcia();
	
	cout << "====================" << '\n';
	cout << "Chiamo la funzione membro mostrastato()" << '\n';
	auto1.mostrastato();
	
	
	return 0;
}
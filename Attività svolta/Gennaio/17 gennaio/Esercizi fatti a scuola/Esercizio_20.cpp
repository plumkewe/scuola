#include <iostream>

using namespace std;

//  

int Sconto (float importo_iniziale);


int main()
{
	setlocale(LC_ALL, "italian");
	
	float importo_iniziale = 0.0f;
	float importo_scontato = 0.0f;
	
	
	cout << "Inserisci il tuo importo: ";
	cin  >> importo_iniziale;
	
	importo_scontato = Sconto(importo_iniziale);
	
	cout << "Dovrai pagare: " << importo_scontato << "€ sconto incluso." << endl;
		
	
	return 0;
}

int Sconto (float importo_iniziale)
{
	float importo_finale	= importo_iniziale;
	float sconto            = 0.0f;
	
	
	if (importo_iniziale < 100)
		sconto = 0.05;
	else if (importo_iniziale >= 100 && importo_iniziale < 300)
		sconto = 0.10;
	else if (importo_iniziale >= 300 && importo_iniziale <= 500)
		sconto = 0.15;
	else if (importo_iniziale >  500) //  anche qui if è "unitile" ma ok
	sconto = 0.25;
	
	importo_finale -= importo_iniziale * sconto;
	
	
	return importo_finale;
}

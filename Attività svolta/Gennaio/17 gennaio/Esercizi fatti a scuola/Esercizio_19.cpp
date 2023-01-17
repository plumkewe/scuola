#include <iostream>
#include <string>

using namespace std;

//  

string StatoSerra (int valore);


int main()
{
	setlocale(LC_ALL, "italian");
	
	int temperatura           = 0;
	string stato_effettivo;
	
	
	cout << "Inserisci la temperatura: ";
	cin  >> temperatura;
	
	stato_effettivo = StatoSerra(temperatura);
	
	cout << "Lo stato della serra è: " << stato_effettivo << endl;
	
	
	return 0;
}

string StatoSerra (int valore)
{
	string stato_effettivo;
	
	
	if ((valore <= 6) || (valore >= 27))
		stato_effettivo = "Rischio elevato";
	else
		if ((valore >= 7 && valore <= 14) || (valore >= 21 && valore <= 27))
		stato_effettivo = "Rischio moderato";
	else
		if (valore >= 15 && valore <= 20) //  inutile if, ma ok
		stato_effettivo = "Ottimale";
	
	
	return stato_effettivo;
}
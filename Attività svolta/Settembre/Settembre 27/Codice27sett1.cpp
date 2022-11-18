#include <iostream>

using namespace std;


int main() {

	int iAnniImmatricolata, iCilindrata, oCalcolo, oAnni; //  dichiarazione delle variabili di tipo intero
	
	
	const double cTASSA = 0.20; //  costante di tipo double che sarebbe il 20%
	
	cout << "Salve, questo programma è in grado di calcolare le tasse da pagare per una moto\n";
	
	cout << "\nInnanzitutto inserisci la cilindrata della tua moto: cc"; 
	cin >> iCilindrata;
	
	cout << "\nInserisci la data della immatricolata: ";
	cin >> iAnniImmatricolata;
	
	// non so se il calcolo è giusto (me dal futuro: non lo è)
	
	oCalcolo = ((2022 - iAnniImmatricolata) * iCilindrata) * cTASSA; //  calcolo fuori per comodita 
	
	cout << "\nbeh dovrai pagare €" << oCalcolo ;


	return 0;
}
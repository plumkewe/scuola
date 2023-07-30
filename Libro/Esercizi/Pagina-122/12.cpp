#include <iostream>

using namespace std;

//  Esercizio 12 pagina 122


enum mesi : short int {
	
	kGennaio = 1,
	kFebbraio,
	kMarzo,
	kAprile,
	kMaggio,
	kGiugno,
	kLuglio,
	kAgosto,
	kSettembre,
	kOttobre,
	kNovembre,
	kDicembre
	
};


int main() {
	setlocale(LC_ALL, "italian"); //  per poter usare gli accenti
	
	short int mese			= 0;
	short int mese_giorni	= 0;
	
	cout << "Inserisci il mese: ";
	cin  >> mese;
	
	
	switch (mese) 
	{
		case kNovembre:
		case kAprile:
		case kGiugno:
		case kSettembre: {
			mese_giorni = 30;
			break;
		}
		case kGennaio:
		case kMarzo:
		case kMaggio:
		case kLuglio:
		case kAgosto:
		case kOttobre:
		case kDicembre: {
			mese_giorni = 31;
			break;
		}
		case kFebbraio: {
			mese_giorni = 28;
			break;
		}
		default: {
			cout << "\nMese non valido" << endl;
			return 0;
		}
		
	}
	
	cout << "\nIl mese ha " << mese_giorni << " giorni" << endl;
	
	
	return 0;
}
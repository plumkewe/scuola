#include <iostream>

using namespace std;

//  

enum azioni 
{
	vendita = 1,
	aggiunta,
	visualizzazione
};

float PesoBlocchi (int blocchi_da_vendere)
{
	return blocchi_da_vendere * 4.5f;
}

void VendiBlocchi (int &blocchi)
{
	int quanti = 0;
	
	cout << "\tQuanti blocchi vuoi vendere: ";
	cin  >> quanti;
	
	
	if (quanti > blocchi)
	{
		cout << "\tQuesta azione non è accessibile!" << endl;
		return;
	}
	else
	{
		cout << "\tIl peso complessivo dei blocchi è: " << PesoBlocchi(quanti) << "KG";
		blocchi -= quanti;
	}
}

void InserisciBlocchi (int &blocchi)
{
	int quanti = 0;
	
	cout << "\tQuanti blocchi vuoi inserire: ";
	cin  >> quanti;

	if (quanti + blocchi > 2000)
		{
			cout << "\tQuesta azione non è accessibile!" << endl;
			return;
		}
	else
		blocchi += quanti;
}

void MostraBlocchi (int &blocchi)
{
	cout << "\t[NEL MAGAZZINO SONO PRESENTI: " << blocchi << " BLOCCHI]" << endl;
}


int main()
{
	setlocale(LC_ALL, "italian");
	
	int azione;
	int blocchi = 0;;
	
	do
	{
		cout << "\nChe azione vuoi fare?  1. vendita, 2. aggiunta, 3. visualizzazione.  10 uscire --> ";
		
		while (!(cin >> azione))
			{
				cout << "Devi inserire un numero: ";
				
				cin.clear();
				cin.ignore(123, '\n');
			}
		
		switch (azione)
		{
			
			case vendita: {
				VendiBlocchi(blocchi);
				break;
			}
				
			case aggiunta: {
				InserisciBlocchi(blocchi);
				break;
			}
				
			case visualizzazione: {
				MostraBlocchi(blocchi);
				break;
			}
				
		}
		
	} while (azione != 10);
	
	
	return 0;
}
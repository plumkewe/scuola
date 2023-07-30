#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//  potevo farlo più completo ma ci sta

enum gestione : int
{
	kVersamento = 0,
	kPrelevamento,
	kAssegno,
};

bool VerificaSaldi (float denaro, float& conto);
void Versamento (float (&conto_corrente)[3], short int (&attivita)[3], float& saldo);
void Prelevamento (float (&conto_corrente)[3], short int (&attivita)[3], float saldo);
void Assegno (float (&conto_corrente)[3], short int (&attivita)[3], float saldo);


int main()
{
	setlocale(LC_ALL, "italian");
	
	float   conto_corrente[3] = { 0, 0, 0 };
	short int     attivita[3] = { 0, 0, 0 };
	const string procedure[3] = { "Versamento", "Prelevamento", "Assegno" };
	
	float saldo = 0.0f;
	
	short int operazione;
	
	cout << "Inserisci il saldo iniziale: ";
	cin  >> saldo;
	
	do
	{
		cout << "\n\nChe operazione vuoi fare?  1. Versamento, 2. Prelievo, 3. Assegno.  10 uscire --> ";
		
		while (!(cin >> operazione))
		{
			cout << "Devi inserire un numero: ";
			
			cin.clear();
			cin.ignore(123, '\n');
		}
		
		operazione--;
		
		switch (operazione)
		{
			
			case kVersamento: {
				Versamento (conto_corrente, attivita, saldo);
				break;
			}
			
			case kPrelevamento: {
				Prelevamento (conto_corrente, attivita, saldo);
				break;
			}
				
			case kAssegno: {
				Assegno (conto_corrente, attivita, saldo);
				break;
			}
				
		}
		
		
	} while (operazione != 9);
	
	cout << "\n \n \n \n \n \n";  // ok
	
	cout << setw(13) << "NOME" << " |" << setw(14) << "TOTALE" << " |" << setw(13) << "QUANTITA" << endl;
	cout << "----------------------------------------------" << endl;
	
	for (int prime_i = 0; prime_i < 3; prime_i++) {
		cout << setw(13) << procedure[prime_i] << " |" << setw(13) << conto_corrente[prime_i] << "€" << " |" << setw(13) << attivita[prime_i] << endl;
		
		cout << "----------------------------------------------" << endl;  	//  stavo facendo una funzione per poter utilizzare 
	}																		//  questa tabella in più proggetti ma non riuscirei 
																			//  a renderla flessibile per tutte ocasioni
	
	cout << "Saldo Finale: " << saldo - conto_corrente[kAssegno] - conto_corrente[kPrelevamento]  << endl;
	

		
	return 0;
}

bool VerificaSaldi (float denaro, float& conto)  //  potevo far meglio ma vabbe
{
	if (conto < denaro)
		{
			cout << "Non puoi effettuare questa transazione! il tuo saldo è pari a: " << conto;
			return false;
		}
	else
		{
			conto -= denaro;
			return true;
		}
}

void Versamento (float (&conto_corrente)[3], short int (&attivita)[3], float& saldo)
{
	float denaro = 0.0f;
	
	cout << "Quanto denaro vuoi versare? ";
	cin  >> denaro;
	
	saldo += denaro;
	
	conto_corrente[kVersamento] += denaro;
	attivita[kVersamento]++;
	
}

void Prelevamento (float (&conto_corrente)[3], short int (&attivita)[3], float saldo)
{
	float denaro = 0.0f;
	
	cout << "Quanto vuoi prelevare? ";
	cin  >> denaro;
	
	VerificaSaldi(denaro, saldo);
	
	conto_corrente[kPrelevamento] += denaro;
	attivita[kPrelevamento]++;
}

void Assegno (float (&conto_corrente)[3], short int (&attivita)[3], float saldo)
{
	float denaro = 0.0f;
	
	cout << "Di quanto lo vuoi l'assegno? ";
	cin  >> denaro;
	
	VerificaSaldi(denaro, saldo);
	
	conto_corrente[kAssegno] += denaro;
	attivita[kAssegno]++;
}

#include <iostream>

using namespace std;

//  spezzato un po, giusto per provare

class BeniImmobili
{
private:
	int codice[4];
	int  metri[4];
	int stanze[4];
	
//	int   massimo = stanze[0];  //  cosi non si può fare!
	int   massimo;
	
public:
	BeniImmobili() : codice{}, metri{}, stanze{}, massimo(stanze[0]) {}
	
	void aggiungere_appartamento()
	{
		for (int indice = 0; indice < 3; indice++)
		{
			cout << "Inserisci il codice di questa casa: ";
			cin  >>  codice[indice];
			
			cout << "Quanti metri quadri ha (int): ";
			cin  >>  metri[indice];
			
			cout << "Quante stanze ha: ";
			cin  >>  stanze[indice];
			
			cout << endl;
		}
	}
	
	void trova_appartaento()
	{
		for (int indice = 0; indice < 4; indice++)
			if (stanze[indice] > massimo)
				massimo = indice;
	}
	
	void mostra_appartamento()
	{
		cout << "Il maggior numero delle stanze ha la casa con il numero " << codice[massimo] << endl;
	}
	
};


int main()
{
	setlocale(LC_ALL, "italian");
	
	BeniImmobili appartamenti1, appartamenti2;
	
//	for (int i = 0; i < 4; i++) //  lo potevo mettere dirretemente nella class
//		appartamenti1.piu_appartamento(i);
	
	appartamenti1.aggiungere_appartamento();
	appartamenti1.trova_appartaento();
	
	appartamenti2.aggiungere_appartamento();
	appartamenti2.trova_appartaento();
	
	cout << "Appartamenti uno: ";
	appartamenti1.mostra_appartamento();
	
	cout << "Appartamenti due: ";
	appartamenti2.mostra_appartamento();
	
	
	return 0;
}
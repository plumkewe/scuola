#include <iostream>
#include <algorithm>

using namespace std;

//  

struct BeniImmobili
{
	int codice;
	int  metri;
	int stanze;
};


int main()
{
	setlocale(LC_ALL, "italian");
	
	BeniImmobili abbitazioni[4];
	
	int massimo = abbitazioni[0].stanze;
	
	for (int prime_i = 0; prime_i < 3; prime_i++)
	{
		cout << "Inserisci il codice di questa casa: ";
		cin  >>  abbitazioni[prime_i].codice;
		
		cout << "Quanti metri quadri ha (int): ";
		cin  >>  abbitazioni[prime_i].metri;
		
		cout << "Quante stanze ha: ";
		cin  >>  abbitazioni[prime_i].stanze;
		
		if (abbitazioni[prime_i].stanze > massimo)
			massimo = prime_i;
		
		cout << endl;
	}
	
	cout << "\nIl maggior numero delle stanze ha la casa con il numero " <<  abbitazioni[massimo].codice;
	
	
	return 0;
}
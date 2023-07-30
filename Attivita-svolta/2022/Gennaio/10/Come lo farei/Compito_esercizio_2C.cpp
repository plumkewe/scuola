#include <iostream>
#include <array>
#include <numeric>
#include <algorithm>

using namespace std;

//  

int riempire (array <int, 20> &nome, int i);


int main()
{
	setlocale(LC_ALL, "italian");
	
	array <int, 20> numeri;
	
	
	riempire (numeri, 0);
	
	int* minimo = min_element(numeri.begin(), numeri.end());
	int somma = accumulate(numeri.begin(), numeri.end(), 0);
	
	cout << "\nLa somma dell'array è pari a: " << somma << endl;
	cout << "Il valore minimo è pari a: " << *minimo << endl;
	
	
	return 0;
}

int riempire (array <int, 20> &nome_array, int i)
{
	if (i == nome_array.size())
		return 0;
	
	else {
		cout << "Inserisci il numero " << i + 1 << ": ";
		cin >> nome_array[i];
		
		i ++;
	}
	
	
	return riempire (nome_array, i);
}
#include <iostream>
#include <array>
#include <numeric>

using namespace std;

//  

int riempire (array <int, 10> &nome, int i);


int main() {
	setlocale(LC_ALL, "italian");
	
	
	array <int, 10> numeri;
	
	
	riempire(numeri, 0);
	
	
	int somma = accumulate(numeri.begin(), numeri.end(), 0);
	int media = somma / 10;
	
	int count = count_if(numeri.begin(), numeri.end(), [&](int const& i){return i >= media;});
	
	cout << "\nIn totale " << count << " numeri sono maggiori o uguali alla media (" << media << ")";
	

	return 0;
}

int riempire (array <int, 10> &nome_array, int i)
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

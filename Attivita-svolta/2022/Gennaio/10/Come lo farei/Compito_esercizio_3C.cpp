#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

//  

int riempire (array <int, 10> &nome, int i);
void stampa (const array<int, 10> nome, int i);

int main() {
	setlocale(LC_ALL, "italian");
	
	
	array <int, 10> numeri;
	array <int, 10> numeri_D;
	
	
	riempire(numeri, 0);
	
	
	for (int i = 0; i < 10; i++)
		numeri_D[i] = numeri[i] * 2;
	
	
	cout << "\nArray prima: ";
	stampa (numeri, 0);
	
	cout << "\nArray dopo: ";
	stampa (numeri_D, 0);
	
	
	
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

void stampa (const array<int, 10> nome_array, int i)
{
	if (i == nome_array.size())
		return;
	
	cout << nome_array[i] << " ";
	i ++;
	
	
	stampa(nome_array, i);
}
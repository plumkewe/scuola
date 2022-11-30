#include <iostream>

using namespace std;

//  


int main() {
	setlocale(LC_ALL, "italian");
	
	int a, b, c;
	
	bool tuttook = true;
	
	cout << "Inserisci le misure dei tre lati (maggiori di zero): ";
	cin >> a >> b >> c;
	
	if ((a + b <= c) || (a + c <= b) || (c + b <= a))
		tuttook = false;
	
	if (tuttook == true)
		cout << "Le tue lunghezze possono essere lati di un triangolo";
	
	else 
		cout << "Le tre lunghezze non possono essere lati di un triangolo";
	
	
	return 0;
}
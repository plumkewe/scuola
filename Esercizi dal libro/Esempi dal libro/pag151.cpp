#include <iostream>

using namespace std;

//  

void calcola (int &valrif) {
	
	valrif = valrif + 5;
	
}

int main() {
	setlocale(LC_ALL, "italian");
	
	int x;
	x = 9;
	
	calcola(x);
	
	cout << x;
	
	
	return 0;
}
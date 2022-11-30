#include <iostream>

using namespace std;

//  


int main() {
	setlocale(LC_ALL, "italian");
	
	int fatt, x = 1, i;
	
	while (x <= 10) {
		
		fatt = 1;
		i = 1;
		
		while (i <= x)
			
			fatt *= i++;
		
		cout << "Fattoriale di " << x << " = " << fatt << '\n';
		
		x++;
	}
	
	
	return 0;
}
#include <iostream>

using namespace std;

//  


int main() {
	setlocale(LC_ALL, "italian");
	
	int i, j, v[100];
	
	for (i = 0; i < 100; ++i)
		v[i] = i + 1;

	for (i = 1; i < 50; i++) {
		
		if (v[i] == 0) continue;
			
		for (j = i + 1; j < 100; ++j)
			if (v[j] % v[i] == 0) v[j] = 0;
		
	}
	
	cout << "Elenco dei numeri primi compresi tra 1 e 100 " << '\n';
	
	for (i = 0; i < 100; ++i) {
		
		if (v[i] == 0) continue;
		cout << v[i] << '\n';
	}
	
	
	return 0;
}
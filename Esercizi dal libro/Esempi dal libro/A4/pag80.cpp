#include <iostream>

using namespace std;

//  


int main() {
	setlocale(LC_ALL, "italian");
	
	int n;
	
	cin >> n;
	
	if (n > 0)
		cout << "Il numero è positivo";
	
	else
		if (n < 0)
			cout << "Il numero è negativo";
		
		else
			cout << "Il numero è nullo";
	
	
	return 0;
}
#include <iostream>

using namespace std;

//  


int main() {
	setlocale(LC_ALL, "italian");
	
	int a, b;
	double soluzione;
	
	cin >> a;
	cin >> b;
	
	if (a != 0) {
		
		soluzione = (double) b/a;
		cout << "La soluzione è " << soluzione;
	}
	
	else
		if (b != 0)
			
			cout << "L'equazione non ammette soluzioni";
		
		else
			cout << "L'equazione ammette infinite soluzioni";
	
	
	return 0;
}
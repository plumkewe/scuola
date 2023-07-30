#include <iostream>

using namespace std;

//  


int main() {
	setlocale(LC_ALL, "italian");
	
	int i = 15, a;
	
	a = ( i++ ) * 2;
	
	cout << "Post incremento: " << a << ", " << i << '\n';
	
	i = 15;
	a = ( ++i ) * 2;
	
	cout << "Pre incremento: " << a << ", " << i;
	
	
	
	return 0;
}
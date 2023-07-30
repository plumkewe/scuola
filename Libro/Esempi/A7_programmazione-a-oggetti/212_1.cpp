#include <iostream>

using namespace std;

//  


class Rettangolo {
	
private:
	int base, altezza;
	
public:
	Rettangolo () {
		
		base = 0;
		altezza = 0;
		
	}
	
	int area () {
		
		return base * altezza;
		
	}
	
	int perimentro () {
		
		return (base + altezza) * 2;
		
	}
	
};